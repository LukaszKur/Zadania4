//
// Created by lukasz on 23.01.18.
//
#include <stdio.h>
#include <stdlib.h>

#define DOKLADNOSC 50

int main(int liczba_slow, char *tablica_slow[]) {
    double x;
    int jed = 1;
    double wynik = 0.0;
    double silnia = 1.0;
    double potega_x = 1.0;
    if (liczba_slow == 2) { //pierwszy parametr to nazwa programu
        x = atof(tablica_slow[1]);
        printf("x=%lf\n", x);

        for (int licznik = 1; licznik < DOKLADNOSC; ++licznik) {
            ++jed;
            potega_x *= (x * x);
            silnia *= (licznik * licznik);
            wynik += (jed % 2 == 0 ? 1 : -1) * potega_x / silnia;
        }
        printf("Wynik: %lf", wynik);

    } else {
        printf("Nie poprawna liczba parametrow!\n");
    }
    return 0;
}
