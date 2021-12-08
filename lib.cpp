//
// Created by Francesco Dioda on 08/12/21.
//
#include<iostream>
#include "lib.h"
using namespace std;
void matrice(int dimensione) {
    float array[dimensione];
    for (int i = 0; i <= dimensione - 1; i++) {
        cin >> array[i];

    }
    for (int i = 0; i <= dimensione - 1; i++) {
        if (array[0] < array[i]) {
            array[0] = array[i];
        } else {
            array[0] = array[0];
        }
    }
    cout << array[0];
}


