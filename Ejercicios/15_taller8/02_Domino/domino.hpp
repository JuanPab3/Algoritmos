#ifndef _DOMINO_HPP_
#define _DOMINO_HPP_

#include <iostream>
#include <string>


class Domino {
private:
    /*Class properties*/
    int left_dot, right_dot;

public:
    /*Constructors & Destructor*/
    Domino ();
    Domino (int left, int right);

    /*Accessor Methods*/
    int get_left() const;
    int get_right() const;

    /*Modifier Methods*/
    void set_left(const int & left);
    void set_right(const int & right);
    std::string to_str();
    void flip();
};

/*Operators Overloading*/
std::ostream &operator<<(std::ostream & os, Domino & a);

bool operator==(Domino & a,Domino & b);
bool operator!=(Domino & a,Domino & b);
bool operator<(Domino & a,Domino & b);
bool operator>(Domino & a,Domino & b);
bool operator<=(Domino & a,Domino & b);
bool operator>=(Domino & a,Domino & b);

#endif /*_DOMINO_HPP_*/
