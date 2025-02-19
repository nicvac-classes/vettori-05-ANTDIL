#include <iostream>
#include <sstream>
#include <string>
#include <cstdlib>
#include <cmath>
#include <ctime>

using namespace std;
int main() {
    srand(time(0));   //Seed random number generator
    
    int i, n;

    cout << "Quant'è grande il vettore?" << endl;
    cin >> n;
    int v[n];

    for (i = 0; i <= n; i++) {
        v[i] = rand() % 1001;
        i = i + 1;
    }
    int s, somma;

    s = 0;
    somma = 0;
    for (s = 0; s <= n; s++) {
        somma = somma + v[s];
        s = s + 1;
    }
    double media;

    media = (double) somma / n;
    cout << "La media è uguale a " << media << endl;
    int m, e;

    e = 0;
    m = 0;
    for (m = 0; m <= n; m++) {
        if (v[m] > media) {
            cout << "Il numero " << v[m] << endl;
            cout << "è superiore alla media e si trova in posizione " << m << endl;
            e = e + 1;
        }
        m = m + 1;
    }
    cout << "Il numero di elementi superiori alla media è " << e << endl;
    return 0;
}
