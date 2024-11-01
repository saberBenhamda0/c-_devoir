#ifndef POINT_H
#define POINT_H

#include<iostream>
using namespace std;

class Point { 
    private:
        float x;
        float y;

    public:
    Point(float m_x, float m_y) : x(m_x), y(m_y) {}

    void deplacer(float tr_x, float tr_y) {
        x = x + tr_x;
        y = y + tr_y; 
    }
    void afficher() { 
        cout << "(" << x << ", " << y << ")" << endl; 
    }

};

#endif