/*
 * wskazniki.cpp
 * 
 * Copyright 2018  <>
 * 
 */


#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
	int x = 11;
    cout << x << endl;
    cout << &x << endl;
    cout << * &x << endl;
	
    int *px;
    px = &x;
    cout << px << endl;
    cout << *px << endl;
    
    int y = 100;
    px = &y;
    cout << px << endl;
    cout << *px << endl;
    return 0;
}

