/*
 * zliczanie.cxx
 * 
 * Copyright 2019  <>
 * 
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 * MA 02110-1301, USA.
 * 
 * 
 */


#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
	
    int a;
    int l5 = 0;
    int l7 = 0;
    cout << "Podaj liczbę: " << endl;
    cin >> a;
    while (a != 0) {
        if (a % 5 == 0) {
            l5 = l5 + 1;
        }
        
        if (a % 7 == 0) {
            l7 = l7 + 1;
        }
        
        cout << "Podaj liczbę: " << endl;
        cin >> a;
    }
    cout << "Ilość liczb podzielnych przez 5: " << l5 << endl;
    cout << "Ilość liczb podzielnych przez 7: " << l7 << endl;
	return 0;
}

