#include<iostream.h>
#include<conio.h>

class Shape {
   public:
      void setWidth(int w) {
         width = w;
      }
      void setHeight(int h) {
         height = h;
      }
      int width;
      int height;
};

class Rectangle: protected Shape {
   public:
   	void input()
      {cout<<"Enter the value of width and height ";
      cin>>width>>height;
      }
      int getArea() {
         return (width * height);
      }
};

void main(void) {
   Rectangle Rect;
   Rect.input();

   //Rect.setWidth(5);
   //Rect.setHeight(7);

   cout << "Total area: " << Rect.getArea() << endl;


 getch();
}