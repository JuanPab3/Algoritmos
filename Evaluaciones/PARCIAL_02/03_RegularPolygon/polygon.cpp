#include "polygon.hpp"

/*======================CONSTRUCTORS_&_DESTRUCTOR======================*/
RegularPolygon::RegularPolygon (int n_sides0, int side_len0){
    n_sides = n_sides0;
    side_len = side_len0;
}

RegularPolygon::RegularPolygon (int n_sides0, double side_len0){
    n_sides = n_sides0;
    side_len = side_len0;
}
/*==========================ACCESSOR_METHODS============================*/
int RegularPolygon::get_n_sides(){
    return n_sides;
}

double RegularPolygon::get_side_len(){
    return side_len;
}

double RegularPolygon::perimeter(){
    return side_len * n_sides;
}

double RegularPolygon::area(){
    double n = n_sides;
    double A = 0.25 * n;
    A *= pow(side_len,2);
    A *= 1/tan(M_PI/n);
    return A;
}

/*========================OPERATORS_OVERLOADING========================*/
RegularPolygon operator+(RegularPolygon & a, RegularPolygon & b){
    int n3 = a.get_n_sides() + b.get_n_sides();
    double l3 = (a.get_side_len() + b.get_side_len())/2;
    return RegularPolygon(n3,l3);
}

RegularPolygon operator*(int i, RegularPolygon & a){
    return RegularPolygon(a.get_n_sides() * i, a.get_side_len());
}

RegularPolygon operator*(RegularPolygon & a, int i){
    return RegularPolygon(a.get_n_sides() * i, a.get_side_len());
}
/*=====================================================================*/
