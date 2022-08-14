#include<iostream>
using namespace std;

class Hello
{
public:
  void fun();
};

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
// fun is the function which accepts nothing returns nothing and that function is the member function of hello class is friend of our class.
friend void Hello :: fun();   
};

void Hello :: fun()       // Member function of class Hello
{
  Demo obj;
  cout<<obj.i<<endl;   //Allowed
  cout<<obj.j<<endl;   // Not allowed : private (if  not friend)
  cout<<obj.k<<endl;   //Not allowed : protected (if not friend)
}


int main()
{
  Hello hobj;
  hobj.fun();
  return 0;
}