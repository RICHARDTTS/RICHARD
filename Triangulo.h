/**
 * Project Untitled
 */


#ifndef _TRIANGULO_H
#define _TRIANGULO_H

#include "Geometrica.h"


class Triangulo: public Geometrica {
public: 
    
/**
 * @param b
 * @param h
 * @param x
 * @param y
 */
void _Triangulo(float b, float h, float x, float y);
    
float _area();
    
float _perimetro();
private: 
    float _base;
    float _altra;
    float _xc;
    float _yc;
    float _area;
    float _perimetro;
    
void _Triangulo();
};

#endif //_TRIANGULO_H