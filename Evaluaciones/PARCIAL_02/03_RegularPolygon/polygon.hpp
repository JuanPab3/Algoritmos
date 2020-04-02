#ifndef _POLYGON_HPP
#define _POLYGON_HPP

#include <cmath>

class RegularPolygon{

private:
    int n_sides;
    double side_len;
public:
    /*Constructors*/
    RegularPolygon (int n_sides0, int side_len0);
    RegularPolygon (int n_sides0, double side_len0);

    /*Accessor Methods*/
    int get_n_sides();
    double get_side_len();
    double perimeter();
    double area();

};

/*OPERATORS_OVERLOADING*/
RegularPolygon operator+(RegularPolygon & a, RegularPolygon & b);
RegularPolygon operator*(int i, RegularPolygon & a);
RegularPolygon operator*(RegularPolygon & a, int i);


#endif
