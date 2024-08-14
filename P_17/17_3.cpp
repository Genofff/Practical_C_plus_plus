class AdHocSquare
{
public:
    AdHocSquare(double side) {set_side(side); }
    void set_side(double side) { this->side = side;}
    double get_area() { return side * side; }
private:
    double side;
};

class LazySquare
{
public:
    LazySquare(double side) {set_side(side);}
    void set_side(double side)
    {
        if (this->side != side){
            side_changed = true;
            this->side = side;
        }

    }
    double get_area()
    {
        if (side_changed)
        {
            area = side * side;
            side_changed = false;
        }
        return area;
    }
private:
    double side;
    double area;
    bool side_changed;
};

#include <iostream>

int main() {
    AdHocSquare adhoc_square(5.0);
    std::cout << "AdHocSquare area: " << adhoc_square.get_area() << std::endl;
    adhoc_square.set_side(10.0);
    std::cout << "AdHocSquare area after changing side: " << adhoc_square.get_area() << std::endl;

    LazySquare lazy_square(5.0);
    std::cout << "LazySquare area: " << lazy_square.get_area() << std::endl;
    lazy_square.set_side(10.0);
    std::cout << "LazySquare area: " << lazy_square.get_area() << std::endl;
    lazy_square.set_side(10.0);
    std::cout << "LazySquare area: " << lazy_square.get_area() << std::endl;
    return 0;
}