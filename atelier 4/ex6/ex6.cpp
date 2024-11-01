#include<iostream>
#include "point.h"

using namespace std;

int main(){ 

    int x, y;

    cout << "Entre the value for the x coordinate : ";
    cin >> x;

    cout << "Entre the value for the y coordinate : ";
    cin >> y;

    Point p1(x, y);
    p1.afficher();
    p1.deplacer(5,5);
    p1.afficher();

    return 0;

}