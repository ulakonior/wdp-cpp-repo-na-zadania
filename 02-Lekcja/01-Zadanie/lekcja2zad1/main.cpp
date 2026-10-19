#include <iostream>

using namespace std;

int main(){
    int a,b,c;
    cin >> a >> b >> c;
    int suma = a+b+c;
    cout << suma << endl;
    int r = a-b;
    int iloczyn = a*c;
    int ilo = c/b;
    cout << r << endl << iloczyn << endl << ilo;
    return 0;
}
