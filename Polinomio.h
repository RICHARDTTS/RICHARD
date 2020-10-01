/**
 * Project Untitled
 */


#ifndef _POLINOMIO_H
#define _POLINOMIO_H

class Polinomio {
public: 
    
void Polinomio();
    
/**
 * @param Pol
 */
void Polinomio(string Pol);
    
/**
 * @param Pol
 */
void Polinomio(Polinomio& Pol);
    
/**
 * @param c
 * @param p
 */
void nuevoTermino(float c, int p);
    
void Simplificar();
    
bool ordenar();
    
/**
 * @param pol
 */
Polinomio& operator(Polinomio& pol);
    
void Operation2();
    
void Operation3();
    
void Operation4();
    
bool borrar();
    
/**
 * @param pol
 */
bool redefinir(string pol);
    
float getOrden();
    
char getVariable();
    
/**
 * @param value
 */
void setVariable(char value);
protected: 
    
void Polinomio();
private: 
    float _orden;
    char _variable;
};

#endif //_POLINOMIO_H