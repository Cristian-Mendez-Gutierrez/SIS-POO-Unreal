#include <iostream>
#include <string>
using namespace std;

int main() {
    int j1, j2;
    string simJ1, simJ2;

    cout << "Introduzca la opcion del jugador 1 (1: (), 2: [], 3: 8<): ";
    cin >> j1;
    cout << "Introduzca la opcion del jugador 2 (1: (), 2: [], 3: 8<): ";
    cin >> j2;

    if (j1 == 1)
        simJ1 = "()";
    else if (j1 == 2)
        simJ1 = "[]";
    else
        simJ1 = "8<";

    if (j2 == 1)
        simJ2 = "()";
    else if (j2 == 2)
        simJ2 = "[]";
    else
        simJ2 = "8<";

    cout << simJ1 << " VS " << simJ2 << endl;

    if (j1 == j2) {
        cout << "EMPATE" << endl;
    }
    else if ((j1 == 1 && j2 == 3) || (j1 == 2 && j2 == 1) || (j1 == 3 && j2 == 2)) {
        cout << "GANO EL JUGADOR 1" << endl;
    }
    else {
        cout << "GANO EL JUGADOR 2" << endl;
    }

    return 0;
}