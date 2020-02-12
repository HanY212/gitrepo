/*
 * kalkulator.cpp
 */


#include <iostream>
using namespace std;

float pl() {
    float x = 0;
    float y = 0;
    cout << "Podaj liczbę: ";
    cin >> x;
    cout << "Podaj drugą liczbę: ";
    cin >> y;
    return x;
}


int main(int argc, char **argv)
{
    float wynik = 0;
	char operacja;
    cout << "Podaj działanie (+, -, / , *): ";
    cin >> operacja;
    switch (operacja)
    {
        case '+':
        //kod
            wynik = pl(x) + pl(y);
        break;
        case '-':
        //kod
            wynik = pl(x) - pl(y);
        break;
        case '/':
            wynik = pl(x) / pl(y);
        break;
        case '*':
            wynik = pl(x) * pl(y)
        default:
        cout << "Błędny znak" << endl;
    }
    cout << wynik;
	return 0;
}

