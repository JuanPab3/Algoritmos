#ifndef _STACK_HPP_
#define _STACK_HPP_

const unsigned INIT_CAP = 11;

template <class T>
class Stack {
public:
    /*Constructors & Destructor*/
    Stack();
    Stack(const Stack &other); /*TAREA*/
    ~Stack();

    /*Accessor Methods*/
    bool empty() const;
    unsigned size() const;
    unsigned max_items() const;
    T top() const;

    /*Modifier Methods*/
    void pop();
    void push(const T & ch);

private:
    T *data; // Puntero alm heap donde se encuentra el arreglo dinamico.
    unsigned length; // Cuantos elementos tiene el stack por el momento.
    unsigned capacity; // Cauntas casillas tiene el arreglo dinamico.

    void extend_capacity();
};

template <typename T>
std::ostream & operator<<(std::ostream & os, const Stack<T> & stk);

template <typename T> // TAREA
std::istream & operator>>(std::istream & is, Stack<T> & stk);

#include "stack.cpp"

#endif /*_STACK_HPP_*/
