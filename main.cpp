#include <iostream>
#include <iomanip>
#include <ctime>
#include <cmath>
using namespace std;

int main() {
    double S, v, t, a;
    cout << "Vvedit shvidkist ruhu: ";
    cin >> v;
    cout << "Vvedit chas ruhu: ";
    cin >> t;
    cout << "Vvedit priskorenna ruhu: ";
    cin >> a;
    S = v * t + (a * t * t) / 2;
    cout << "S =  " << S << endl;

    return 0;
}