#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    
    long prec;
    double iteraciones;
    double pi;
    int signo;
    double suma;

    suma = 0;
    prec = 1500012;
    signo = 1;
    iteraciones = 1;

    while(iteraciones <= prec)
    {
        suma = suma + signo * (1/(2*iteraciones-1));
        signo = -signo;
        iteraciones++;
    }

    pi = 4 * suma;
    
    cout << "El valor de π con sus primeros 6 decimales es: "
         << fixed << setprecision(6) << pi << endl;

    return 0;
}
