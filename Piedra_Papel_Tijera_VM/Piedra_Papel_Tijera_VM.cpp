#include <iostream>
using namespace std;

int evaluar(int op1, int op2) {
	if (op1 == op2)
		return 0; 
	
	if ((op1 == 1 && op2 == 3) || (op1 == 2 && op2 == 1) || (op1 == 3 && op2 == 2))
		return 1; 
	
	return -1; 
}

string traducir(int op) {
	switch(op) {
	case 1: return "()";
	case 2: return "[]";
	case 3: return "8<";
	default: return "Opcion invalida";
	}
}

void imprimir(int op1, int op2) {
	string equi1 = traducir(op1);
	string equi2 = traducir(op2);
	
	cout << equi1 << " vs " << equi2 << endl;
}

void detGanador(int resp) {
	if (resp == 0)
		cout << "0 ->Empate" << endl;
	else if (resp == 1)
		cout << "1 -> Jugador 1 gano" << endl;
	else
		cout << "-1 -> Jugador 2 gano" << endl;
}

int main() {
	int op1, op2;
	
	cout << "Jugador 1 (1=(), 2=[], 3=8<): ";
	cin >> op1;
	
	cout << "Jugador 2 (1=(), 2=[], 3=8<): ";
	cin >> op2;
	
	int resp = evaluar(op1, op2);
	
	imprimir(op1, op2);
	detGanador(resp);
	
	return 0;
}

