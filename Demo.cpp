#include<iostream>
using namespace std;

class Demo
{
   public:
   void Fun(int i)
   {
     cout<<"First defination";
   }
   void Fun(int i,int j)
   {
    cout<<"Second defination";
   }
};

int main()
{
    Demo obj();

    obj.Fun(10);
    obj.Fun(10,20);

    return 0;
}