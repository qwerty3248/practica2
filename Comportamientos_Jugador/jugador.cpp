#include "../Comportamientos_Jugador/jugador.hpp"
#include "motorlib/util.h"

#include <iostream>
#include <cmath>
#include <set>
#include <stack>

//Funcion para buscar en una lista
bool Find(const stateN0 &item, const list<stateN0> &lista){
	auto it = lista.begin();
	while (it != lista.end() and !((*it) == item)){
		++it;
	}
	return (!(it == lista.end()));
}

//	Es transitable para el agente
bool CasillaTransitable(const ubicacion &x, const vector<vector<unsigned char>> &mapa){
	return (mapa[x.f][x.c] != 'P' and mapa[x.f][x.c] != 'M');
}
void PintaPlan(const list<Action> &plan){
	auto it = plan.begin();
	while (it != plan.begin()){
		if (*it == actWALK){
			cout << "W ";
		}else if (*it == actRUN){
			cout << "R ";
		}else if (*it == actTURN_SR){
			cout << "r ";
		}else if (*it == actTURN_L){
			cout << "L ";
		}else if (*it == act_CLB_TURN_SR){
			cout << "cr ";
		}else if (*it == act_CLB_WALK){
			cout << "cW ";
		}else if (*it == act_CLB_STOP){
			cout << "cS ";
		}else if (*it == actIDLE){
			cout << "I ";
		}else {
			cout << "-_ ";
		}
		++it;
	}
	cout << " (" << plan.size() << " acciones)\n";

}
//Accion siguiente segun el avance del agente
ubicacion NextCasilla (const ubicacion &pos){
	ubicacion next = pos;
	switch(pos.brujula){
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
//Pone a cero todos los elementos de la matriz
void AnulaMatriz(vector<vector<unsigned char>> &matriz){
	for (int i = 0; i < matriz.size(); i++){
		for (int j = 0; j < matriz[0].size(); j++){
			matriz[i][j] = 0;
		}
	}
}
stateN0 apply(const Action &a, const stateN0 &st, const vector<vector<unsigned char>> mapa){
	stateN0 st_result = st;
	ubicacion sig_ubicacion, sig_ubicacion2;
	switch(a){
		case actWALK:
			sig_ubicacion = NextCasilla(st.jugador);
			if (CasillaTransitable(sig_ubicacion,mapa) and !(sig_ubicacion.f == st.colaborador.f and sig_ubicacion.c == st.colaborador.c)){
				st_result.jugador = sig_ubicacion;
			}
			break;
		case actRUN:
			sig_ubicacion = NextCasilla(st.jugador);
			if (CasillaTransitable(sig_ubicacion,mapa) and !(sig_ubicacion.f == st.colaborador.f and sig_ubicacion.c == st.colaborador.c)){
				sig_ubicacion2 = NextCasilla(sig_ubicacion);
				if (CasillaTransitable(sig_ubicacion2,mapa) and !(sig_ubicacion2.f == st.colaborador.f and sig_ubicacion2.c == st.colaborador.c)){
					st_result.jugador = sig_ubicacion2;
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

//Aqui va el nivel 0 resuelto con el tutorial
list <Action> AnchuraSoloJugador(const stateN0 &inicio, const ubicacion &final, const vector<vector<unsigned char>> &mapa){
	nodeN0 current_node;
	list <nodeN0> frontier;
	set<nodeN0> explored;
	list <Action> plan;
	current_node.st = inicio;

	bool SolutionFound = (current_node.st.jugador.f == final.f and current_node.st.jugador.c == final.c);
	frontier.push_back(current_node);

	while (!frontier.empty() and !SolutionFound){
		frontier.pop_front();
		explored.insert(current_node);

		//Generar hijo actWALK
		nodeN0 child_walk = current_node;
		child_walk.st=apply(actWALK,current_node.st,mapa);
		child_walk.secuencia.push_back(actWALK);

		if (child_walk.st.jugador.f == final.f and child_walk.st.jugador.c == final.c){
			current_node = child_walk;
			SolutionFound = true;
		}else if (explored.find(child_walk) == explored.end()){
			frontier.push_back(child_walk);
		}

		if (!SolutionFound){
			//Generar hijo actRUN
			nodeN0 child_run = current_node;
			child_run.st = apply(actRUN,current_node.st,mapa);
			child_run.secuencia.push_back(actRUN);

			if (child_run.st.jugador.f == final.f and child_run.st.jugador.c == final.c){
				current_node = child_run;
				SolutionFound = true;
			}else if (explored.find(child_run) == explored.end()){
				frontier.push_back(child_run);
			}

		}


		if (!SolutionFound){
			//Generar hijo izquierda actTURN_L
			nodeN0 child_turnl = current_node;
			child_turnl.st = apply(actTURN_L,current_node.st,mapa);
			child_turnl.secuencia.push_back(actTURN_L);
			if (explored.find(child_turnl) == explored.end()){
				frontier.push_back(child_turnl);
			}
			//Generar hijo a la derecha actTURN_SR
			nodeN0 child_turnsr = current_node;
			child_turnsr.st = apply(actTURN_SR,current_node.st,mapa);
			child_turnsr.secuencia.push_back(actTURN_SR);
			if (explored.find(child_turnsr) == explored.end()){
				frontier.push_back(child_turnsr);
			}
		}


	}

	if (SolutionFound){
		plan = current_node.secuencia;
		cout<<"Encontrado un plan: ";
		PintaPlan(current_node.secuencia);
	}

	return plan;

}
void ComportamientoJugador::VisualizaPlan(const stateN0 &st, const list<Action> &plan){
	AnulaMatriz(mapaConPlan);
	stateN0 cst = st;

	auto it = plan.begin();
	while (it != plan.end()){
		if ((*it != act_CLB_WALK) and (*it != act_CLB_TURN_SR) and (*it != act_CLB_STOP)){

			switch (cst.ultimaOrdenColaborador)
			{
			case act_CLB_WALK:
				cst.colaborador = NextCasilla(cst.colaborador);
				mapaConPlan[cst.colaborador.f][cst.colaborador.c] = 2;
				break;
			case act_CLB_TURN_SR:
				cst.colaborador.brujula = (Orientacion) ((cst.colaborador.brujula + 1) % 8);
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
				cst.jugador.brujula = (Orientacion) ((cst.jugador.brujula + 1) % 8);
				break;	
			case actTURN_L:
				cst.jugador.brujula = (Orientacion) ((cst.jugador.brujula + 6) % 8);
				break;
			case act_CLB_WALK:
				cst.colaborador = NextCasilla(cst.colaborador);
				cst.ultimaOrdenColaborador = act_CLB_WALK;
				mapaConPlan[cst.jugador.f][cst.jugador.c] = 2;
				break;
			case act_CLB_TURN_SR:
				cst.colaborador.brujula = (Orientacion) ((cst.colaborador.brujula + 1) % 8);
				cst.ultimaOrdenColaborador = act_CLB_TURN_SR;
				break;
			case act_CLB_STOP:
				cst.ultimaOrdenColaborador = act_CLB_STOP;
				break;

		}
		++it;

	}
}

// Este es el método principal que se piden en la practica.
// Tiene como entrada la información de los sensores y devuelve la acción a realizar.
// Para ver los distintos sensores mirar fichero "comportamiento.hpp"
Action ComportamientoJugador::think(Sensores sensores)
{
	Action accion = actIDLE;
	// Incluir aquí el comportamiento del agente jugador
	//Desde nivel 0 al 3 aqui en este if 
	if (sensores.nivel != 4){
		if (!hayPlan){
			cout << "Calculamos un nuevo plan\n";
			c_state.jugador.f = sensores.posF;
			c_state.jugador.c = sensores.posC;
			c_state.jugador.brujula = sensores.sentido;
			c_state.colaborador.f = sensores.CLBposF;
			c_state.colaborador.c = sensores.CLBposC;
			c_state.colaborador.brujula = sensores.CLBsentido;
			goal.f = sensores.destinoF;
			goal.c = sensores.destinoC;
			switch(sensores.nivel){
				case 0: plan = AnchuraSoloJugador(c_state,goal,mapaResultado);break;
				case 1://Aqui va el nivel 1 
					break;
				case 2://Aqui va el nivel 2
					break;
				case 3://Aqui va el nivel 3
					break;
			}
			if (plan.size() > 0){
				VisualizaPlan (c_state,plan);
				hayPlan = true;
			}
		}
		if (hayPlan and plan.size() > 0){
			accion = plan.front();
			plan.pop_front();

		}
		if (plan.size() == 0){
			cout<< "Se completo el plan\n";
			hayPlan = true;
		}
	}else{
		//Nivel 4 aqui
	}
	return accion;
}


int ComportamientoJugador::interact(Action accion, int valor)
{
	return false;
}
