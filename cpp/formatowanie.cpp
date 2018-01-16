/*
 * formatowanie.cpp
 * 
 * Copyright 2018  <>
 * 
 * 
 */


#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>

using namespace std;

int main(int argc, char **argv)
{
    float lf = 12.768;
    int li = 100;
    
	printf("Liczba Pi: %15.4f\n", M_PI);
	printf("Liczba lf: %15.4f\n", lf);
	printf("Liczba li: %-15.4f\n", (double)li);
	printf("Liczba li: %+15d\n", li);
	printf("Hex li: %#x\n", li);
	printf("Oct li: %#o\n", li);
    cout.precision(5);
    cout.width(10);
    cout << lf << endl;
    cout << setprecision(3) << setw(20) << setfill('_') << M_PI << endl;
    cout << setprecision(3) << setw(20) << left << M_PI << endl;
    
    

	return 0;
}

