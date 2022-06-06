class Circle: public Figure{
    public:
    double r;
    Circle(double r):r(r){};
    Circle() = default;
    double area()
    {
        return pi*r*r;
    }
    double volume()
    {
        return 0;
    }
}; 
class Cylinder: public Circle{
    public:
    double r,h;
    Cylinder(double h,double r):r(r),h(h){};
    Cylinder() = default;
    double area()
    {
        return pi*r*r*2+2*pi*r*h;
    }
    double volume()
    {
        return pi*r*r*h;
    }
};