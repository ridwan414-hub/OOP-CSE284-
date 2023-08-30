// Example 2: Write a C++ program to define a class BOX with member func-
// tions.

// Data member: [length, breadth and height]
// Member function: [input value(), print value() and volume()].
// Now find the volume of a box by accessing the members of this class using its
// object.
#include <iostream>
using namespace std;
class BOX
{
public: // public access of the members
double length, breadth, height;// data members
// defining member functions
void input_value()
{
cout<<"Enter three sides of a box: "<<endl;
cin>>length>>breadth>>height;
}
void print_value()
{
cout<<"Length : "<<length<<endl;
cout<<"Breadth : "<<breadth<<endl;
cout<<"Height : "<< height<<endl;
}
double volume()
{
double v=length*breadth*height;
return v;
}
};
int main()
{
BOX myBox; //creating a object
// Accessing members of class through its object
myBox.input_value(); //taking the inputs
myBox.print_value();//printing the values
double vol= myBox.volume(); //calculating volume
cout<<"Volume of the box: "<<vol<<endl;
}