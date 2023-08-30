#include<iostream>
using namespace std;
class rectangle{
    double height,width;
    
    public:
    void setValue(){
        cout<<"Enter the width of the rectangle: ";
        cin>>width;
        cout<<"Enter the height of the rectangle: ";
        cin>>height;
    }
        // Member function to get the area
    double getArea() {
        return width * height;
    }

    // Member function to get the perimeter
    double getPerimeter() {
        return 2 * (width + height);
    }
};
    main(){
        rectangle r1;
        r1.setValue();
        
        cout<<"AREA : "<<r1.getArea()<<endl;
        cout<<"PERIMETER : "<<r1.getPerimeter();
    }

