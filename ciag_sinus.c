//
// Created by lukasz on 23.01.18.
//
#include <stdio.h>
#include <stdlib.h>
#define DOKLADNOSC 50
int main(int liczba_slow, char* tablica_slow[])
{
    long double x=3;
    long int jed=1;
    long double wynik=0.0;
    long double silnia=1.0;
    long double potega_x=1.0;
    //if(liczba_slow==3) { //pierwszy parametr to nazwa programu
       // x = atof(tablica_slow[1]);
        for (int licznik = 1; licznik < DOKLADNOSC; ++licznik) {
            ++jed;
            potega_x *= (x*x);
            silnia*=(licznik*licznik);
            wynik += (jed%2==0?1:-1)*potega_x / silnia;
        }
        printf("Wynik: %Lf", wynik);
    //}else{
     //   printf("Nie poprawna liczba parametrow!\n");
    //}
    return 0;
}
