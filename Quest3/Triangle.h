#ifndef TRIANGLE_H
#define TRIANGLE_H

namespace shapes {
    class Triangle {
    private:
        double base;
        double height;
    public:
        Triangle();
        Triangle(double b, double h);

        double getBase() const;
        double getHeight() const;

        ~Triangle();
    };
}
// TRIANGLE_H

#endif 