#include<iostream>
using namespace std;


class Demo
{
public:
  int i;
private:
  int j;
protected:
  int k;
public:
  Demo()
  {
    i=10; 
    j=20;
    k=30;
  }
friend void fun();    // fun is a function which accepts nothing and returns nothing which is the friend of our class.
};

// Naked function (function defined outside the class)
void fun()
{
//  Demo obj;
  cout<<obj.i<<endl;   //Allowed
  cout<<obj.j<<endl;   // Not allowed : private (if  not friend)
  cout<<obj.k<<endl;   //Not allowed : protected (if not friend)
}

int main()
{Demo obj;
  obj.fun();
  return 0;
}