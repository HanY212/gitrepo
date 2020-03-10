/*
 * wyszukaj.cpp
 */


#include <stdio.h>
#include <cstdlib>
#include <time.h>
using namespace std;

#define TAB_SIZE 10 //dyrektywa preprocesora - zamienia każde wystąpienie TAB_SIZE na 10

int tab[TAB_SIZE];

void stworz_tablice(){
	for(int i = 0; i < TAB_SIZE; i++) {
        tab[i] = rand() % (TAB_SIZE + 1);
        printf("%d ",tab[i]);
    }
    printf("\n");
}

void wyszukaj(int n){

	int i=0;
	bool found=false;
	do{
		if(n == tab[i]){
			printf("Liczba znaleziona pod indeksem: %d\n",i);
			found=true;
		}
		i++;
	}while(i<TAB_SIZE);

	if(!found){
		printf("-1\n");
	}
}

int main(int argc, char **argv)
{
    srand(time(NULL));
    stworz_tablice();
    int n;
    printf("Podaj szukana liczbe: ");
    scanf("%d", &n);
    wyszukaj(n);
	return 0;
}
