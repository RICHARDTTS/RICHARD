/**
 * Project Untitled
 */


#ifndef _GEOMETRICA_H
#define _GEOMETRICA_H

class Geometrica {
public: 
    
float area();
    
float perimetro();
    
/**
 * @param c
 */
bool Circulo(Circulo& c);
    
/**
 * @param r
 * @param y
 * @param x
 */
void Circulo(float r, float y, float x);
protected: 
    float _radio;
    float _area;
    float _perimetro;
    float _xc;
    float _yc;
    float _angulo;
private: 
    float _yc;
    float _xc;
    
void Geometrica();
};

#endif //_GEOMETRICA_H