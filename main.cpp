#include <iostream>
#include <iomanip>
#include <ctime>
#include <cmath>
#include <string>
using namespace std;

int main() {
    string n, a, v;
    double k;
    cout << "Vvedit nazvu knyhy: ";
    std::getline(std::cin, n);
    cout << "Vvedit authora knyhy: ";
    std::getline(std::cin, a);
    cout << "Vvedit vidannya knyhy: ";
    std::getline(std::cin, v);
    cout << "Vvedit kilkist storinok knyhy: ";
    cin >> k;
    cout << "Name       : \"" << n << "\"" << endl;
    cout << "Avtor      : " << a << endl;
    cout << "Izdatelstvo: " << v << endl;
    cout << "Pages      : " << k << endl;

    return 0;
}
