#include<iostream>
using namespace std;


class BOX{
    private:
    double length,breadth,height;

    public:
    void initdata(double a, double b, double c){

        length=a;
        breadth=b;
        height=c;
    }
    double calculateArea(){
        return length*breadth;
    }
    double calculateVolume(){
        return length*breadth*height;
    }
};


int main(){
    BOX box1;

    box1.initdata(42.3,40.8,78.6);

    cout<<"Area of BOX = "<<box1.calculateArea()<<endl;
    cout<<"Volume of BOX = "<<box1.calculateVolume()<<endl;
    
    return 0;
}