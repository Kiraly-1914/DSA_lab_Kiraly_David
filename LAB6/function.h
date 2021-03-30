//
// Created by Dávid on 2021. 03. 30..
//

#ifndef LAB6_FUNCTION_H
#define LAB6_FUNCTION_H

#endif //LAB6_FUNCTION_H

typedef struct Digit {
    int nrdigit;
    int* digits;
}Digit;
//Digit típus létrehozása
Digit* Create(int capacity);
//Digit típus felszabadítása
void Destroy(Digit* array);
//Tömb feltöltése
void Input(Digit* array, int number);
//k. számjegy lekérdezése
int Digit_k(Digit* array, int k);
//számjegyek számának lekérdezése
int SizeDigit(Digit* array);
//IntArray típus kiiratása
void Print(Digit* array);