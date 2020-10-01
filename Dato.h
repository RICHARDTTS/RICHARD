/**
 * Project Untitled
 */


#ifndef _DATO_H
#define _DATO_H

class Dato {
public: 
    
void Dato();
    
/**
 * @param a
 */
void Dato(float a);
    
Dato* getsig();
    
/**
 * @param a
 */
void setsig(Dato* a);
    
float getDato();
private: 
    float _dato;
    Dato *_siguiente;
};

#endif //_DATO_H