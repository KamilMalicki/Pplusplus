#ifndef _PPP_H
#define _PPP_H
#pragma GCC system_header

#include <string>
#include <iostream>
#include <stdio.h>


// main
#define podstawa int main
#define zwracaj return 
#define uzywaj using 
#define obszaruNazw namespace

uzywaj obszaruNazw std;

// skoki i funkcje
#define Skok goto
#define funkcja void
#define funkcjaLiczbowa int
#define funkcjaZnakowa char
#define funkcjaSzeregowa string
#define funkcjaZmiennoPrzecinkowa double
#define funkcjaBinarna bool

// define zmienna
#define zmiennaLiczbowa int
#define zmiennaZnakowa char
#define zmiennaSzeregowa string
#define zmiennaZmiennoPrzecinkowa double
#define zmiennaBinarna bool

// define znaków if else
#define jezeli if
#define jezeliNie else
#define aJezeli else if

#define oraz &&
#define lub ||

//tak nie
#define tak true 
#define nie false

// cout 
#define drukuj cout 
#define nowaLinia endl 

// cin
#define napisz cin 
#define odzyskajSzereg getline 

// pętle
#define dopuki while 
#define pracuj do
#define pracujDla for 

#endif