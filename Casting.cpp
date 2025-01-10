#include<iostream>
using namespace std;

class Base
{
    public:
       int i,j;
    void Fun()                //Defination
        {
          cout<<"Inside Base Fun\n";    
        }
};

class Derived : public Base
{
    public:
      int x,y;
        void Fun()              //Redefination
            {
              cout<<"Inside Derived Fun\n";
            }
};

int main()
{
   
   Base bobj;      //(8byte)
   Derived dobj;   //(16byte)
   
   Base *bptr = NULL;   //(8byte)
   Derived *dptr = NULL;   //(8byte)

    bptr = &bobj;   //Nocasting
    dptr = &dobj;   //Nocasting
    bptr = &dobj;   //Upcasting
    dptr = &bobj;   //Downcasting
   
  return 0;
}
