/*
 * bez nazwy.cxx * 
 */


#include <iostream>
using namespace std;

int l1 = 10;


void drukuj() {
    cout << l1 << endl;
}

void drukuj2(int &a) {
    cout << l1 << endl;
    a = 0;
}

int drukuj3(int x) {
    cout << l1 << endl;
    cout << x << endl;
    x = x * 3;
    return x;
}


int main(int argc, char **argv)
{
    int l1 = 20;
	//cout << l1 << endl;
    l1 = l1 + 5;
    //drukuj();
    //drukuj2(l1);
    //cout << l1 << endl;
    l1 = drukuj3(l1);
    cout << l1 << endl;
	return 0;
}

