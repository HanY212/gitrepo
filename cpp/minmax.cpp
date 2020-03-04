/*
 * minmax.cpp
 */


#include <iostream>
using namespace std;


int main(int argc, char **argv)
{
	int tab[100];
    srand(time(NULL));
    for(int i = 0; i < 100; i++) {
        tab[i] = rand() % 101;
        cout << tab[i] << " ";
    }
    cout << endl;
    int n;
    cout << "Podaj szukaną liczbę: ";
    cin >> n;
	return 0;
}

