// Overload ++ when used as prefix and postfix

#include<iostream.h>
#include<conio.h>

class Count {
   private:
    int value;

   public:

    Count() : value(5) {}


    void operator ++ () {
        ++value;
    }


    void operator ++ (int) {
        value++;
    }

    void display() {
        cout << "Count: " << value << endl;
    }
};

void main()
{
	 Count count1;


    count1++;
    count1.display();

    ++count1;

    count1.display();
getch();
}