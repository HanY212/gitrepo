/*
 * silnia.cpp
 */

#include <iostream>
using namespace std;


long silnia_re(int n) {
    if(n < 2){
        return 1;
    }7
    else {
         return silnia_re(n-1) * n;
    }
}

int main(int argc, char **argv)
{
	int n;
     cout << "Podaj liczbę: ";
    cin >> n;
    cout << n << "! = " << silnia_re(n) << endl;
	return 0;
}

