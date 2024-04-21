#include "../Comportamientos_Jugador/jugador.hpp"
#include "motorlib/util.h"

#include <iostream>
#include <cmath>
#include <set>
#include <stack>


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
			sig_ubicacion = NextCasilla(st.colaborador);
			if(casillaTransitable(sig_ubicacion,mapa) && !(sig_ubicacion.f == st.jugador.f && sig_ubicacion.c == st.jugador.c)){
				st_result.colaborador = sig_ubicacion;
			}
		break;
		case act_CLB_TURN_SR:
			st_result.colaborador.brujula = static_cast<Orientacion>((st_result.colaborador.brujula + 1) % 8);
		break;
		case act_CLB_STOP:
		//No se hace nada
		break;
		
	}
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
void ComportamientoJugador::VisualizaPlan(const stateN1 &st, const list<Action> &plan){
	 anulaMatriz(mapaConPlan);
	 stateN1 cst = st;

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
list<Action> AnchuraN1(const stateN1 & inicio, const ubicacion & final,const vector<vector<unsigned char>> & mapa){
	nodeN1 current_node;
	list<nodeN1> frontier;
	set<nodeN1> explored;
	list<Action> plan;
	current_node.st = inicio;
	bool SolutionFound = (current_node.st.jugador.f == final.f and current_node.st.jugador.c == final.c);
	frontier.push_back(current_node);
	int nivel = 0;

	while(!frontier.empty() and !SolutionFound){
		frontier.pop_front();
		explored.insert(current_node);
		
		if (jugadorVeColaborador(current_node.st.jugador,current_node.st.colaborador)){

			nodeN1 child_s_forward = current_node;
			child_s_forward.st = applyN1(act_CLB_WALK,current_node.st,mapa);
			if(child_s_forward.st.colaborador.f == final.f && child_s_forward.st.colaborador.c == final.c){
				child_s_forward.secuencia.push_back(act_CLB_WALK);
				current_node = child_s_forward;
				SolutionFound = true;
			}else if(explored.find(child_s_forward) == explored.end()){
				child_s_forward.secuencia.push_back(act_CLB_WALK);
				frontier.push_back(child_s_forward);
			}
			
			if (!SolutionFound){
				nodeN1 child_sr  = current_node;
				child_sr.st = applyN1(act_CLB_TURN_SR,current_node.st,mapa);
				if (explored.find(child_sr) == explored.end()){
					child_sr.secuencia.push_back(act_CLB_TURN_SR);
					frontier.push_back(child_sr);
				}
				nodeN1 child_stop  = current_node;
				child_stop.st = applyN1(act_CLB_STOP,current_node.st,mapa);
				if (explored.find(child_stop) == explored.end()){
					child_stop.secuencia.push_back(act_CLB_STOP);
					frontier.push_back(child_stop);
				}
				

			}


		}

		nodeN1 child_walk = current_node;
		child_walk.st = applyN1(actWALK,current_node.st, mapa);
		child_walk.secuencia.push_back(actWALK);
		if(child_walk.st.jugador.f == final.f and child_walk.st.jugador.c == final.c){
			current_node = child_walk;
			SolutionFound = true;
		}else if(explored.find(child_walk) == explored.end()){
			frontier.push_back(child_walk);
		}

		if(!SolutionFound){
			//Generar hijo run
			nodeN1 child_run = current_node;
			child_run.st = applyN1(actRUN,current_node.st,mapa);
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
			nodeN1 child_turnl = current_node;
			child_turnl.st = applyN1(actTURN_L,current_node.st,mapa);
			child_turnl.secuencia.push_back(actTURN_L);
			if(explored.find(child_turnl) == explored.end()){
				frontier.push_back(child_turnl);
			}
			//generar hijo turn_sr
			nodeN1 child_turnsr = current_node;
			child_turnsr.st = applyN1(actTURN_SR,current_node.st,mapa);
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
					plan = AnchuraN1(c_stateN1,goal,mapaResultado);
					break;
				case 2:
					break;
				case 3:
					break;
			}
			if(plan.size() > 0){
				VisualizaPlan(ubicacion_juga,ubicacion_cola,plan);
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
	}
	return accion;
}


int ComportamientoJugador::interact(Action accion, int valor)
{
	return false;
}