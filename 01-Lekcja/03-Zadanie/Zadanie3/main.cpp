#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    double liczba;
    int wiek;
    string imie;
    cout << "Podaj imie" << endl;
    cin >> imie;
    cout << "Podaj wiek" << endl;
    cin >> wiek;
    cout << "Podaj wzrost" << endl;
    cin >> liczba;
    cout << fixed;
    cout << imie << endl;
    cout << wiek << endl;
    cout << setprecision(2) << liczba << endl;
    return 0;
}
