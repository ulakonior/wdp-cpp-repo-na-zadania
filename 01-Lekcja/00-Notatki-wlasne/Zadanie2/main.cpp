#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    double liczba;
    cout << "Podaj liczbe" << endl;
    cin >> liczba;
    cout << fixed;
    cout << "1 miejsce" << setprecision(1) << liczba << endl;
    cout << "3 miejsce" << setprecision(3) << liczba << endl;
    cout << "5 miejsce" << setprecision(5) << liczba << endl;
    return 0;
}
