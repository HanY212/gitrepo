/*
 * bez nazwy.cxx
 */


#include <iostream>
using namespace std;

void pobierz_oceny(int oceny[], int n) {
    //for(int i=0; i < n; i++) {
    //    cout << "Podaj ocenę: " << endl;
    //    cin >> oceny[i];
    //}
    int ile = 0;
    int ocena;
    while(ile < n) {
        cout << "Podaj ocenę: " << endl;
        cin >> ocena;
        if (ocena > 0 && ocena < 7) {
            oceny[ile] = ocena;
            ile++;
        } else {
            cout << "Błędna ocena!" << endl;
        }
    }
}


void drukuj(int oceny[], int n) {
    for(int k=0; k < n; k++) {
        cout << oceny[k] << " ";
    }
    cout << endl;
} 


float licz_srednia(int oceny[], int n) {
    int suma = 0;
    for(int i=0; i < n; i++) {
        suma = suma + oceny[i];
    }
    //cout << "Suma: " << suma << endl;
    return (float)suma / (float)n;
}


int main(int argc, char **argv)
{
    
    int n = 0;
    cout << "Ile ocen podasz: " << endl;
    cin >> n;
	int oceny[n];
    pobierz_oceny(oceny, n);
    //drukuj(oceny, n);
    cout << "Średnia ocen: " << licz_srednia(oceny, n);
	return 0;
}


