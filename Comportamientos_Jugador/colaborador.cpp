#include "../Comportamientos_Jugador/colaborador.hpp"
#include "motorlib/util.h"

Action ComportamientoColaborador::think(Sensores sensores) { 
  if (sensores.ActionSent == actIDLE)
    return last_action;
  else {
    last_action = sensores.ActionSent;
    return sensores.ActionSent;
  }
}

int ComportamientoColaborador::interact(Action accion, int valor) {
    return 0;
}
