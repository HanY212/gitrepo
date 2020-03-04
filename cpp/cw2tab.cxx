/*
 * cw2tab.cxx
 */


#include <iostream>
#include <iomanip>
using namespace std;


void wypelnij(int t[][10], int w, int k, int n) {
    //generator liczb pseudolosowych
    srand(time(NULL));
    // <0;n>
    for(int i=0; i < w; i++) {  // indeksy wierszy
        for(int j=0; j < k; j++) {
            t[i][j] = rand() % (n + 1);
            //cout << i << ", " << j << " " << t[i][j] << endl;
        }
        
        }
    
}

void sumujK(int t[][10], int w, int k) {
    int sumaK = 0;
    int ns = 0;
    int indeks = 0;
    for(int i=0; i < k; i++) {
        for(int j=0; j < w; j++) {
            //cout << setw(4) << t[j][i] << " ";
            sumaK += t[j][i];
        }
        if(sumaK > ns) {
            ns = sumaK;
            indeks = j;
        }
        cout << setw(4) << sumaK << endl;
        sumaK = 0;
        }
    cout << "Największa suma: " << ns << ", kolumna: " << indeks << endl;
}




void sumujW(int t[][10], int w, int k) {
    int sumaW = 0;
    int nsw = 0;
    int indeksw = 0;
    for(int i=0; i < w; i++) {  // indeksy wierszy
        for(int j=0; j < k; j++) {
            cout << setw(4) << t[i][j] << " ";
            sumaW += t[i][j];
        }
        if(sumaW > nsw) {
            nsw = sumaW;
            indeksw = i;
        }
        cout << setw(4) << sumaW << endl;
        sumaW = 0;
        }
    cout << "Największa suma: " << nsw << ", wiersz: " << indeksw << endl;
}

int main(int argc, char **argv)
{
	int n;
    cout << "Podaj wartość maksymalną: " << endl;
    cin >> n;
    int w = 5;
    int k = 10;
    int tab[w][10];
    wypelnij(tab, w, k, n);
    sumujW(tab, w, k);
    cout << endl;
    sumujK(tab, w, k);
	return 0;
}

