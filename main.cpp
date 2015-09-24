#include <iostream>

using namespace std;

// Base class
class Shape
{
public:
   // pure virtual function providing interface framework.
   virtual int getArea() = 0;
   void setWidth(int w)
   {
      width = w;
   }
   void setHeight(int h)
   {
      height = h;
   }
protected:
   int width;
   int height;
};



class Rectangle: public Shape
{
public:
   int getArea()
   {
      return (width * height);
   }
};
class Triangle: public Shape
{
public:
   int getArea()
   {
      return (width * height)/2;
   }
};
class Circle: public Shape
{
public:
   int getArea()
   {
      return (width * width)*3.14;
   }
};


int main(void)
{
   Rectangle Rect;
   Triangle  Tri;
   Circle Cir;

   Rect.setWidth(5);
   Rect.setHeight(7);
   // Print the area of the object.
   cout << "Total Rectangle area: " << Rect.getArea() << endl;

   Tri.setWidth(5);
   Tri.setHeight(7);
   // Print the area of the object.
   cout << "Total Triangle area: " << Tri.getArea() << endl;

   Cir.setWidth(5);


   cout << "Total Circle area: " << Cir.getArea() << endl;

   cout<< "Total of all areas:" << Rect.getArea()+Tri.getArea()+Cir.getArea() << endl;

   return 0;
}
