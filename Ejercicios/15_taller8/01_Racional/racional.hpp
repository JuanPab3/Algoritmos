#ifndef _RACIONAL_HPP_
#define _RACIONAL_HPP_

#include <iostream>

class Racional{

private:
    int num;
    int den;

    int gcd();
    void simplify();
public:
    /*Constructors & Destructor*/
    Racional ();
    Racional (int num0);
    Racional (int num0, int den0);
    Racional (int mix0, int num0, int den0);

    /*Accessor Methods*/
    int get_num();
    int get_den();

    /*Modifier Methods*/
    void set_rac(int num0, int den0);
    void set_num(int num0);
    void set_den(int den0);

    /*CLASS OPERATORS*/
    void operator=(Racional & a){
        num = a.get_num();
        den = a.get_den();
    }
    Racional operator++(){
        num += den;
        simplify();
        return *this;
    }
    Racional operator++(int){
        Racional c(num,den);
        num += den;
        simplify();
        return c;
    }
    Racional operator--(){
        num -= den;
        simplify();
        return *this;
    }
    Racional operator--(int){
        Racional c(num,den);
        num -= den;
        simplify();
        return c;
    }
    void operator+=(Racional & b){
        num = (num*b.get_den())+(b.get_num()*den);
        den = den*b.get_den();
        simplify();
    }
    void operator+=(int i){
        num += i*den;
        simplify();
    }
    void operator-=(Racional & b){
        num = (num*b.get_den())-(b.get_num()*den);
        den = den*b.get_den();
        simplify();
    }
    void operator-=(int i){
        num -= i*den;
        simplify();
    }
    void operator*=(Racional & b){
        num = num*b.get_num();
        den = den*b.get_den();
        simplify();
    }
    void operator*=(int i){
        num = num*i;
        simplify();
    }
    void operator/=(Racional & b){
        num = num*b.get_den();
        den = den*b.get_num();
        simplify();
    }
    void operator/=(int i){
        den = i*den;
        simplify();
    }

    void operator-(){
        num *= -1;
        simplify();
    }

};

std::ostream &operator<<(std::ostream &os, Racional & a);
std::istream &operator>>(std::istream &is, Racional & a);


bool operator==(Racional & a, Racional & b);
bool operator!=(Racional & a, Racional & b);
bool operator<=(Racional & a, Racional & b);
bool operator>=(Racional & a, Racional & b);
bool operator<(Racional & a, Racional & b);
bool operator>(Racional & a, Racional & b);

Racional operator+(Racional & a, Racional & b);
Racional operator+(Racional & a, int i);
Racional operator-(Racional & a, Racional & b);
Racional operator-(Racional & a, int i);
Racional operator*(Racional & a, Racional & b);
Racional operator*(Racional & a, int & i);
Racional operator/(Racional & a, Racional & b);
Racional operator/(Racional & a, int & i);


#endif /*_RACIONAL_HPP_*/
