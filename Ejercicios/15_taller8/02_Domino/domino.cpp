#include "domino.hpp"

/*======================CONSTRUCTORS_&_DESTRUCTOR======================*/
Domino::Domino (){
    left_dot = 0;
    right_dot = 0;
}

Domino::Domino (int left, int right){
    // std::cout << "Create: [" << left << "|" << right << "]" << std::endl;
    left_dot = left;
    right_dot = right;
}
/*==========================ACCESSOR_METHODS============================*/
int Domino::get_left() const{
    return left_dot;
}

int Domino::get_right() const{
    return right_dot;
}
/*==========================MODIFIER_METHODS===========================*/
void Domino::set_left(const int &left){
    // std::cout << "set_left " << left << std::endl;
    left_dot = left;
}

void Domino::set_right(const int &right){
    // std::cout << "set_right " << right << std::endl;
    right_dot = right;
}

std::string Domino::to_str(){
    std::string dom = "+-------+-------+\n|       |       |\n|       |       |\n|       |       |\n+-------+-------+";
    if (left_dot == 1){
        dom[40] = '#';
    } else if (left_dot == 2) {
        dom[20] = '#';
        dom[60] = '#';
    } else if (left_dot == 3) {
        dom[20] = '#';
        dom[40] = '#';
        dom[60] = '#';
    } else if (left_dot == 4) {
        dom[20] = '#';
        dom[24] = '#';
        dom[56] = '#';
        dom[60] = '#';
    } else if (left_dot == 5) {
        dom[20] = '#';
        dom[24] = '#';
        dom[40] = '#';
        dom[56] = '#';
        dom[60] = '#';
    }  else if (left_dot == 6) {
        dom[20] = '#';
        dom[24] = '#';
        dom[38] = '#';
        dom[42] = '#';
        dom[56] = '#';
        dom[60] = '#';
    }

    if (right_dot == 1){
        dom[48] = '#';
    } else if (right_dot == 2) {
        dom[28] = '#';
        dom[68] = '#';
    } else if (right_dot == 3) {
        dom[28] = '#';
        dom[48] = '#';
        dom[68] = '#';
    } else if (right_dot == 4) {
        dom[28] = '#';
        dom[32] = '#';
        dom[64] = '#';
        dom[68] = '#';
    } else if (right_dot == 5) {
        dom[28] = '#';
        dom[32] = '#';
        dom[48] = '#';
        dom[64] = '#';
        dom[68] = '#';
    }  else if (right_dot == 6) {
        dom[28] = '#';
        dom[32] = '#';
        dom[46] = '#';
        dom[50] = '#';
        dom[64] = '#';
        dom[68] = '#';
    }

    return dom;

}

void Domino::flip(){
    int temp  = left_dot;
    left_dot  = right_dot;
    right_dot = temp;
}
/*========================OPERATORS_OVERLOADING========================*/
std::ostream &operator<<(std::ostream & os, Domino & a){
    os << "[" <<a.get_left() << "|" << a.get_right() << "]";
    return os;
}

bool operator==(Domino & a,Domino & b){
    bool pos1 = a.get_left() == b.get_left();
    bool pos2 = a.get_right() == b.get_right();
    bool pos3 = a.get_left() == b.get_right();
    bool pos4 = a.get_right() == b.get_left();

    return (pos1 and pos2) or (pos3 and pos4);
}

bool operator!=(Domino & a,Domino & b){
    bool pos1, pos2;

    pos1 = !(a == b);
    b.flip();
    pos2 = !(a == b);
    b.flip();
    return pos1 and pos2;
}

bool operator<(Domino & a,Domino & b){
    bool pos1 = (a.get_left() < b.get_left()) and (a.get_left() < b.get_right());
    bool pos2 = (a.get_right() < b.get_left()) and (a.get_right() < b.get_right());

    return pos1 and pos2;
}

bool operator>(Domino & a,Domino & b){
    bool pos1 = (a.get_left() > b.get_left()) and (a.get_left() > b.get_right());
    bool pos2 = (a.get_right() > b.get_left()) and (a.get_right() > b.get_right());

    return pos1 or pos2;
}

bool operator<=(Domino & a,Domino & b){
    bool pos1 = a > b;

    return !pos1;
}

bool operator>=(Domino & a,Domino & b){
    bool pos1 = a < b;

    return !pos1;
}

/*=====================================================================*/
