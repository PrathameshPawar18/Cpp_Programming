#include<iostream>

using namespace std;

class Base
{
public:
  int i;
private:
  int j;
protected:
  int k;
public:
  void gun()
  {
    cout<<k;
  }
};

class Derived : public Base
{
public:
  void fun()
  {
    cout<<i<<endl;   // Allowed
    cout<<j<<endl;   // Not Allowed
    cout<<k<<endl;   // Allowed
  }

};

int main()
{
  Base bobj;
  Derived dobj;

  cout<<bobj.i<<endl;  // Allowed
  cout<<bobj.j<<endl;  // Not Allowed
  cout<<bobj.k<<endl;  // Not Allowed
  cout<<dobj.k<<endl;  // Not Allowed
  
  

  return 0;
}