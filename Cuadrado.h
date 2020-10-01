/**
 * Project Untitled
 */


#ifndef _CUADRADO_H
#define _CUADRADO_H

#include "Geometrica.h"


class Cuadrado: public Geometrica {
public: 
    
/**
 * @param l
 * @param x
 * @param y
 */
void _Cuadrado(float l, float x, float y);
private: 
    float _lado;
    
void _Cuadrado();
};

#endif //_CUADRADO_H