#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double pi = 0.0;
    int signo = 1;
    double termino = 1.0;

    for (int i = 0; abs(termino) >= 0.000001; ++i) {
        pi += termino;
        signo = -signo;
        termino = signo * (1.0 / (2 * i + 3.000003));
    }

    pi *= 4;

    cout << "El valor de π con sus primeros 6 decimales es: "
         << fixed << setprecision(6) << pi << endl;

    return 0;
}