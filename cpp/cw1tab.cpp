/*
 * bez nazwy.cpp

 */


#include <iostream>
using namespace std;

void pobierz_liczby(int tb[], int n) {
    for(int i=0; i < n; i++) {
        cout << "Podaj ocenę: " << endl;
        cin >> tb[i]; 
    }
}

void drukuj(int oceny[], int n) {
    for(int i=0; i < n; i++) {
        cout << oceny[i] << " ";
    }
    cout << endl;
}

int sumuj(int t[], int n) {
    int suma = 0;
    for(int i=0; i < n; i++) {
        suma += t[i];
    }
    return suma;
}


int main(int argc, char **argv)
{
	int n = 5;
    int tab1[n];
    int tab2[n];
    pobierz_liczby(tab1, n);
    pobierz_liczby(tab2, n);
    drukuj(tab1, n);
    drukuj(tab2, n);
    int s1, s2;
    s1 = sumuj(tab1, n);
    s2 = sumuj(tab2, n);
    if (s1 > s2) {
        cout << "Suma w pierwszej serii jest większa";
        }
        else if (s1 < s2) {
            cout << "Suma w drugiej serii jest większa";
            }
        else {
            cout << "Sumy liczb są równe";
            }
	return 0;
}

