#include <iostream>
#include <string>

using namespace std;

class CuentaBancaria 
{
private:
	int id;
	string nroCuenta;     
	double saldo;

public:
	string propietario;
	
	CuentaBancaria(int id, string nro, string prop)
	{
		id = id;
		nroCuenta = nro;
		propietario = prop;
		saldo = 0.0;
	};
	
};

int main(int argc, char *argv[]) {
	


	return 0;
}

//TAREA Instalar GIT, GIT HUB, UNREAL 4.27, VISUAL STUDIO COMUNITY
//Crear cuenta en GITHUB y e
