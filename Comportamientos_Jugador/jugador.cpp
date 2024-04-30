#include "../Comportamientos_Jugador/jugador.hpp"
#include "motorlib/util.h"

#include <iostream>
#include <cmath>
#include <set>
#include <stack>
#include<queue>
#include <unistd.h>


bool jugadorVeColaborador(const ubicacion & j, const ubicacion & s){
	
	switch(j.brujula){
		case norte:
			if( (j.f - 1) == s.f && (j.c - 1) == s.c )
				return true;
			if( (j.f - 1) == s.f && (j.c) == s.c )
				return true;
			if( (j.f - 1) == s.f&& (j.c + 1) == s.c )
				return true;
			if( (j.f - 2) == s.f&& (j.c -2) == s.c )
				return true;
			if( (j.f - 2) == s.f&& (j.c - 1) == s.c )
				return true;
			if( (j.f - 2) == s.f&& (j.c) == s.c )
				return true;
			if( (j.f - 2) == s.f&& (j.c + 1) == s.c )
				return true;
			if( (j.f - 2) == s.f&& (j.c + 2) == s.c )
				return true;
			if( (j.f - 3) == s.f&& (j.c - 3) == s.c )
				return true;
			if( (j.f - 3) == s.f&& (j.c - 2) == s.c )
				return true;
			if( (j.f - 3) == s.f&& (j.c - 1) == s.c )
				return true;
			if( (j.f - 3) == s.f&& (j.c) == s.c )
				return true;
			if( (j.f - 3) == s.f&& (j.c + 1) == s.c )
				return true;
			if( (j.f - 3) == s.f&& (j.c + 2) == s.c )
				return true;
			if( (j.f - 3) == s.f&& (j.c + 3) == s.c )
				return true;
			break;
		case sur :
			if( (j.f + 1) == s.f && (j.c + 1) == s.c )
				return true;
			if( (j.f + 1) == s.f && (j.c) == s.c )
				return true;
			if( (j.f + 1) == s.f && (j.c - 1) == s.c )
				return true;
			if( (j.f + 2) == s.f && (j.c + 2) == s.c )
				return true;
			if( (j.f + 2) == s.f && (j.c + 1) == s.c )
				return true;
			if( (j.f + 2) == s.f && (j.c) == s.c )
				return true;
			if( (j.f + 2) == s.f && (j.c - 1) == s.c )
				return true;
			if( (j.f + 2) == s.f && (j.c - 2) == s.c )
				return true;
			if( (j.f + 3) == s.f && (j.c + 3) == s.c )
				return true;
			if( (j.f + 3) == s.f && (j.c + 2) == s.c )
				return true;
			if( (j.f + 3) == s.f && (j.c + 1) == s.c )
				return true;
			if( (j.f + 3) == s.f && (j.c) == s.c )
				return true;
			if( (j.f + 3) == s.f && (j.c - 1) == s.c )
				return true;
			if( (j.f + 3) == s.f && (j.c - 2) == s.c )
				return true;
			if( (j.f + 3) == s.f && (j.c - 3) == s.c )
				return true;

			break;	
		case este:
			if( (j.f - 1) == s.f && (j.c + 1) == s.c )
				return true;
			if( (j.f) == s.f && (j.c + 1) == s.c )
				return true;
			if( (j.f + 1) == s.f && (j.c + 1) == s.c )
				return true;
			if( (j.f - 2) == s.f && (j.c + 2) == s.c )
				return true;
			if( (j.f - 1) == s.f && (j.c + 2) == s.c )
				return true;
			if( (j.f) == s.f && (j.c + 2) == s.c )
				return true;
			if( (j.f + 1) == s.f && (j.c + 2) == s.c )
				return true;
			if( (j.f + 2) == s.f && (j.c + 2) == s.c )
				return true;
			if( (j.f - 3) == s.f && (j.c + 3) == s.c )
				return true;
			if( (j.f - 2) == s.f && (j.c + 3) == s.c )
				return true;
			if( (j.f -1 ) == s.f && (j.c + 3) == s.c )
				return true;
			if( (j.f) == s.f && (j.c + 3) == s.c )
				return true;
			if( (j.f + 1) == s.f && (j.c + 3) == s.c )
				return true;
			if( (j.f + 2) == s.f && (j.c + 3) == s.c )
				return true;
			if( (j.f + 3) == s.f && (j.c + 3) == s.c )
				return true;

		break;
		case oeste:
			if( (j.f + 1) == s.f && (j.c - 1) == s.c )
				return true;
			if( (j.f) == s.f && (j.c - 1) == s.c )
				return true;
			if( (j.f - 1) == s.f && (j.c - 1) == s.c )
				return true;
			if( (j.f + 2) == s.f && (j.c - 2) == s.c )
				return true;
			if( (j.f + 1) == s.f && (j.c - 2) == s.c )
				return true;
			if( (j.f) == s.f && (j.c - 2) == s.c )
				return true;
			if( (j.f - 1) == s.f && (j.c - 2) == s.c )
				return true;
			if( (j.f - 2) == s.f && (j.c - 2) == s.c )
				return true;
			if( (j.f + 3) == s.f && (j.c - 3) == s.c )
				return true;
			if( (j.f + 2) == s.f && (j.c - 3) == s.c )
				return true;
			if( (j.f + 1) == s.f && (j.c - 3) == s.c )
				return true;
			if( (j.f) == s.f && (j.c - 3) == s.c )
				return true;
			if( (j.f - 1) == s.f && (j.c - 3) == s.c )
				return true;
			if( (j.f - 2) == s.f && (j.c - 3) == s.c )
				return true;
			if( (j.f - 3) == s.f && (j.c - 3) == s.c )
				return true;
		break;
		case noreste:
			if( (j.f - 1) == s.f && (j.c ) == s.c )
				return true;
			if( (j.f - 1) == s.f && (j.c + 1) == s.c )
				return true;
			if( (j.f) == s.f && (j.c + 1) == s.c )
				return true;
			if( (j.f - 2) == s.f && (j.c) == s.c )
				return true;
			if( (j.f - 2) == s.f && (j.c + 1) == s.c )
				return true;
			if( (j.f - 2) == s.f && (j.c + 2) == s.c )
				return true;
			if( (j.f - 1) == s.f && (j.c + 2) == s.c )
				return true;
			if( (j.f) == s.f && (j.c + 2) == s.c )
				return true;
			if( (j.f - 3) == s.f && (j.c) == s.c )
				return true;
			if( (j.f - 3) == s.f && (j.c + 1) == s.c )
				return true;
			if( (j.f - 3) == s.f && (j.c + 2) == s.c )
				return true;
			if( (j.f - 3) == s.f && (j.c + 3) == s.c )
				return true;
			if( (j.f - 2) == s.f && (j.c + 3) == s.c )
				return true;
			if( (j.f - 1) == s.f && (j.c + 3) == s.c )
				return true;
			if( (j.f) == s.f && (j.c + 3) == s.c )
				return true;
		break;
		case noroeste:
			if( (j.f) == s.f && (j.c - 1) == s.c )
				return true;
			if( (j.f - 1) == s.f && (j.c - 1) == s.c )
				return true;
			if( (j.f - 1) == s.f && (j.c) == s.c )
				return true;
			if( (j.f) == s.f && (j.c - 2) == s.c )
				return true;
			if( (j.f - 1) == s.f && (j.c - 2) == s.c )
				return true;
			if( (j.f - 2) == s.f && (j.c - 2) == s.c )
				return true;
			if( (j.f - 2) == s.f && (j.c - 1) == s.c )
				return true;
			if( (j.f - 2) == s.f && (j.c) == s.c )
				return true;
			if( (j.f) == s.f && (j.c - 3) == s.c )
				return true;
			if( (j.f - 1) == s.f && (j.c - 3) == s.c )
				return true;
			if( (j.f - 2) == s.f && (j.c - 3) == s.c )
				return true;
			if( (j.f - 3) == s.f && (j.c - 3) == s.c )
				return true;
			if( (j.f - 3) == s.f && (j.c - 2) == s.c )
				return true;
			if( (j.f - 3) == s.f && (j.c - 1) == s.c )
				return true;
			if( (j.f - 3) == s.f && (j.c) == s.c )
				return true;
		break;
		case sureste:
			if( (j.f) == s.f && (j.c + 1) == s.c )
				return true;
			if( (j.f + 1) == s.f && (j.c + 1) == s.c )
				return true;
			if( (j.f + 1) == s.f && (j.c) == s.c )
				return true;
			if( (j.f) == s.f && (j.c + 2) == s.c )
				return true;
			if( (j.f + 1) == s.f && (j.c + 2) == s.c )
				return true;
			if( (j.f + 2) == s.f && (j.c + 2) == s.c )
				return true;
			if( (j.f + 2) == s.f && (j.c + 1) == s.c )
				return true;
			if( (j.f + 2) == s.f && (j.c) == s.c )
				return true;
			if( (j.f) == s.f && (j.c + 3) == s.c )
				return true;
			if( (j.f + 1) == s.f && (j.c + 3) == s.c )
				return true;
			if( (j.f + 2) == s.f && (j.c + 3) == s.c )
				return true;
			if( (j.f + 3) == s.f && (j.c + 3) == s.c )
				return true;
			if( (j.f + 3) == s.f && (j.c + 2) == s.c )
				return true;
			if( (j.f + 3) == s.f && (j.c + 1) == s.c )
				return true;
			if( (j.f + 3) == s.f && (j.c) == s.c )
				return true;
		break;
		case suroeste:
			if( (j.f + 1) == s.f && (j.c) == s.c )
				return true;
			if( (j.f + 1) == s.f && (j.c - 1) == s.c )
				return true;
			if( (j.f) == s.f && (j.c - 1) == s.c )
				return true;
			if( (j.f + 2) == s.f && (j.c) == s.c )
				return true;
			if( (j.f + 2) == s.f && (j.c - 1) == s.c )
				return true;
			if( (j.f + 2) == s.f && (j.c - 2) == s.c )
				return true;
			if( (j.f + 1) == s.f && (j.c - 2) == s.c )
				return true;
			if( (j.f) == s.f && (j.c - 2) == s.c )
				return true;
			if( (j.f + 3) == s.f && (j.c) == s.c )
				return true;
			if( (j.f + 3) == s.f && (j.c - 1) == s.c )
				return true;
			if( (j.f + 3) == s.f && (j.c - 2) == s.c )
				return true;
			if( (j.f + 3) == s.f && (j.c - 3) == s.c )
				return true;
			if( (j.f + 2) == s.f && (j.c - 3) == s.c )
				return true;
			if( (j.f + 1) == s.f && (j.c - 3) == s.c )
				return true;
			if( (j.f) == s.f && (j.c - 3) == s.c )
				return true;
		break;

	}
	return false;
	// obtiene la diferencia en fila y columna de ambos agentes
    
	

}



bool casillaTransitable(const ubicacion &x, const vector<vector<unsigned char>> &mapa){
	return (mapa[x.f][x.c] != 'P' and mapa[x.f][x.c] != 'M');
}

ubicacion NextCasilla(const ubicacion &pos){
	ubicacion next = pos;
	switch (pos.brujula){
		case norte:
			next.f = pos.f -1;
			break;
		case noreste:
			next.f = pos.f -1;
			next.c = pos.c +1;
			break;
		case este:
			next.c = pos.c +1;
			break;
		case sureste:
			next.f = pos.f +1;
			next.c = pos.c +1;
			break;
		case sur:
			next.f = pos.f +1;
			break;
		case suroeste:
			next.f = pos.f +1;
			next.c = pos.c -1;
			break;
		case oeste:
			next.c = pos.c -1;
			break;
		case noroeste:
			next.f = pos.f -1;
			next.c = pos.c -1;
			break;
	}
	return next;
}
stateN1 applyN1(const Action & a, const stateN1 & st, const vector<vector<unsigned char>> & mapa){
	stateN1 st_result = st;
	ubicacion sig_ubicacion, sig_ubicacion2;
	switch(a){
		case actWALK:
			sig_ubicacion = NextCasilla(st.jugador);
			if(casillaTransitable(sig_ubicacion,mapa) && !(sig_ubicacion.f == st.colaborador.f && sig_ubicacion.c == st.colaborador.c)){
				 st_result.jugador = sig_ubicacion;
			}
		break;
		case actRUN:
			sig_ubicacion = NextCasilla(st.jugador);
			if(casillaTransitable(sig_ubicacion,mapa) and !(sig_ubicacion.f == st.colaborador.f and sig_ubicacion.c == st.colaborador.c)){
				sig_ubicacion2 = NextCasilla(sig_ubicacion);
				if(casillaTransitable(sig_ubicacion2,mapa) and !(sig_ubicacion2.f == st.colaborador.f and sig_ubicacion2.c == st.colaborador.c)){
					st_result.jugador =sig_ubicacion2;
				}
			}
		break;
		case actTURN_L:
			st_result.jugador.brujula = static_cast<Orientacion>((st_result.jugador.brujula+6)%8);
		break;

		case actTURN_SR:
			st_result.jugador.brujula = static_cast<Orientacion>((st_result.jugador.brujula+1)%8);
		break;
		case act_CLB_WALK:
			//if (jugadorVeColaborador(st.jugador,st.colaborador)){
				sig_ubicacion = NextCasilla(st.colaborador);
				if(casillaTransitable(sig_ubicacion,mapa) && !(sig_ubicacion.f == st.jugador.f && sig_ubicacion.c == st.jugador.c)){
					st_result.colaborador = sig_ubicacion;
					st_result.ultimaOrdenColaborador = act_CLB_WALK;
				}
			//}
		break;
		case act_CLB_TURN_SR:
			//if (jugadorVeColaborador(st.jugador,st.colaborador)){
				st_result.colaborador.brujula = static_cast<Orientacion>((st_result.colaborador.brujula + 1) % 8);
				st_result.ultimaOrdenColaborador = act_CLB_TURN_SR;
			//}
			
		break;
		case act_CLB_STOP:
			st_result.ultimaOrdenColaborador = act_CLB_STOP;
		break;




	}
	/*switch(st.ultimaOrdenColaborador){
		case act_CLB_WALK:
			sig_ubicacion = NextCasilla(st.colaborador);
			if (casillaTransitable(sig_ubicacion,mapa) && !(sig_ubicacion.f == st.jugador.f && sig_ubicacion.c == st.jugador.c)){
				st_result.colaborador = sig_ubicacion;
			}
			break;
		case act_CLB_TURN_SR:
			st_result.colaborador.brujula = static_cast<Orientacion>((st_result.colaborador.brujula + 1) % 8);
			break;	
		case act_CLB_STOP:
			break;
	}*/
	return st_result;
}
stateN0 applyN0(const Action &a, const stateN0 &st, const vector<vector<unsigned char>> mapa){
	stateN0 st_result = st;
	ubicacion sig_ubicacion, sig_ubicacion2;
	switch(a){

		case actWALK:
		sig_ubicacion = NextCasilla(st.jugador);
		if(casillaTransitable(sig_ubicacion,mapa) and !(sig_ubicacion.f == st.colaborador.f and sig_ubicacion.c == st.colaborador.c)){
			st_result.jugador = sig_ubicacion; 
		}
		break;

		case actRUN:
		sig_ubicacion = NextCasilla(st.jugador);
		if(casillaTransitable(sig_ubicacion,mapa) and !(sig_ubicacion.f == st.colaborador.f and sig_ubicacion.c == st.colaborador.c)){
			sig_ubicacion2 = NextCasilla(sig_ubicacion);
			if(casillaTransitable(sig_ubicacion2,mapa) and !(sig_ubicacion2.f == st.colaborador.f and sig_ubicacion2.c == st.colaborador.c)){
				st_result.jugador =sig_ubicacion2;
			}
		}
		break;

		case actTURN_L:
		st_result.jugador.brujula = static_cast<Orientacion>((st_result.jugador.brujula+6)%8);
		break;

		case actTURN_SR:
		st_result.jugador.brujula = static_cast<Orientacion>((st_result.jugador.brujula+1)%8);
		break;
	}
	return st_result;

}
bool Find(const stateN0 &item, const list<stateN0> &lista){
	auto it = lista.begin();
	while(it != lista.end() and !((*it) == item)){
		it++;
	}
	return (!(it == lista.end()));
}

bool Find(const stateN0 &item, const list<nodeN0> &lista){
	auto it = lista.begin();
	while(it!=lista.end() and !(it->st == item)){
		it++;
	}
	return (!(it == lista.end()));
}

void PintaPlan(const list<Action> &plan){
	auto it = plan.begin();
	while(it != plan.end()){
		if(*it == actWALK){
			cout<<"W ";
		}else if(*it == actRUN){
			cout<< "R ";
		}else if(*it == actTURN_SR){
			cout<< "r ";
		}else if(*it == actTURN_L){
			cout<< "L ";
		}else if(*it == act_CLB_WALK){
			cout<< "cW ";
		}else if(*it == act_CLB_TURN_SR){
			cout<<"cr ";
		}else if(*it == act_CLB_STOP){
			cout<<"cS ";
		}else if(*it == actIDLE){
			cout<<"I ";
		}else{
			cout<<"-_ ";
		}
		it++;
	}
	cout<< " ("<<plan.size()<<" acciones)\n";
}

void anulaMatriz(vector<vector<unsigned char>> &matriz){
	for(int i = 0; i<matriz.size();i++){
		for(int j = 0;j<matriz[0].size();j++){
			matriz[i][j] = 0;
		}
	}
}
void ComportamientoJugador::VisualizaPlan(const stateN1 &st, const list<Action> &plan)
{
    // anula la matriz del plan y copia el estado actual
    anulaMatriz(mapaConPlan);
    stateN1 cst = st;

    // itera por cada acción del plan
    auto it = plan.begin();
    while(it != plan.end()) {
        // ejecuta la última acción del colaborador
        if ((*it != act_CLB_WALK) && (*it != act_CLB_TURN_SR) && (*it != act_CLB_STOP)) {
            switch (cst.ultimaOrdenColaborador) {
                case act_CLB_WALK:
                    cst.colaborador = NextCasilla(cst.colaborador);
                    mapaConPlan[cst.colaborador.f][cst.colaborador.c] = 2;
                    break;
                case act_CLB_TURN_SR:
                    cst.colaborador.brujula = (Orientacion) ((cst.colaborador.brujula+1)%8);
                    break;
            }
        }

        // ejecuta la acción del plan
        switch (*it) {
            case actRUN:
                cst.jugador = NextCasilla(cst.jugador);
                mapaConPlan[cst.jugador.f][cst.jugador.c] = 3;
                cst.jugador = NextCasilla(cst.jugador);
                mapaConPlan[cst.jugador.f][cst.jugador.c] = 1;
                break;
            case actWALK:
                cst.jugador = NextCasilla(cst.jugador);
                mapaConPlan[cst.jugador.f][cst.jugador.c] = 1;
                break;
            case actTURN_SR:
                cst.jugador.brujula = (Orientacion) ((cst.jugador.brujula+1)%8);
                break;
            case actTURN_L:
                cst.jugador.brujula = (Orientacion) ((cst.jugador.brujula+6)%8);
                break;
            case act_CLB_WALK:
                cst.ultimaOrdenColaborador = act_CLB_WALK;
                cst.colaborador = NextCasilla(cst.colaborador);
                mapaConPlan[cst.colaborador.f][cst.colaborador.c] = 2;
                break;
            case act_CLB_TURN_SR:
                cst.ultimaOrdenColaborador = act_CLB_TURN_SR;
                cst.colaborador.brujula = (Orientacion) ((cst.colaborador.brujula+1)%8);
                break;
            case act_CLB_STOP:
                cst.ultimaOrdenColaborador = act_CLB_STOP;
                break;
        }

        it++; // siguiente acción
    }
}
void ComportamientoJugador::VisualizaPlan(const stateN0 &st, const list<Action> &plan){
	 anulaMatriz(mapaConPlan);
	 stateN0 cst = st;

	 auto it = plan.begin();
	 while(it != plan.end()){
		if((*it != act_CLB_WALK) and (*it != act_CLB_TURN_SR) and (*it != act_CLB_STOP)){
			switch (cst.ultimaOrdenColaborador){

				case act_CLB_WALK:
					cst.colaborador = NextCasilla(cst.colaborador);
					mapaConPlan[cst.colaborador.f][cst.colaborador.c];
					break;
				case act_CLB_TURN_SR:
					cst.colaborador.brujula = (Orientacion)((cst.colaborador.brujula+1)%8);
					break;					
			}
		}
		switch(*it){

			case actRUN:
				cst.jugador = NextCasilla(cst.jugador);
				mapaConPlan[cst.jugador.f][cst.jugador.c] = 3;
				cst.jugador = NextCasilla(cst.jugador);
				mapaConPlan[cst.jugador.f][cst.jugador.c] = 1;
				break;
			case actWALK:
				cst.jugador = NextCasilla(cst.jugador);
				mapaConPlan[cst.jugador.f][cst.jugador.c] = 1;
				break;
			case actTURN_SR:
				cst.jugador.brujula = (Orientacion)((cst.jugador.brujula+1)%8);
				break;
			case actTURN_L:
				cst.jugador.brujula = (Orientacion)((cst.jugador.brujula+6)%8);
				break;
			case act_CLB_WALK:
				cst.colaborador = NextCasilla(cst.colaborador);
				cst.ultimaOrdenColaborador = act_CLB_TURN_SR;
				break;
			case act_CLB_TURN_SR:
				cst.colaborador.brujula = (Orientacion)((cst.colaborador.brujula+1)%8);
				cst.ultimaOrdenColaborador = act_CLB_TURN_SR;
				break;
			case act_CLB_STOP:
				cst.ultimaOrdenColaborador = act_CLB_STOP;
				break;
		}
		it++;
	 }
}
void ComportamientoJugador::VisualizaPlan(const stateN3 &st, const list<Action> &plan){
	// anula la matriz del plan y copia el estado actual
    anulaMatriz(mapaConPlan);
    stateN3 cst = st;

    // itera por cada acción del plan
    auto it = plan.begin();
    while(it != plan.end()) {
        // ejecuta la última acción del colaborador
        if ((*it != act_CLB_WALK) && (*it != act_CLB_TURN_SR) && (*it != act_CLB_STOP)) {
            switch (cst.ultimaAccionColaborador) {
                case act_CLB_WALK:
                    cst.colaborador = NextCasilla(cst.colaborador);
                    mapaConPlan[cst.colaborador.f][cst.colaborador.c] = 2;
                    break;
                case act_CLB_TURN_SR:
                    cst.colaborador.brujula = (Orientacion) ((cst.colaborador.brujula+1)%8);
                    break;
            }
        }

        // ejecuta la acción del plan
        switch (*it) {
            case actRUN:
                cst.jugador = NextCasilla(cst.jugador);
                mapaConPlan[cst.jugador.f][cst.jugador.c] = 3;
                cst.jugador = NextCasilla(cst.jugador);
                mapaConPlan[cst.jugador.f][cst.jugador.c] = 1;
                break;
            case actWALK:
                cst.jugador = NextCasilla(cst.jugador);
                mapaConPlan[cst.jugador.f][cst.jugador.c] = 1;
                break;
            case actTURN_SR:
                cst.jugador.brujula = (Orientacion) ((cst.jugador.brujula+1)%8);
                break;
            case actTURN_L:
                cst.jugador.brujula = (Orientacion) ((cst.jugador.brujula+6)%8);
                break;
            case act_CLB_WALK:
                cst.ultimaAccionColaborador = act_CLB_WALK;
                cst.colaborador = NextCasilla(cst.colaborador);
                mapaConPlan[cst.colaborador.f][cst.colaborador.c] = 2;
                break;
            case act_CLB_TURN_SR:
                cst.ultimaAccionColaborador = act_CLB_TURN_SR;
                cst.colaborador.brujula = (Orientacion) ((cst.colaborador.brujula+1)%8);
                break;
            case act_CLB_STOP:
                cst.ultimaAccionColaborador = act_CLB_STOP;
                break;
        }

        it++; // siguiente acción
    }
}
void ComportamientoJugador::VisualizaPlan(const ubicacion & jugador, const ubicacion & colaborador, const list<Action> &plan){
	anulaMatriz(mapaConPlan);
	ubicacion j = jugador;
	ubicacion c = colaborador;
	auto it = plan.begin();
	while(it != plan.end()){
		switch(*it){
			case actRUN:
				j = NextCasilla(j);
				mapaConPlan[j.f][j.c] = 3;
				j = NextCasilla(j);
				mapaConPlan[j.f][j.c] = 1;
				break;
			case actWALK:
				j = NextCasilla(j);
				mapaConPlan[j.f][j.c] = 1;
				break;
			case actTURN_SR:
				j.brujula = (Orientacion)((j.brujula+1)%8);
				break;
			case actTURN_L:
				j.brujula = (Orientacion)((j.brujula+6)%8);
				break;
			case act_CLB_WALK:
				c = NextCasilla(c);
				mapaConPlan[c.f][c.c] = 2;
				//cst.ultimaOrdenColaborador = act_CLB_TURN_SR;
				break;
			case act_CLB_TURN_SR:
				c.brujula = (Orientacion)((c.brujula+1)%8);
				//cst.ultimaOrdenColaborador = act_CLB_TURN_SR;
				break;
			case act_CLB_STOP:
				//cst.ultimaOrdenColaborador = act_CLB_STOP;
				break;
		}
		it++;
	 }
}
list<nodeN2>::iterator esta (list <nodeN2> & l, const nodeN2 & n){
	auto it = l.begin();
	bool fin = false;
	while(it != l.end() && !fin){
		if((*it).st == n.st){
			fin = true;
		}else{
			++it;
		}	
	}
	return it;
}
void insertar (list<nodeN2> & l, nodeN2 & n){
	auto it = l.begin();
	bool encontrado = false;
	auto fin = l.rbegin();
	if((*fin).st.coste <= n.st.coste)
		l.push_back(n);
	else{
		while(it != l.end() && !encontrado){
			if((*it).st.coste >= n.st.coste){
				encontrado = true;
			}else{
				++it;
			}	
		}
		if(encontrado){
			l.insert(it,n);
		}else{
			l.push_back(n);
		}	
	}
} 

stateN2 applyN2(const Action & a, const stateN2 & st, const vector<vector<unsigned char>> & mapa){
	stateN2 st_result = st;
	ubicacion sig_ubicacion,sig_ubicacion2;
	char tipo = mapa[st.jugador.f][st.jugador.c];//donde está antes del movimiento
	switch (a)
	{
	case actWALK:
		sig_ubicacion = NextCasilla(st.jugador);
		if(casillaTransitable(sig_ubicacion,mapa) && !(sig_ubicacion.f == st.colaborador.f && sig_ubicacion.c == st.colaborador.c)){
			if(tipo == 'A'){
				if(!st.bikini)
					st_result.coste += 100;
				else
					st_result.coste += 10;
			}
			else if(tipo == 'B'){
				if(!st.zapatillas)
					st_result.coste += 50;
				else
					st_result.coste += 15;
			}
			else if(tipo == 'T'){
				st_result.coste += 2;
			}
			else{
				st_result.coste += 1;
			}
			//ver si ha pasado a una casilla bikini o de zapas
			char siguiente_tipo = mapa[st_result.jugador.f][st_result.jugador.c];
			if(siguiente_tipo == 'K'){
				st_result.bikini = true;
				st_result.zapatillas = false;
			}
			else if(siguiente_tipo == 'D'){

				st_result.bikini = false;
				st_result.zapatillas = true;
			}

			st_result.jugador = sig_ubicacion;
			}
		break;
	case actRUN:
		sig_ubicacion = NextCasilla(st.jugador);
		if(casillaTransitable(sig_ubicacion,mapa) && !(sig_ubicacion.f == st.colaborador.f && sig_ubicacion.c == st.colaborador.c)){
			/*if(tipo == 'A'){
				if(!st.bikini)
					st_result.coste += 100;
				else
					st_result.coste += 10;
			}
			else if(tipo == 'B'){
				if(!st.zapatillas)
					st_result.coste += 50;
				else
					st_result.coste += 15;
			}
			else if(tipo == 'T'){
				st_result.coste += 2;
			}
			else{
				st_result.coste += 1;
			}
			//ver si ha pasado a una casilla bikini o de zapas
			char siguiente_tipo = mapa[st_result.jugador.f][st_result.jugador.c];
			if(siguiente_tipo == 'K'){
				st_result.bikini = true;
				st_result.zapatillas = false;
			}
			else if(siguiente_tipo == 'D'){

				st_result.bikini = false;
				st_result.zapatillas = true;
			}*/
			char siguiente_tipo = mapa[st.jugador.f][st.jugador.c];

			//sig_ubicacion2 = sig_ubicacion;
			sig_ubicacion2 = NextCasilla(sig_ubicacion);
			if(casillaTransitable(sig_ubicacion2,mapa) && !(sig_ubicacion2.f == st.colaborador.f && sig_ubicacion2.c == st.colaborador.c)){
				if(siguiente_tipo == 'A'){
					if(!st.bikini)
						st_result.coste += 150;
					else
						st_result.coste += 15;
				}
				else if(siguiente_tipo == 'B'){
					if(!st.zapatillas)
						st_result.coste += 75;
					else
						st_result.coste += 25;
				}
				else if(siguiente_tipo == 'T'){
					st_result.coste += 3;
				}
				else{
					st_result.coste += 1;
				}
				//ver si ha pasado a una casilla bikini o de zapas
				char siguiente_tipo2 = mapa[st_result.jugador.f][st_result.jugador.c];
				if(siguiente_tipo2 == 'K'){
					st_result.bikini = true;
					st_result.zapatillas = false;
				}
				else if(siguiente_tipo2 == 'D'){

					st_result.bikini = false;
					st_result.zapatillas = true;
				}

				st_result.jugador = sig_ubicacion2;
				}
			}
		break;	
	case actTURN_L:
		if(tipo == 'A'){
			if(!st.bikini)
				st_result.coste += 30;
			else
				st_result.coste += 5;
		}else if(tipo == 'B'){
				if(!st.zapatillas)
					st_result.coste += 7;
				else
					st_result.coste += 1;
		}else if(tipo == 'T'){
				st_result.coste += 2;
			}
			else{
				st_result.coste += 1;
			}
		st_result.jugador.brujula = static_cast<Orientacion>((st_result.jugador.brujula + 6) % 8);
		break;

	case actTURN_SR:
		
		if(tipo == 'A'){
			if(!st.bikini)
				st_result.coste += 10;
			else
				st_result.coste += 2;
		}else if(tipo == 'B'){
				if(!st.zapatillas){
					st_result.coste += 5;
				}else{
					st_result.coste += 1;
				}	
		}else if(tipo == 'T'){
				st_result.coste += 1;
			}
			else{
				st_result.coste += 1;
			}
		st_result.jugador.brujula = static_cast<Orientacion>((st_result.jugador.brujula+1)%8);
		break;
	}
	return st_result;
}
list <Action> AnchuraSoloJugador_V3(const stateN0 &inicio, const ubicacion &final, const vector<vector<unsigned char>> &mapa){
	nodeN0 current_node;
	list<nodeN0> frontier;
	set<nodeN0> explored;
	list<Action> plan;
	current_node.st = inicio;
	bool SolutionFound = (current_node.st.jugador.f == final.f and current_node.st.jugador.c == final.c);
	frontier.push_back(current_node);
	int nivel = 0;

	while(!frontier.empty() and !SolutionFound){
		frontier.pop_front();
		explored.insert(current_node);
		
		nodeN0 child_walk = current_node;
		child_walk.st = applyN0(actWALK,current_node.st, mapa);
		child_walk.secuencia.push_back(actWALK);
		if(child_walk.st.jugador.f == final.f and child_walk.st.jugador.c == final.c){
			current_node = child_walk;
			SolutionFound = true;
		}else if(explored.find(child_walk) == explored.end()){
			frontier.push_back(child_walk);
		}

		if(!SolutionFound){
			//Generar hijo run
			nodeN0 child_run = current_node;
			child_run.st = applyN0(actRUN,current_node.st,mapa);
			child_run.secuencia.push_back(actRUN);
			if(child_run.st.jugador.f == final.f and child_run.st.jugador.c == final.c){
				current_node = child_run;
				SolutionFound = true;
			}else if(explored.find(child_run) == explored.end()){
				frontier.push_back(child_run);
			}
		}
		if(!SolutionFound){
			//generar hijo turn_L
			nodeN0 child_turnl = current_node;
			child_turnl.st = applyN0(actTURN_L,current_node.st,mapa);
			child_turnl.secuencia.push_back(actTURN_L);
			if(explored.find(child_turnl) == explored.end()){
				frontier.push_back(child_turnl);
			}
			//generar hijo turn_sr
			nodeN0 child_turnsr = current_node;
			child_turnsr.st = applyN0(actTURN_SR,current_node.st,mapa);
			child_turnsr.secuencia.push_back(actTURN_SR);
			if(explored.find(child_turnsr) == explored.end()){
				frontier.push_back(child_turnsr);
			}
		}

		if(!SolutionFound and !frontier.empty()){
			current_node = frontier.front();
			while(!frontier.empty() and explored.find(current_node) != explored.end()){
				frontier.pop_front();
				if(!frontier.empty()){
					current_node = frontier.front();
				}
			}
		}
	}

	if(SolutionFound){
		plan = current_node.secuencia;
		cout<< "Encontrado un plan: ";
		PintaPlan(current_node.secuencia);
	}
	return plan;
}
list<Action> BFS(const stateN1 &inicio, const ubicacion &final, const vector<vector<unsigned char>> &mapa){
	list<Action> plan;
	list<nodeN1> frontier;
	set<nodeN1> explored;
	nodeN1 current_node;
	current_node.st = inicio;//Estado inicial del problema
	bool SolutionFound = (current_node.st.colaborador.f == final.f and current_node.st.colaborador.c == final.c);
	
	frontier.push_back(current_node);

	while (!frontier.empty() and !SolutionFound){
		frontier.pop_front();
		explored.insert(current_node);
		//PintaPlan(current_node.secuencia);

		//PintaPlan(current_node.secuencia);

		//bool Generado = false;
		//Action ultimaAccion;

		if (jugadorVeColaborador(current_node.st.jugador,current_node.st.colaborador)){
			//cout << "Veo al colaborador\n";
			//sleep(1);
			nodeN1 child_clb_walk = current_node;
			child_clb_walk.st = applyN1(act_CLB_WALK,current_node.st,mapa);
			//current_node.st.ultimaOrdenColaborador = act_CLB_WALK;
			child_clb_walk.secuencia.push_back(act_CLB_WALK);
			if (current_node.st.colaborador.f == final.f and current_node.st.colaborador.c == final.c){
				SolutionFound=true;
				current_node = child_clb_walk;
				//frontier.push_back(child_clb_walk);
			}else if (explored.find(child_clb_walk) == explored.end()){
				frontier.push_back(child_clb_walk);
			}
			
			if (!SolutionFound){
				nodeN1 child_clb_sr = current_node;
				child_clb_sr.st = applyN1(act_CLB_TURN_SR,current_node.st,mapa);
				//current_node.st.ultimaOrdenColaborador = act_CLB_TURN_SR;
				child_clb_sr.secuencia.push_back(act_CLB_TURN_SR);
				if  (explored.find(child_clb_sr) == explored.end()){
					frontier.push_back(child_clb_sr);
				}

			}
			
			if (!SolutionFound){
				nodeN1 child_clb_stop = current_node;
				child_clb_stop.st = applyN1(act_CLB_STOP,current_node.st,mapa);
				//current_node.st.ultimaOrdenColaborador = act_CLB_STOP;
				child_clb_stop.secuencia.push_back(act_CLB_STOP);
				if (explored.find(child_clb_stop) == explored.end()){
					frontier.push_back(child_clb_stop);
				}
			}

			

		}

		if(current_node.st.ultimaOrdenColaborador == act_CLB_WALK){
			nodeN1 child_clb_walk = current_node;
			child_clb_walk.st = applyN1(act_CLB_WALK,child_clb_walk.st,mapa);
			if(!(child_clb_walk == current_node)){
				current_node = child_clb_walk;
			}
		}else if(current_node.st.ultimaOrdenColaborador == act_CLB_TURN_SR){
			nodeN1 child_clb_sr = current_node;
			child_clb_sr.st = applyN1(act_CLB_TURN_SR,child_clb_sr.st,mapa);
			if(!(child_clb_sr == current_node)){
				current_node = child_clb_sr;
			}
		}else if(current_node.st.ultimaOrdenColaborador == act_CLB_STOP){
			nodeN1 child_clb_stop = current_node;
			child_clb_stop.st = applyN1(act_CLB_STOP,child_clb_stop.st,mapa);
			if(!(child_clb_stop == current_node)){
				current_node = child_clb_stop;
			}
		}



		//cout << current_node.st.ultimaOrdenColaborador;
		//sleep(1);
		

		if (!SolutionFound){
			nodeN1 child_walk = current_node;
			child_walk.st = applyN1(actWALK,current_node.st,mapa);
			child_walk.secuencia.push_back(actWALK);
			if (explored.find(child_walk) == explored.end()){
				frontier.push_back(child_walk);
			}
		}
		if (!SolutionFound){
			nodeN1 child_walk2 = current_node;
			child_walk2.st = applyN1(actRUN,current_node.st,mapa);
			child_walk2.secuencia.push_back(actRUN);
			if (explored.find(child_walk2) == explored.end()){
				frontier.push_back(child_walk2);
			}
		}
		if (!SolutionFound){
			nodeN1 child_walk3 = current_node;
			child_walk3.st = applyN1(actTURN_L,current_node.st,mapa);
			child_walk3.secuencia.push_back(actTURN_L);
			if (explored.find(child_walk3) == explored.end()){
				frontier.push_back(child_walk3);
			}
		}
		if (!SolutionFound){
			nodeN1 child_walk4 = current_node;
			child_walk4.st = applyN1(actTURN_SR,current_node.st,mapa);
			child_walk4.secuencia.push_back(actTURN_SR);
			if (explored.find(child_walk4) == explored.end()){
				frontier.push_back(child_walk4);
			}
		}
		if (!SolutionFound){
			nodeN1 child_walk5 = current_node;
			child_walk5.st = applyN1(actIDLE,current_node.st,mapa);
			child_walk5.secuencia.push_back(actIDLE);
			if (explored.find(child_walk5) == explored.end()){
				frontier.push_back(child_walk5);
			}
		}

		if (!frontier.empty() && !SolutionFound) {
            current_node = frontier.front();
            while (!frontier.empty() and explored.find(current_node) != explored.end()) {
                frontier.pop_front();
                if (!frontier.empty()) {
                    current_node = frontier.front();
                }
            }
        }

	}

	if (SolutionFound){
		plan = current_node.secuencia;
		cout<< "Encontrado un plan: ";
		PintaPlan(current_node.secuencia);
	}	
	return plan;	


}


list<Action> CosteUniforme(const stateN2 & inicio, const ubicacion & final, const vector<vector<unsigned char>> & mapa){
	list<nodeN2> frontier;
	nodeN2 current_node;
	set<nodeN2> explored;
	list<Action> plan;
	current_node.st = inicio;
	bool SolutionFound = (current_node.st.jugador.f == final.f && current_node.st.jugador.c == final.c);
	frontier.push_front(current_node);	
	while (!frontier.empty() && !SolutionFound){
		frontier.pop_front();
		explored.insert(current_node);

		nodeN2 child_walk = current_node;
		child_walk.st = applyN2(actWALK,current_node.st,mapa);

		if (!frontier.empty()){
			auto itf = esta(frontier,child_walk);
			if ((explored.find(child_walk) == explored.end()) && (itf == frontier.end())){
				child_walk.secuencia.push_back(actWALK);
				insertar(frontier,child_walk);
			}else if ((itf != frontier.end()) && (itf->st.coste > child_walk.st.coste)){
				child_walk.secuencia.push_back(actWALK);
				frontier.erase(itf);
				insertar(frontier,child_walk);
			}
		}else if (explored.find(child_walk) == explored.end()){
				child_walk.secuencia.push_back(actWALK);
				frontier.push_back(child_walk);
			}
		nodeN2 child_turnl = current_node;
		child_turnl.st = applyN2(actTURN_L,current_node.st,mapa);

		if (!frontier.empty()){
			auto itl = esta(frontier,child_turnl);
			if ((explored.find(child_turnl) == explored.end()) && (itl == frontier.end())){
				child_turnl.secuencia.push_back(actTURN_L);
				insertar(frontier,child_turnl);
			}else if ((itl != frontier.end()) && (itl->st.coste > child_turnl.st.coste)){
				child_turnl.secuencia.push_back(actTURN_L);
				frontier.erase(itl);
				insertar(frontier,child_turnl);
			}
		}else if (explored.find(child_turnl) == explored.end()){
				child_turnl.secuencia.push_back(actTURN_L);
				frontier.push_back(child_turnl);
		}		

		nodeN2 child_turnsr = current_node;
		child_turnsr.st = applyN2(actTURN_SR,current_node.st,mapa);

		if (!frontier.empty()){
			auto itr = esta(frontier,child_turnsr);
			if ((explored.find(child_turnsr) == explored.end()) && (itr == frontier.end())){
				child_turnsr.secuencia.push_back(actTURN_SR);
				insertar(frontier,child_turnsr);
			}else if ((itr != frontier.end()) && (itr->st.coste > child_turnsr.st.coste)){
				child_turnsr.secuencia.push_back(actTURN_SR);
				frontier.erase(itr);
				insertar(frontier,child_turnsr);
			}
		}else if (explored.find(child_turnsr) == explored.end()){
				child_turnsr.secuencia.push_back(actTURN_SR);
				frontier.push_back(child_turnsr);
		}
		nodeN2 child_tu = current_node;
		child_tu.st = applyN2(actRUN,current_node.st,mapa);

		if (!frontier.empty()){
			auto itr = esta(frontier,child_tu);
			if ((explored.find(child_tu) == explored.end()) && (itr == frontier.end())){
				child_tu.secuencia.push_back(actRUN);
				insertar(frontier,child_tu);
			}else if ((itr != frontier.end()) && (itr->st.coste > child_tu.st.coste)){
				child_tu.secuencia.push_back(actRUN);
				frontier.erase(itr);
				insertar(frontier,child_tu);
			}
		}else if (explored.find(child_turnsr) == explored.end()){
				child_turnsr.secuencia.push_back(actRUN);
				frontier.push_back(child_turnsr);
		}

		if (!frontier.empty()){
			current_node = frontier.front();
		}
		if (current_node.st.jugador.f == final.f && current_node.st.jugador.c == final.c){
			SolutionFound = true;
		}
	}
	if (SolutionFound){
		plan = current_node.secuencia;
		cout<< "Encontrado un plan: ";
		PintaPlan(current_node.secuencia);

	}
	return plan;



}
pair<int,int> heuristica (const stateN3 & st, const char tipo_jugador, const char tipo_colaborador, const ubicacion & final, const Action &a){
	//Madre mia haber como saco la heuristica
	pair <int,int> resultado = {0,0};

	if (!(st.colaborador.f == final.f && st.colaborador.c == final.c)){
		//Ahora es la chyby
		if (!jugadorVeColaborador(st.jugador,st.colaborador)){//Si no lo ve se calcula la distancia proxima para llegar
			//resultado.first = abs(st.colaborador.f - st.jugador.f) + abs(st.colaborador.c - st.jugador.c);
			resultado.first = max(abs(st.colaborador.f - st.jugador.f), abs(st.colaborador.c - st.jugador.c));
			//resultado.first = resultado.first -1;
			switch(a){
				case actWALK:
					if (tipo_jugador == 'A'){
						if (!st.bikini_jugador){
							resultado.first += 100;
						}else{
							resultado.first += 10;
						}
					}else if (tipo_jugador == 'B'){
						if (!st.zapatillas_jugador){
							resultado.first += 50;
						}else{
							resultado.first += 15;
						}
					}else if (tipo_jugador == 'T'){
						resultado.first += 2;

					}else{

						resultado.first += 1;
					}
				break;
				case actRUN:
					if (tipo_jugador == 'A'){
						if (!st.bikini_jugador){
							resultado.first += 150;
						}else{
							resultado.first +=15;
						}
					}else if (tipo_jugador == 'B'){
						if (!st.zapatillas_jugador){
							resultado.first += 75;
						}else{
							resultado.first +=25;
						}
					}else if (tipo_jugador == 'T'){
						resultado.first += 3;
					}else {
						resultado.first += 1;
					}


				break;
				case act_CLB_WALK:
					if (tipo_colaborador == 'A'){
							if (!st.bikini_jugador){
								resultado.first += 100;
							}else{
								resultado.first += 10;
							}
						}else if (tipo_colaborador == 'B'){
							if (!st.zapatillas_jugador){
								resultado.first += 50;
							}else{
								resultado.first += 15;
							}
						}else if (tipo_colaborador == 'T'){
							resultado.first += 2;

						}else{

							resultado.first += 1;
						}
				break;

			}

		}

		resultado.second = sqrt(pow(final.f - st.colaborador.f,2) + pow(final.c - st.colaborador.c ,2));

	}

	return resultado;
}	


stateN3 applyN3(const Action & a, const stateN3 & st, const vector<vector<unsigned char>> & mapa,const ubicacion final){
	stateN3 st_result = st;
	ubicacion sig_ubicacion,sig_ubicacion2;
	char tipo_jugador = mapa[st.jugador.f][st.jugador.c];//donde antes movimiento
	char tipo_colaborador = mapa[st.colaborador.f][st.colaborador.c];
	pair<int, int> h;

	switch (a)
	{
	case actWALK:
		sig_ubicacion = NextCasilla(st.jugador);
		if (casillaTransitable(sig_ubicacion,mapa) && !(sig_ubicacion.f == st.colaborador.f && sig_ubicacion.c == st.colaborador.c)){
			if (tipo_jugador == 'A'){
				if (!st.bikini_jugador){
					st_result.coste += 100;
				}else{
					st_result.coste +=10;
				}
			}else if (tipo_jugador == 'B'){
				if (!st.zapatillas_jugador){
					st_result.coste += 50;
				}else{
					st_result.coste +=15;
				}
			}else if (tipo_jugador == 'T'){
				st_result.coste += 2;
			}else {
				st_result.coste += 1;
			}
			char siguiente_tipo_jugador = mapa[st_result.jugador.f][st_result.jugador.c];

			if (siguiente_tipo_jugador == 'K'){
				st_result.bikini_jugador = true;
				st_result.zapatillas_jugador = false;
			}else if (siguiente_tipo_jugador == 'D'){
				st_result.bikini_jugador = false;
				st_result.zapatillas_jugador = true;
			}

			st_result.jugador = sig_ubicacion;

			h = heuristica(st_result,siguiente_tipo_jugador,tipo_colaborador,final,a);

			st_result.h = h.first + h.second;


		}
		break;
	case actRUN:
		sig_ubicacion = NextCasilla(st.jugador);
		if (casillaTransitable(sig_ubicacion,mapa) && !(sig_ubicacion.f == st.colaborador.f && sig_ubicacion.c == st.colaborador.c)){
			/*
			if (tipo_jugador == 'A'){
				if (!st.bikini_jugador){
					st_result.coste += 100;
				}else{
					st_result.coste +=10;
				}
			}else if (tipo_jugador == 'B'){
				if (!st.zapatillas_jugador){
					st_result.coste += 50;
				}else{
					st_result.coste +=15;
				}
			}else if (tipo_jugador == 'T'){
				st_result.coste += 2;
			}else {
				st_result.coste += 1;
			}*/
			char siguiente_tipo_jugador = mapa[st.jugador.f][st.jugador.c];
			/*
			if (siguiente_tipo_jugador == 'K'){
				st_result.bikini_jugador = true;
				st_result.zapatillas_jugador = false;
			}else if (siguiente_tipo_jugador == 'D'){
				st_result.bikini_jugador = false;
				st_result.zapatillas_jugador = true;
			}*/
			sig_ubicacion2 = NextCasilla(sig_ubicacion);
			if (casillaTransitable(sig_ubicacion,mapa) && !(sig_ubicacion.f == st.colaborador.f && sig_ubicacion.c == st.colaborador.c)){
				if (siguiente_tipo_jugador == 'A'){
					if (!st_result.bikini_jugador){
						st_result.coste += 150;
					}else{
						st_result.coste +=15;
					}
				}else if (siguiente_tipo_jugador == 'B'){
					if (!st_result.zapatillas_jugador){
						st_result.coste += 75;
					}else{
						st_result.coste +=25;
					}
				}else if (siguiente_tipo_jugador == 'T'){
					st_result.coste += 3;
				}else {
					st_result.coste += 1;
				}
				char siguiente_tipo_jugador2 = mapa[st_result.jugador.f][st_result.jugador.c];

				if (siguiente_tipo_jugador2 == 'K'){
					st_result.bikini_jugador = true;
					st_result.zapatillas_jugador = false;
				}else if (siguiente_tipo_jugador2 == 'D'){
					st_result.bikini_jugador = false;
					st_result.zapatillas_jugador = true;
				}

				st_result.jugador = sig_ubicacion2;

				h = heuristica(st_result,siguiente_tipo_jugador2,tipo_colaborador,final,a);

				st_result.h = h.first + h.second;


			}


		}
		
		
		break;	
	case actIDLE:
		//No se hace nada
		break;	

	case actTURN_L://completar las que quedan todavia 
		if (tipo_jugador == 'A'){
			if (!st.bikini_jugador){
				st_result.coste += 30;
			}else {
				st_result.coste += 5;
			}
		}else if (tipo_jugador == 'B'){
			if (!st.zapatillas_jugador){
				st_result.coste += 7;
			}else{
				st_result.coste += 1;
			}
		}else if (tipo_jugador == 'T'){
			st_result.coste += 2;
		}else{
			st_result.coste += 1;
		}
		st_result.jugador.brujula = static_cast<Orientacion>((st_result.jugador.brujula + 6) % 8);
		break;
	case actTURN_SR:
		if (tipo_jugador == 'A'){
			if (!st.bikini_jugador){
				st_result.coste += 10;
			}else {
				st_result.coste += 2;
			}
		}else if (tipo_jugador == 'B'){
			if (!st.zapatillas_jugador){
				st_result.coste += 5;
			}else{
				st_result.coste += 1;
			}
		}else if (tipo_jugador == 'T'){
			st_result.coste += 1;
		}else{
			st_result.coste += 1;
		}
		st_result.jugador.brujula = static_cast<Orientacion>((st_result.jugador.brujula + 1) % 8);
		break;
	case act_CLB_WALK:
		sig_ubicacion = NextCasilla(st.colaborador);
		if (casillaTransitable(sig_ubicacion,mapa) && !(sig_ubicacion.f == st.jugador.f && sig_ubicacion.c == st.jugador.c)){
			if (tipo_colaborador == 'A'){
				if (!st.bikini_colaborador){
					st_result.coste += 100;
				}else{
					st_result.coste += 10;
				}
			}else if (tipo_colaborador == 'B'){
				if (!st.zapatillas_colaborador){
					st_result.coste += 50;
				}else {
					st_result.coste += 15;
				}
			}else if (tipo_colaborador == 'T'){
				st_result.coste += 2;
			}else{
				st_result.coste += 1;
			}
			char siguiente_tipo_colaborador = mapa[st_result.colaborador.f][st_result.colaborador.c];
			if (siguiente_tipo_colaborador == 'K'){
				st_result.bikini_colaborador = true;
				st_result.zapatillas_colaborador = false;
			}else if (siguiente_tipo_colaborador == 'D'){
				st_result.zapatillas_colaborador = true;
				st_result.bikini_colaborador = false;
			}
			st_result.colaborador = sig_ubicacion;
			h = heuristica(st_result,tipo_jugador,siguiente_tipo_colaborador,final,a);
			st_result.h = h.first + h.second;
			st_result.ultimaAccionColaborador = act_CLB_WALK;
		}
		break;	
	case act_CLB_TURN_SR:
		if (tipo_colaborador == 'A' ){
			if (!st.bikini_colaborador){
				st_result.coste += 10;
			}else {	
				st_result.coste += 2;
			}
		}else if (tipo_colaborador == 'B'){
			if (!st.zapatillas_colaborador){
				st_result.coste += 5;
			}else{
				st_result.coste += 1;
			}
		}else {
			st_result.coste += 1;
		}
		st_result.colaborador.brujula = static_cast<Orientacion>((st_result.colaborador.brujula + 1) % 8);
		st_result.ultimaAccionColaborador = act_CLB_TURN_SR;
		break;
	case act_CLB_STOP:
		//Aqui no se hace nada ?
		st_result.ultimaAccionColaborador = act_CLB_STOP;
		break;		

	}

	return st_result;

}

//Como debo ordenar los elementos de forma creciente su f (h + coste) ? estructura aux ?
struct F {
	bool operator()(const nodeN3 & a, const nodeN3 & b) const {
		int sum_A = a.st.coste + a.st.h;
		int sum_B = b.st.coste + b.st.h;
		return (sum_A < sum_B) || ((sum_A == sum_B) && (a < b));
	}
};
void ComportamientoJugador::EfectoLastAction(){
	int a;

	switch(last_action){
		case actWALK:
			if (ubicado){
				switch(ubicacion_juga.brujula){
					case norte: ubicacion_juga.f--;break;
					case noreste: ubicacion_juga.f--;ubicacion_juga.c++;break;
					case este: ubicacion_juga.c++;break;
					case sureste: ubicacion_juga.f++;ubicacion_juga.c++;break;
					case sur: ubicacion_juga.f++;break;
					case suroeste: ubicacion_juga.f++;ubicacion_juga.c--;break;
					case oeste:ubicacion_juga.c--;break;
					case noroeste: ubicacion_juga.f--;ubicacion_juga.c--;break;
				}
			}
			break;
		case actRUN:
			if (ubicado){
				switch(ubicacion_juga.brujula){
					case norte: ubicacion_juga.f-=2;break;
					case noreste: ubicacion_juga.f-=2;ubicacion_juga.c+=2;break;
					case este: ubicacion_juga.c+=2;break;
					case sureste: ubicacion_juga.f+=2;ubicacion_juga.c+=2;break;
					case sur: ubicacion_juga.f+=2;break;
					case suroeste: ubicacion_juga.f+=2;ubicacion_juga.c-=2;break;
					case oeste:ubicacion_juga.c-=2;break;
					case noroeste: ubicacion_juga.f-=2;ubicacion_juga.c-=2;break;
				}
			}
			break;	
		case actTURN_L:
			a = ubicacion_juga.brujula;
			a = (a+6)%8;
			ubicacion_juga.brujula = static_cast<Orientacion>(a);
			break;
		case actTURN_SR:
			a = ubicacion_juga.brujula;
			a = (a+1)%8;
			ubicacion_juga.brujula = static_cast<Orientacion>(a);
			break;
		case act_CLB_WALK:
			if (ubicado){
				switch(ubicacion_cola.brujula){
					case norte: ubicacion_cola.f--;break;
					case noreste: ubicacion_cola.f--;ubicacion_cola.c++;break;
					case este: ubicacion_cola.c++;break;
					case sureste: ubicacion_cola.f++;ubicacion_cola.c++;break;
					case sur: ubicacion_cola.f++;break;
					case suroeste: ubicacion_cola.f++;ubicacion_cola.c--;break;
					case oeste:ubicacion_cola.c--;break;
					case noroeste: ubicacion_cola.f--;ubicacion_cola.c--;break;
				}
			}
			break;
		case act_CLB_STOP:
			//Nada ?
			break;	
		case act_CLB_TURN_SR:
			a = ubicacion_cola.brujula;
			a = (a+1)%8;
			ubicacion_cola.brujula = static_cast<Orientacion>(a);
			break;	
	}
}
list <Action> A_asterisco(const stateN3 & inicio, const ubicacion & final, const vector<vector<unsigned char>> & mapa){
	set<nodeN3, F> frontier;
	nodeN3 current_node;
	set<nodeN3> explored;
	list<Action> plan;
	current_node.st = inicio;
	set<nodeN3, F>::iterator itf;
	set<nodeN3>::iterator ite;

	bool SolutionFound = (current_node.st.colaborador.f == final.f && current_node.st.colaborador.c == final.c);

	frontier.insert(current_node);

	while(!frontier.empty() && !SolutionFound ){
		frontier.erase(current_node);
		explored.insert(current_node);

		if (jugadorVeColaborador(current_node.st.jugador,current_node.st.colaborador)){
			nodeN3 child_walk = current_node;
			child_walk.st = applyN3(act_CLB_WALK,current_node.st,mapa,final);
			child_walk.secuencia.push_back(act_CLB_WALK);
			//child_walk.secuencia.push_back(act_CLB_STOP);
			itf = frontier.find(child_walk);
			if (itf != frontier.end()){
				if (itf->st.coste > child_walk.st.coste){
					frontier.erase(*itf);
					frontier.insert(child_walk);
				}
			}else{
				ite = explored.find(child_walk);
				if (ite != explored.end()){
					if (ite->st.coste > child_walk.st.coste){
						explored.erase(ite);
						frontier.insert(child_walk);
					}
				}else{
					frontier.insert(child_walk);
				}
			}
			nodeN3 child_turnsr = current_node;
			child_turnsr.st = applyN3(act_CLB_TURN_SR,current_node.st,mapa,final);
			child_turnsr.secuencia.push_back(act_CLB_TURN_SR);
			//child_turnsr.secuencia.push_back(act_CLB_STOP);
			itf = frontier.find(child_turnsr);
			if (itf != frontier.end()){
				if (itf->st.coste > child_turnsr.st.coste){
					frontier.erase(*itf);
					frontier.insert(child_turnsr);
				}
			}else{
				ite = explored.find(child_turnsr);
				if (ite != explored.end()){
					if (ite->st.coste > child_turnsr.st.coste){
						explored.erase(ite);
						frontier.insert(child_turnsr);
					}
				}else{
					frontier.insert(child_turnsr);
				}
			}
			nodeN3 child_stop = current_node;
			child_stop.st = applyN3(act_CLB_STOP,current_node.st,mapa,final);
			child_stop.secuencia.push_back(act_CLB_STOP);
			itf = frontier.find(child_stop);
			if (itf != frontier.end()){
				if (itf->st.coste > child_stop.st.coste){
					frontier.erase(*itf);
					frontier.insert(child_stop);
				}
			}else{
				ite = explored.find(child_stop);
				if (ite != explored.end()){
					if (ite->st.coste > child_stop.st.coste){
						explored.erase(ite);
						frontier.insert(child_stop);
					}
				}else{
					frontier.insert(child_stop);
				}
					
			}



		}

		if(current_node.st.ultimaAccionColaborador == act_CLB_WALK){
				nodeN3 child_node_walk = current_node;
				child_node_walk.st = applyN3(act_CLB_WALK,child_node_walk.st,mapa,final);
				if(!(child_node_walk == current_node)){
					current_node = child_node_walk;
				}
			}else if(current_node.st.ultimaAccionColaborador == act_CLB_TURN_SR){
				nodeN3 child_node_turn = current_node;
				child_node_turn.st = applyN3(act_CLB_TURN_SR,child_node_turn.st,mapa,final);
				if(!(child_node_turn == current_node)){
					current_node = child_node_turn;
				}
			}else if(current_node.st.ultimaAccionColaborador == act_CLB_STOP){
				nodeN3 child_node_stop = current_node;
				child_node_stop.st = applyN3(act_CLB_STOP,child_node_stop.st,mapa,final);
				if(!(child_node_stop == current_node)){
					current_node = child_node_stop;
				}
		}

		//Aqui ya no es colaborador queda hacer el walk girar L y SR
		nodeN3 child_walk2 = current_node;
		child_walk2.st = applyN3(actWALK,current_node.st,mapa,final);
		child_walk2.secuencia.push_back(actWALK);
		itf = frontier.find(child_walk2);
		if (itf != frontier.end()){
			if (itf->st.coste > child_walk2.st.coste){
				frontier.erase(*itf);
				frontier.insert(child_walk2);
			}
		}else{
			ite = explored.find(child_walk2);
			if (ite != explored.end()){
				if (ite->st.coste > child_walk2.st.coste){
					explored.erase(ite);
					frontier.insert(child_walk2);
				}
			}else{
				frontier.insert(child_walk2);
			}
		}

		nodeN3 child_turnL = current_node;
		child_turnL.st = applyN3(actTURN_L,current_node.st,mapa,final);
		child_turnL.secuencia.push_back(actTURN_L);
		itf = frontier.find(child_turnL);
		if (itf != frontier.end()){
			if (itf->st.coste > child_turnL.st.coste){
				frontier.erase(*itf);
				frontier.insert(child_turnL);
			}
		}else{
			ite = explored.find(child_turnL);
			if (ite != explored.end()){
				if (ite->st.coste > child_turnL.st.coste){
					explored.erase(ite);
					frontier.insert(child_turnL);
				}
			}else{
				frontier.insert(child_turnL);
			}
		}

		nodeN3 child_turnSR = current_node;
		child_turnSR.st = applyN3(actTURN_SR,current_node.st,mapa,final);
		child_turnSR.secuencia.push_back(actTURN_SR);
		itf = frontier.find(child_turnSR);
		if (itf != frontier.end()){
			if (itf->st.coste > child_turnSR.st.coste){
				frontier.erase(*itf);
				frontier.insert(child_turnSR);
			}
		}else{
			ite = explored.find(child_turnSR);
			if (ite != explored.end()){
				if (ite->st.coste > child_turnSR.st.coste){
					explored.erase(ite);
					frontier.insert(child_turnSR);
				}
			}else{
				frontier.insert(child_turnSR);
			}
		}
		if (!frontier.empty()){
			current_node = *(frontier.begin());
		}

		if (current_node.st.colaborador.f == final.f && current_node.st.colaborador.c == final.c){
			SolutionFound = true;
		}


	}

	if (SolutionFound){
		plan = current_node.secuencia;
		cout<< "Encontrado un plan: ";
		PintaPlan(current_node.secuencia);

	}
	return plan;

}

// Este es el método principal que se piden en la practica.
// Tiene como entrada la información de los sensores y devuelve la acción a realizar.
// Para ver los distintos sensores mirar fichero "comportamiento.hpp"
Action ComportamientoJugador::think(Sensores sensores){
	
	Action accion = actIDLE;
	if(sensores.nivel != 4){
		if(!hayPlan){
			cout<< "Calculamos plan\n";
			ubicacion_juga.f = sensores.posF;
			ubicacion_juga.c = sensores.posC;
			ubicacion_juga.brujula = sensores.sentido;
			ubicacion_cola.f = sensores.CLBposF;
			ubicacion_cola.c = sensores.CLBposC;
			ubicacion_cola.brujula = sensores.CLBsentido;
			goal.f = sensores.destinoF;
			goal.c = sensores.destinoC;
			char tipo_juga = mapaResultado[ubicacion_juga.f][ubicacion_juga.c];
			char tipo_cola = mapaResultado[ubicacion_cola.f][ubicacion_cola.c];
			switch(sensores.nivel){

				case 0: 
					c_stateN0.jugador = ubicacion_juga;
					c_stateN0.colaborador = ubicacion_cola;
					plan = AnchuraSoloJugador_V3(c_stateN0,goal,mapaResultado);
					break;
				case 1: 
					c_stateN1.jugador = ubicacion_juga;
					c_stateN1.colaborador = ubicacion_cola;
					plan = BFS(c_stateN1,goal,mapaResultado);
					break;
				case 2:
					c_stateN2.jugador = ubicacion_juga;
					c_stateN2.colaborador = ubicacion_cola;
					c_stateN2.coste = 0;

					if (tipo_juga == 'K'){
						c_stateN2.bikini = true;
					}else {
						c_stateN2.bikini = false;
					}

					if (tipo_juga == 'D'){
						c_stateN2.zapatillas = true;

					}else
					{
						c_stateN2.zapatillas=false;
					}
					plan = CosteUniforme(c_stateN2,goal,mapaResultado);
					
					break;
				case 3:
					c_stateN3.jugador = ubicacion_juga;
					c_stateN3.colaborador = ubicacion_cola;
					c_stateN3.coste = 0;
					if (tipo_juga == 'K'){
						c_stateN3.bikini_jugador = true;
					}else{
						c_stateN3.bikini_jugador = false;
					}
					if (tipo_juga == 'D'){
						c_stateN3.zapatillas_jugador = true;
					}else{
						c_stateN3.zapatillas_jugador = false;
					}
					if(tipo_cola == 'K'){
						c_stateN3.bikini_colaborador = true;
					}else{
						c_stateN3.bikini_colaborador = false;
					}
					if (tipo_cola == 'D'){
						c_stateN3.zapatillas_colaborador = true;
					}else{
						c_stateN3.zapatillas_colaborador = false;
					}
					Action a = actIDLE;
					pair <int,int> h_ini = heuristica(c_stateN3,tipo_juga,tipo_cola,goal,a);
					c_stateN3.h = h_ini.first + h_ini.second;

					plan = A_asterisco(c_stateN3,goal,mapaResultado);

					break;
			}
			if(plan.size() > 0){
				if (sensores.nivel == 2){
					VisualizaPlan(ubicacion_juga,ubicacion_cola,plan);
				}else if (sensores.nivel == 1){
					VisualizaPlan(c_stateN1,plan);
				}else if (sensores.nivel == 0){
					VisualizaPlan(ubicacion_juga,ubicacion_cola,plan);
				}else if (sensores.nivel == 3){
					VisualizaPlan(c_stateN3,plan);
				}
				
				hayPlan = true;
			}
		}
		if(hayPlan and plan.size() > 0){
			accion = plan.front();
			plan.pop_front();
		}
		if(plan.size() == 0){
			cout<< "Se completó el plan\n";
			hayPlan = false;
		}
	}else{
		//nivel 4
		if (sensores.terreno[0] == 'D'){
			zapatillas = true;
			bikini = false;
		}
		if (sensores.terreno[1] == 'K'){
			zapatillas = false;
			bikini = true;
		}
		if (sensores.colision){
			hayPlan = false;
			ubicado = false;
		}
		if (!ubicado && sensores.posF != -1){
			ubicacion_juga.f = sensores.posF;
			ubicacion_juga.c = sensores.posC;
			ubicacion_cola.f = sensores.CLBposF;
			ubicacion_cola.c = sensores.CLBposC;
			ubicacion_juga.brujula = sensores.sentido;
			ubicacion_cola.brujula = sensores.CLBsentido;
			ubicado = true;
		}

		if (!ubicado){
			last_action = actWHEREIS;
			return actWHEREIS;
		}

		if (ubicado){
			EfectoLastAction();

			PonerTerrenoEnMatriz(sensores.terreno,ubicacion_juga,mapaResultado);

			if (mapaResultado[ubicacion_cola.f][ubicacion_cola.c] == 'D'){
				zapatillas_colaborador = true;
				bikini_colaborador = false;

			}
			if (mapaResultado[ubicacion_cola.f][ubicacion_cola.c] == 'K'){
				zapatillas_colaborador = false;
				bikini_colaborador = true;
			}

		}

		if (sensores.terreno[2] == 'P' || sensores.terreno[2] == 'M'){
			if (hayPlan){
				if(plan.front() == actWALK){
					hayPlan = false;
				}
			}

		}
		/*if (sensores.terreno[2] == 'l' || sensores.terreno[2] == 'a'){
			hayPlan = false;
			escapando = true;
		}*/

		/*if (escapando){
			if (sensores.terreno[2] == 'a' || sensores.terreno[2] == 'l' || sensores.terreno[2] == 'M' || sensores.terreno[2] == 'P'){
				accion = actTURN_L;
			}else{
				accion = actWALK;
			}
		}*/
		if (!hayPlan && !escapando){
			goal.f = sensores.destinoF;
			goal.c = sensores.destinoC;
			c_stateN2.jugador = ubicacion_juga;
			c_stateN2.colaborador = ubicacion_cola;
			c_stateN2.coste = 0;
			plan = CosteUniforme(c_stateN2,goal,mapaResultado);//Asi obligo a que el nivel 2 funcione

			if (plan.size() > 0){
				VisualizaPlan(ubicacion_juga,ubicacion_cola,plan);
				hayPlan = true;
			}

		}

		if (hayPlan && plan.size() > 0){
			accion = plan.front();
			plan.pop_front();
		}
		if (plan.size() == 0){
			hayPlan = false;
		}

		if (escapando && accion == actWALK){
			escapando = false;
		}

		last_action = accion;

	}
	return accion;
}

void ComportamientoJugador::PonerTerrenoEnMatriz(const vector<unsigned char> & terreno,const ubicacion & st,vector< vector<unsigned char> > & matriz){
	//Lo mismo que en la P1
	matriz[st.f][st.c] = terreno[0];
	//cout << st.fil << " "<< st.col <<endl;

	//aqui vamos a poner la como se llena dependiendo de la orientacion

	switch(st.brujula){

		case norte:
			matriz[st.f-1][st.c-1] = terreno[1];
			matriz[st.f-1][st.c] = terreno[2];
			matriz[st.f-1][st.c+1] = terreno[3];
			matriz[st.f-2][st.c-2] = terreno[4];
			matriz[st.f-2][st.c-1] = terreno[5];
			matriz[st.f-2][st.c+1] = terreno[7];
			matriz[st.f-2][st.c+2] = terreno[8];
			matriz[st.f-3][st.c-3] = terreno[9];
			matriz[st.f-3][st.c-2] = terreno[10];
			matriz[st.f-3][st.c+2] = terreno[14];
			matriz[st.f-3][st.c+3] = terreno[15];
			matriz[st.f-2][st.c] = terreno[6];
			matriz[st.f-3][st.c-1] = terreno[11];
			matriz[st.f-3][st.c] = terreno[12];
			matriz[st.f-3][st.c+1] = terreno[13];
			
			break;

		case sur:
			matriz[st.f+1][st.c+1] = terreno[1];
			matriz[st.f+1][st.c] = terreno[2];
			matriz[st.f+1][st.c-1] = terreno[3];
			matriz[st.f+2][st.c+2] = terreno[4];
			matriz[st.f+2][st.c+1] = terreno[5];
			matriz[st.f+2][st.c-1] = terreno[7];
			matriz[st.f+2][st.c-2] = terreno[8];
			matriz[st.f+3][st.c+3] = terreno[9];
			matriz[st.f+3][st.c+2] = terreno[10];
			matriz[st.f+3][st.c-2] = terreno[14];
			matriz[st.f+3][st.c-3] = terreno[15];
			matriz[st.f+2][st.c] = terreno[6];
			matriz[st.f+3][st.c+1] = terreno[11];
			matriz[st.f+3][st.c] = terreno[12];
			matriz[st.f+3][st.c-1] = terreno[13];
			break;		
		case este:
			matriz[st.f-1][st.c+1] = terreno[1];
			matriz[st.f][st.c+1] = terreno[2];
			matriz[st.f+1][st.c+1] = terreno[3];
			matriz[st.f-2][st.c+2] = terreno[4];
			matriz[st.f-1][st.c+2] = terreno[5];
			matriz[st.f+1][st.c+2] = terreno[7];
			matriz[st.f+2][st.c+2] = terreno[8];
			matriz[st.f-3][st.c+3] = terreno[9];
			matriz[st.f-2][st.c+3] = terreno[10];
			matriz[st.f+2][st.c+3] = terreno[14];
			matriz[st.f+3][st.c+3] = terreno[15];
			matriz[st.f][st.c+2] = terreno[6];
			matriz[st.f-1][st.c+3] = terreno[11];
			matriz[st.f][st.c+3] = terreno[12];
			matriz[st.f+1][st.c+3] = terreno[13];
			break;		
		case oeste:
			matriz[st.f+1][st.c-1] = terreno[1];
			matriz[st.f][st.c-1] = terreno[2];
			matriz[st.f-1][st.c-1] = terreno[3];
			matriz[st.f+2][st.c-2] = terreno[4];
			matriz[st.f+1][st.c-2] = terreno[5];
			matriz[st.f-1][st.c-2] = terreno[7];
			matriz[st.f-2][st.c-2] = terreno[8];
			matriz[st.f+3][st.c-3] = terreno[9];
			matriz[st.f+2][st.c-3] = terreno[10];
			matriz[st.f-2][st.c-3] = terreno[14];
			matriz[st.f-3][st.c-3] = terreno[15];
			matriz[st.f][st.c-2] = terreno[6];
			matriz[st.f+1][st.c-3] = terreno[11];
			matriz[st.f][st.c-3] = terreno[12];
			matriz[st.f-1][st.c-3] = terreno[13];
			break;
		case noreste:
			matriz[st.f-1][st.c] = terreno[1];
			matriz[st.f-1][st.c+1] = terreno[2];
			matriz[st.f][st.c+1] = terreno[3];
			matriz[st.f-2][st.c] = terreno[4];
			matriz[st.f-2][st.c+1] = terreno[5];
			matriz[st.f-1][st.c+2] = terreno[7];
			matriz[st.f][st.c+2] = terreno[8];
			matriz[st.f-3][st.c] = terreno[9];
			matriz[st.f-3][st.c+1] = terreno[10];
			matriz[st.f-1][st.c+3] = terreno[14];
			matriz[st.f][st.c+3] = terreno[15];
			matriz[st.f-2][st.c+2] = terreno[6];
			matriz[st.f-3][st.c+2] = terreno[11];
			matriz[st.f-3][st.c+3] = terreno[12];
			matriz[st.f-2][st.c+3] = terreno[13];
			
			break;
		case noroeste:
			matriz[st.f][st.c-1] = terreno[1];
			matriz[st.f-1][st.c-1] = terreno[2];
			matriz[st.f-1][st.c] = terreno[3];
			matriz[st.f][st.c-2] = terreno[4];
			matriz[st.f-1][st.c-2] = terreno[5];
			matriz[st.f-2][st.c-1] = terreno[7];
			matriz[st.f-2][st.c] = terreno[8];
			matriz[st.f][st.c-3] = terreno[9];
			matriz[st.f-1][st.c-3] = terreno[10];
			matriz[st.f-3][st.c-1] = terreno[14];
			matriz[st.f-3][st.c] = terreno[15];
			matriz[st.f-2][st.c-2] = terreno[6];
			matriz[st.f-2][st.c-3] = terreno[11];
			matriz[st.f-3][st.c-3] = terreno[12];
			matriz[st.f-3][st.c-2] = terreno[13];
			
			break;
			
			
		case sureste:
			matriz[st.f][st.c+1] = terreno[1];
			matriz[st.f+1][st.c+1] = terreno[2];
			matriz[st.f+1][st.c] = terreno[3];
			matriz[st.f][st.c+2] = terreno[4];
			matriz[st.f+1][st.c+2] = terreno[5];
			matriz[st.f+2][st.c+1] = terreno[7];
			matriz[st.f+2][st.c] = terreno[8];
			matriz[st.f][st.c+3] = terreno[9];
			matriz[st.f+1][st.c+3] = terreno[10];
			matriz[st.f+3][st.c+1] = terreno[14];
			matriz[st.f+3][st.c] = terreno[15];
			matriz[st.f+2][st.c+2] = terreno[6];
			matriz[st.f+2][st.c+3] = terreno[11];
			matriz[st.f+3][st.c+3] = terreno[12];
			matriz[st.f+3][st.c+2] = terreno[13];
			break;
		case suroeste:
			matriz[st.f+1][st.c] = terreno[1];
			matriz[st.f+1][st.c-1] = terreno[2];
			matriz[st.f][st.c-1] = terreno[3];
			matriz[st.f+2][st.c] = terreno[4];
			matriz[st.f+2][st.c-1] = terreno[5];
			matriz[st.f+1][st.c-2] = terreno[7];
			matriz[st.f][st.c-2] = terreno[8];
			matriz[st.f+3][st.c] = terreno[9];
			matriz[st.f+3][st.c-1] = terreno[10];
			matriz[st.f+1][st.c-3] = terreno[14];
			matriz[st.f][st.c-3] = terreno[15];
			matriz[st.f+2][st.c-2] = terreno[6];
			matriz[st.f+3][st.c-2] = terreno[11];
			matriz[st.f+3][st.c-3] = terreno[12];
			matriz[st.f+2][st.c-3] = terreno[13];
			break;


	}

}

int ComportamientoJugador::interact(Action accion, int valor)
{
	return false;
}