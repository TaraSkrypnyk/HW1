#include <iostream>
#include <iomanip>
#include <ctime>
#include <cmath>
using namespace std;

int main() {

    double R1, R2, R3, R0;
    cout << "Vvedit pershiy opir: ";
    cin >> R1;
    cout << "Vvedit druhiy opir: ";
    cin >> R2;
    cout << "Vvedit tretiy opir: ";
    cin >> R3;
    R0 = 1 / ((1 / R1) + (1 / R2) + (1 / R3));
    cout << "R0 =  " << R0 << endl;

    return 0;
}
