 #ifndef SQUARE_H
 #define SQUARE_H
namespace shapes {
    class square {
        private:
        double side_length;
        public:
        Square() : sideLength(0) {}
        Square(double side) : sideLength(side) {}
        
        double getSideLength() const;
         
         ~Square() {}
  
    };
   
    


}

 #endif
