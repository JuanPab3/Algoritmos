#include "char_stack.hpp"

CharStack::CharStack(){
    //std::cout << "Constructor del stack\n";
    lenght = 0;
    capacity = INIT_CAP;
    data = new char[capacity];
}

CharStack::~CharStack(){
    //std::cout << "Destructor del stack\n";
    delete[] data;
    capacity = 0;
    data = nullptr;
};

bool CharStack::empty(){
    return lenght == 0;
}

unsigned CharStack::size(){
    return lenght;
}

unsigned CharStack::max_items(){
    return capacity;
}

char CharStack::top(){
    return data[lenght-1];
}

void CharStack::pop(){
    lenght--;
}

void CharStack::extend_capacity(){
    char *oldData = data;
    capacity *= 2;
    data = new char[capacity];
    for (unsigned i = 0; i < lenght; i++)
        data[i] = oldData[i];
    delete oldData;
}

void CharStack::push(char ch){
    if (lenght == capacity) extend_capacity();
    data[lenght] = ch;
    lenght ++;
}
