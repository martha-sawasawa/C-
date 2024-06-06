#include "Square.h"

namespace shapes {
    Square::Square() : side_length(0) {} 
    Square::Square(double side) : side_length(side) {}
   


    double Square::getSideLength() const {
        return side_length;
    }
     Square::~Square() {}
}