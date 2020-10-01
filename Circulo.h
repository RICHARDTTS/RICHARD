/**
 * Project Untitled
 */


#ifndef _CIRCULO_H
#define _CIRCULO_H

#include "Geometrica.h"


class Circulo: public Geometrica {
public: 
    
/**
 * @param r
 * @param x
 * @param y
 */
void _Circulo(float r, float x, float y);
    
float _area();
    
float _perimetro();
private: 
    float _radio;
    float _xc;
    float _yc;
    float _area;
    float _perimetro;
    
void _Circulo();
};

#endif //_CIRCULO_H