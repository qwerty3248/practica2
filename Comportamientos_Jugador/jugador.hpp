#ifndef COMPORTAMIENTOJUGADOR_H
#define COMPORTAMIENTOJUGADOR_H

#include "comportamientos/comportamiento.hpp"

#include <list>


struct stateN0{
  ubicacion jugador;
  ubicacion colaborador;
  Action ultimaOrdenColaborador;

  bool operator== (const stateN0 &x ) const {
    if (jugador == x.jugador and colaborador.f == x.colaborador.f  and colaborador.c == x.colaborador.c ){
      return true;
    }else {
      return false;
    }
  }

};

struct nodeN0{
  stateN0 st;
  list<Action> secuencia;

  bool operator == (const nodeN0 &n)const{
    return (st == n.st);
  }
  bool operator<(const nodeN0 &b) const{
    if (st.jugador.f < b.st.jugador.f){
      return true;
    }else if (st.jugador.f == b.st.jugador.f and st.jugador.c < b.st.jugador.c){
      return true;
    }else if (st.jugador.f == b.st.jugador.f and st.jugador.c == b.st.jugador.c and st.jugador.brujula < b.st.jugador.brujula){
      return true;
    }else{
      return false;
    }
  }

};


class ComportamientoJugador : public Comportamiento {
  public:
    ComportamientoJugador(unsigned int size) : Comportamiento(size) {
      // Inicializar Variables de Estado
    }
    ComportamientoJugador(std::vector< std::vector< unsigned char> > mapaR) : Comportamiento(mapaR) {
      // Inicializar Variables de Estado
      hayPlan = false;
    }
    ComportamientoJugador(const ComportamientoJugador & comport) : Comportamiento(comport){}
    ~ComportamientoJugador(){}
    void VisualizaPlan(const stateN0 &st, const list<Action> &plan);
    Action think(Sensores sensores);
    int interact(Action accion, int valor);


  private:
    // Declarar Variables de Estado
    list<Action> plan;
    bool hayPlan;
    stateN0 c_state;
    ubicacion goal;





};

#endif
