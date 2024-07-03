
//simple example for showing implementation of inheritance explain by changing the access specifiers
#include<iostream>
using namespace std;
class numbers
{
    public:
    void single()
    {
        cout<<"1,2,3,4,5,6,7,8,9,";
    }
    
};
class all:public numbers{
    public:
    void dbl()
    {
    cout<<"10,11,12,13,14,15,16,17,18,19,20";
    }
};
int main()
{
    all obj;
    obj.single();
    obj.dbl();  
}


//example for showing implementation of encapsulation 
#include <iostream>
using namespace std;
class Box {
private: 
  double width;
  double height;
  double depth;

public:
  Box(double w, double h, double d) {
    width = w;
    height = h;
    depth = d;
  }

  double getWidth() const 
  { 
    return width;
  }
  double getHeight() const { return height; }
  double getDepth() const { return depth; }
};

int main() {
  Box myBox(10.0, 5.0, 3.0);

cout <<  myBox.getWidth()<< endl;
cout <<  myBox.getHeight() << endl;
cout <<  myBox.getDepth()<< endl;

  return 0;
}
//abstraction implementation for explaining
#include<iostream>
using namespace std;
class shape
{
    public:
    virtual void draw()=0;

};
class circle:public shape{
    void draw() override
    {
        cout<<"drawing a circle";
    }
};
class square:public shape{
    void draw() override
    {
        cout<<"drawing a square";
    }
};
int main()
{
    circle obj1;
    square obj2;
    shape*  shape1= &obj1;
    shape* shape2= &obj2;
    shape1->draw();
    cout<<"\n";
    shape2->draw();
}

