#ifndef _CHAR_STACK_HPP_
#define _CHAR_STACK_HPP_

#include <iostream>

const unsigned INIT_CAP = 11;

class CharStack {
public:
    CharStack();
    ~CharStack();

    bool empty();
    unsigned size();
    unsigned max_items();

    char top();
    void pop();
    void push(char ch);

private:
    char *data; // Puntero alm heap donde se encuentra el arreglo dinamico.
    unsigned lenght; // Cuantos elementos tiene el stack por el momento.
    unsigned capacity; // Cauntas casillas tiene el arreglo dinamico.

    void extend_capacity();
};


#endif //_CHAR_STACK_HPP_
