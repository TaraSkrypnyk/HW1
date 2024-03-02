#include <iostream>
#include <iomanip>
#include <ctime>
#include <cmath>
using namespace std;

int main() {
    const double pi = 3.14;
    double L, R, S;
    cout << "Vvedit dovzhynu kola: ";
    cin >> L;
    R = L / (2 * pi);
    S = 2 * pi * R * R;
    cout << "S =  " << S << endl;

    return 0;
}