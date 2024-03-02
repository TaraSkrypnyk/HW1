#include <iostream>
#include <iomanip>
#include <ctime>
#include <cmath>
using namespace std;


int main() {
    string gorizont;
    gorizont = char(205);
    cout << char(201);
    for (int k = 0; k < 50; k++) {
        cout << gorizont;
    }
    cout << char(187) << endl;
    cout << " " << endl;
    cout << char(186) << "                    Pory Roku                     " << char(186) << endl;
    cout << " " << endl;
    cout << char(204);
    for (int k = 0; k < 50; k++) {
        cout << gorizont;
    }
    cout << char(185) << endl;
    cout << " " << endl;
    cout << char(186)<< "    Zyma    " << char(186) << "    Vesna   " << char(186) << "   Lito    " << char(186) <<"    Osin    "<< char(186)  << endl;
    cout << " " << endl;
    cout << char(200);
    for (int k = 0; k < 12; k++) {
        cout << char(205);
    }
    cout << char(202);
    for (int k = 0; k < 12; k++) {
        cout << char(205);
    }
    cout << char(202);
    for (int k = 0; k < 11; k++) {
        cout << char(205);
    }
    cout << char(202);
    for (int k = 0; k < 12; k++) {
        cout << char(205);
    }
    cout << char(188) << endl;
    //201 верхній лівий кут
    // 187 верхній правий кут
    // 188 нижній правий кут
    // 200 нижній лівий кут
    //202 низ горизонт по ценру дві догори
    //203 низ горизонт по ценру дві донизу
    //185 вертикль по центру вліво
    //186 вертикаль
    //204 вертикль по центру вправо
    //205 горизонтально
    //206 перехрестя
    
    return 0;
}