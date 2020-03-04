/*
 * fibonacci.cxx
 */

#include <iostream>
using namespace std;

int fib_re(int n) {
    if( n < 2) {
        return 1;
    }
    else {
        return fib_re(n-1) + fib_re(n-2);
    }
} 


int main(int argc, char **argv)
{
	int n;
    cout << "Który wyraz chcesz zobaczyć?: ";
    cin >> n;
    cout << "F(" << n << ") = " << fib_re(n) << endl;
    for(int i=0; i<35; i++) {
        cout << (float)fib_re(i+1) / fib_re(i) << endl;
    }
    
	return 0;
}

