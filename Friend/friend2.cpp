#include<iostream>
using namespace std;

class Hello
{
public:
  void fun();
  void gun();
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

friend class Hello;     //Hello is friend of our class. 
};

void Hello :: fun()       // Member function of class Hello
{
  Demo obj;
  cout<<obj.i<<endl;   
  cout<<obj.j<<endl;   
  cout<<obj.k<<endl;  
}

void Hello :: gun()       // Member function of class Hello
{
  Demo obj;
  cout<<obj.i<<endl;   
  cout<<obj.j<<endl;  
  cout<<obj.k<<endl;   
}


int main()
{
  Hello hobj;
  hobj.fun();
  hobj.gun();
  return 0;
}