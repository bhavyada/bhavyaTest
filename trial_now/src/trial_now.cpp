//============================================================================
// Name        : trial_now.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================


#include <cstdlib>
#include <iostream>
using namespace std;

class Arthimatic
{
   protected:
      int x;
      int y;
   public:
   Arthimatic(int a, int b):x(a), y(b){}
   virtual void calculator()
   {
      cout<<"Simple calculator"<<endl;
      cout<<"(x+y):"<<(x+y)<<endl;
      cout<<"(x-y):"<<(x-y)<<endl;
   }
};

class SimpleArthimatic:public Arthimatic
{
  public:
   SimpleArthimatic(int a, int b):Arthimatic(a,b){}
   void calculator()
   {
      cout<<"SimpleArthimatic calculator"<<endl;
      cout<<"(x+y):"<<(x+y)<<endl;
      cout<<"(x-y):"<<(x-y)<<endl;
      cout<<"(x*y):"<<(x*y)<<endl;
      cout<<"(x/y):"<<(x/y)<<endl;
   }
};

class LogicalArthimatic:public SimpleArthimatic
{
  public:
   LogicalArthimatic(int a, int b):SimpleArthimatic(a,b){}
   void calculator()
   {
      cout<<"Logical calculator"<<endl;
      cout<<"(x+y):"<<(x+y)<<endl;
      cout<<"(x-y):"<<(x-y)<<endl;
      cout<<"(x*y):"<<(x*y)<<endl;
      cout<<"(x/y):"<<(x/y)<<endl;






cout<<"(x&y):"<<(x&y)<<endl;
      cout<<"(x|y):"<<(x|y)<<endl;
      cout<<"(x^y):"<<(x^y)<<endl;
   }
};

int main(int argc, char *argv[])
{
    //if user interested in arthimatic
    Arthimatic obj(10,20);
    Arthimatic *ptr = NULL;
    ptr = &obj;
    ptr->calculator();

    //if user interested in simple arthimatic
    SimpleArthimatic obj1(30,40);
    ptr = &obj1;
    ptr->calculator();

    //if user interested in Logic arthimatic
    LogicalArthimatic obj2(30,40);
    ptr = &obj2;
    ptr->calculator();
    //system("PAUSE");
    return 0;
}
