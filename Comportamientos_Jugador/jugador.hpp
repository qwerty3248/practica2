#ifndef COMPORTAMIENTOJUGADOR_H
#define COMPORTAMIENTOJUGADOR_H

#include "comportamientos/comportamiento.hpp"

#include <list>
#include <tuple>


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

struct stateN1{
  
  ubicacion jugador;
  ubicacion colaborador;
  Action ultimaOrdenColaborador;
  bool operator==(const stateN1 & x) const{
    if(jugador == x.jugador and colaborador == x.colaborador && ultimaOrdenColaborador == x.ultimaOrdenColaborador)
      return true;
    else
      return false;
  }
  
};

struct nodeN1{
stateN1 st;
list<Action> secuencia;
bool operator ==(const nodeN1 &n) const{
return (st == n.st);
}
//ahora el cola es importante para las comparaciones
bool operator <(const nodeN1 &n) const{
  if(st.jugador.f < n.st.jugador.f)
    return true;
  else if(st.jugador.f == n.st.jugador.f && st.jugador.c < n.st.jugador.c)
    return true;
  else if(st.jugador.f == n.st.jugador.f && st.jugador.c == n.st.jugador.c && st.jugador.brujula < n.st.jugador.brujula)
  return true;
  else if(st.jugador.f == n.st.jugador.f && st.jugador.c == n.st.jugador.c && st.jugador.brujula == n.st.jugador.brujula && st.colaborador.f < n.st.colaborador.f)
    return true;
  else if(st.jugador.f == n.st.jugador.f && st.jugador.c == n.st.jugador.c && st.jugador.brujula == n.st.jugador.brujula && st.colaborador.f == n.st.colaborador.f && st.colaborador.c < n.st.colaborador.c)
    return true;
  else if(st.jugador.f == n.st.jugador.f && st.jugador.c == n.st.jugador.c && st.jugador.brujula == n.st.jugador.brujula && st.colaborador.f == n.st.colaborador.f && st.colaborador.c == n.st.colaborador.c && st.colaborador.brujula < n.st.colaborador.brujula)
   return true;
  else if (st.jugador.f == n.st.jugador.f && st.jugador.c == n.st.jugador.c && st.jugador.brujula == n.st.jugador.brujula && st.colaborador.f == n.st.colaborador.f && st.colaborador.c == n.st.colaborador.c && st.colaborador.brujula == n.st.colaborador.brujula && st.ultimaOrdenColaborador < n.st.ultimaOrdenColaborador) 
    return true;
  else
    return false;
}
};
struct stateN2{
ubicacion jugador;
ubicacion colaborador;
int coste; //coste de llegar a ese nodo
bool bikini;
bool zapatillas;
bool operator==(const stateN2 & x) const{
if(jugador == x.jugador && bikini == x.bikini && zapatillas == x.zapatillas) //el coste no influye en que 2 nodos sean iguales
  return true;
else
  return false;
}
};
struct nodeN2{
  stateN2 st;
  list<Action> secuencia;

  bool operator ==(const nodeN2 &n) const{
    return (st == n.st) ;
  }

  bool operator <(const nodeN2 &n) const{
    if(st.jugador.f < n.st.jugador.f)
      return true;
    else if(st.jugador.f == n.st.jugador.f && st.jugador.c < n.st.jugador.c)
      return true;
    else if(st.jugador.f == n.st.jugador.f && st.jugador.c == n.st.jugador.c && st.jugador.brujula < n.st.jugador.brujula)
      return true;
    else if(st.jugador.f == n.st.jugador.f && st.jugador.c == n.st.jugador.c && st.jugador.brujula == n.st.jugador.brujula && st.zapatillas < n.st.zapatillas)
      return true;
    else if(st.jugador.f == n.st.jugador.f && st.jugador.c == n.st.jugador.c && st.jugador.brujula == n.st.jugador.brujula && st.zapatillas == n.st.zapatillas && st.bikini < n.st.bikini)
      return true;
    else
      return false;
  }
};
struct stateN3{
  ubicacion jugador;
  ubicacion colaborador;
  Action ultimaAccionColaborador;
  int coste; //coste de llegar a ese nodo
  int h; //valor de la heuristica
  bool bikini_jugador;
  bool zapatillas_jugador;
  bool bikini_colaborador;
  bool zapatillas_colaborador;
  bool operator==(const stateN3 & x) const{
    if(jugador == x.jugador && colaborador == x.colaborador && bikini_jugador == x.bikini_jugador && zapatillas_jugador == x.zapatillas_jugador && bikini_colaborador == x.bikini_colaborador && zapatillas_colaborador == x.zapatillas_colaborador )
      return true;
    else
      return false;
  }
};

struct nodeN3{
  stateN3 st;
  list<Action> secuencia;
  bool operator ==(const nodeN3 &n) const{
  return (st == n.st) ;
  }
  //ahora es importante también el bikini y las zapas para ambos agentes
  bool operator <(const nodeN3 &n) const{
  if(st.jugador.f < n.st.jugador.f)
    return true;
  else if(st.jugador.f == n.st.jugador.f && st.jugador.c < n.st.jugador.c)
    return true;
  else if(st.jugador.f == n.st.jugador.f && st.jugador.c == n.st.jugador.c && st.jugador.brujula < n.st.jugador.brujula)
    return true;
  else if(st.jugador.f == n.st.jugador.f && st.jugador.c == n.st.jugador.c && st.jugador.brujula == n.st.jugador.brujula && st.colaborador.f < n.st.colaborador.f)
    return true;
  else if(st.jugador.f == n.st.jugador.f && st.jugador.c == n.st.jugador.c && st.jugador.brujula == n.st.jugador.brujula && st.colaborador.f == n.st.colaborador.f && st.colaborador.c < n.st.colaborador.c)
    return true;
  else if(st.jugador.f == n.st.jugador.f && st.jugador.c == n.st.jugador.c && st.jugador.brujula == n.st.jugador.brujula && st.colaborador.f == n.st.colaborador.f && st.colaborador.c == n.st.colaborador.c && st.colaborador.brujula < n.st.colaborador.brujula)
    return true;
  else if(st.jugador.f == n.st.jugador.f && st.jugador.c == n.st.jugador.c && st.jugador.brujula == n.st.jugador.brujula && st.colaborador.f == n.st.colaborador.f && st.colaborador.c == n.st.colaborador.c && st.colaborador.brujula == n.st.colaborador.brujula && st.zapatillas_jugador < n.st.zapatillas_jugador)
    return true;
  else if(st.jugador.f == n.st.jugador.f && st.jugador.c == n.st.jugador.c && st.jugador.brujula == n.st.jugador.brujula && st.colaborador.f == n.st.colaborador.f && st.colaborador.c == n.st.colaborador.c && st.colaborador.brujula == n.st.colaborador.brujula && st.zapatillas_jugador == n.st.zapatillas_jugador && st.bikini_jugador < n.st.bikini_jugador)
    return true;
  else if(st.jugador.f == n.st.jugador.f && st.jugador.c == n.st.jugador.c && st.jugador.brujula == n.st.jugador.brujula && st.colaborador.f == n.st.colaborador.f && st.colaborador.c == n.st.colaborador.c && st.colaborador.brujula == n.st.colaborador.brujula && st.zapatillas_jugador == n.st.zapatillas_jugador && st.bikini_jugador == n.st.bikini_jugador && st.zapatillas_colaborador < n.st.zapatillas_colaborador)
    return true;
  else if(st.jugador.f == n.st.jugador.f && st.jugador.c == n.st.jugador.c && st.jugador.brujula == n.st.jugador.brujula && st.colaborador.f == n.st.colaborador.f && st.colaborador.c == n.st.colaborador.c && st.colaborador.brujula == n.st.colaborador.brujula && st.zapatillas_jugador == n.st.zapatillas_jugador && st.bikini_jugador == n.st.bikini_jugador && st.zapatillas_colaborador == n.st.zapatillas_colaborador && st.bikini_colaborador < n.st.bikini_colaborador)
    return true;
  else if (st.jugador.f == n.st.jugador.f && st.jugador.c == n.st.jugador.c && st.jugador.brujula == n.st.jugador.brujula && st.colaborador.f == n.st.colaborador.f && st.colaborador.c == n.st.colaborador.c && st.colaborador.brujula == n.st.colaborador.brujula && st.zapatillas_jugador == n.st.zapatillas_jugador && st.bikini_jugador == n.st.bikini_jugador && st.zapatillas_colaborador == n.st.zapatillas_colaborador && st.bikini_colaborador == n.st.bikini_colaborador && st.ultimaAccionColaborador < n.st.ultimaAccionColaborador)
    return true; 
  else
    return false;
  }
  
};


class ComportamientoJugador : public Comportamiento {
  public:
    ComportamientoJugador(unsigned int size) : Comportamiento(size) {
      // Inicializar Variables de Estado
      hayPlan = false;
      tamanioMapa = size;
      escapando = false;
      for(int i = 0; i < 3; i++){
        for(int j = 0; j < tamanioMapa; j++){
          mapaResultado[i][j] = 'P';
          mapaResultado[tamanioMapa -i -1][j] = 'P';
          mapaResultado[j][i]='P';
          mapaResultado[j][tamanioMapa -i -1]='P';
        }
      }
      last_action = actIDLE;
    }
    ComportamientoJugador(std::vector< std::vector< unsigned char> > mapaR) : Comportamiento(mapaR) {
      // Inicializar Variables de Estado
      hayPlan = false;

    }
    ComportamientoJugador(const ComportamientoJugador & comport) : Comportamiento(comport){}
    ~ComportamientoJugador(){}
    void VisualizaPlan(const stateN0 &st, const list<Action> &plan);
    //void VisualizaPlan(const stateN1 &st, const list<Action> &plan);
    void VisualizaPlan(const ubicacion & jugador, const ubicacion & colaborador, const list<Action> &plan);
    void VisualizaPlan(const stateN1 &st, const list<Action> &plan);
    void VisualizaPlan(const stateN3 &st, const list<Action> &plan);
    Action think(Sensores sensores);
    void EfectoLastAction();
    void PonerTerrenoEnMatriz(const vector<unsigned char> & terreno,const ubicacion & st,vector< vector<unsigned char> > & matriz);
   // bool JugadorVeColaborador(const ubicacion & j, const ubicacion & c);
    int interact(Action accion, int valor);


  private:
    // Declarar Variables de Estado
    list<Action> plan;
    bool hayPlan;
    ubicacion ubicacion_juga;
    ubicacion ubicacion_cola;
    ubicacion goal;
    stateN0 c_stateN0;
    stateN1 c_stateN1;
    stateN2 c_stateN2;
    stateN3 c_stateN3;

    //El reto

    int tamanioMapa;
    bool ubicado;
    Action last_action;
    bool bikini;
    bool zapatillas;
    bool bikini_colaborador;
    bool zapatillas_colaborador;
    bool escapando;//por si un aldeano o lobo se pone en nuestro camino




};

#endif
