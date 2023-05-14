#include <iostream>
#include "shape.hpp"
#include "smart_ptr.h"

using std::cin; using std::cout; using std::endl;

int main(int argc, const char * argv[])
{
    smart_ptr<Circle> circle(new Circle());
    cout << "Used count of circle: " << circle.use_count() << endl;
    cout << endl;
    
    smart_ptr<Shape> copy_circle;
    copy_circle = circle;
    cout << "Used count of copy_circle: ";
    cout << copy_circle.use_count() << endl;
    cout << "Used count of circle: " << circle.use_count() << endl;
    if(circle) cout << "The circle object is here!" << endl;
    cout << endl;
    
    smart_ptr<Shape> move_circle;
    move_circle = std::move(circle);
    cout << "Used count of move_circle: ";
    cout << move_circle.use_count() << endl;
    cout << "Used count of circle: " << circle.use_count() << endl;
    if(!circle) cout << "The circle object is empty!" << endl;
    
    smart_ptr<Circle> dynamic_ptr_circle =
        dynamic_pointer_cast<Circle>(copy_circle);
    cout << "Used count of dynamic_ptr_circle: "
    << dynamic_ptr_circle.use_count() << endl;
    
    smart_ptr<Circle> static_ptr_circle = static_pointer_cast<Circle>(copy_circle);
    cout << "Used count of static_ptr_circle: "
    << static_ptr_circle.use_count() << endl;

    return 0;
}


//smart_ptr<Circle> circle;
//smart_ptr<Shape> shape{std::move(circle)};
//
//smart_ptr<Triangle> triangle{std::move(circle)};

//Shape *shape;
//Shape * circle = new Circle();
//shape = std::move(circle);
//
//cout << "circle object address: " << circle << endl;
//cout << "circle object address: " << shape << endl;
//
//delete shape;


//    smart_ptr<Shape> ptr1{create_shape(shape_type::Circle)};
//    smart_ptr<Shape> ptr2{ptr1};
//    smart_ptr ptr3;
//    ptr3 = ptr1;
//    ptr3 = std::move(ptr1);
//    smart_ptr ptr4{std::move(ptr3)};

