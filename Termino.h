/**
 * Project Untitled
 */


#ifndef _TERMINO_H
#define _TERMINO_H

class Termino {
public: 
    float _coeficiente;
    int _potencia;
    
/**
 * @param c
 * @param p
 */
void Termino(float c, int p);
    
float getC();
    
int getP();
    
/**
 * @param c
 * @param p
 */
void setCP(float c, int p);
    
/**
 * @param ptr
 */
void setSiguiente(Termino* ptr);
    
Termino* getSiguiente();
private: 
    
void Termino();
};

#endif //_TERMINO_H