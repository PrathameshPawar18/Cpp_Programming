#include<iostream>
using namespace std;

class Demo
{
public:
  int i, j;

  Demo()
  {
    cout<<"Inside Demo Constructor\n";
  }

  ~Demo()
  {
    cout<<"Inside Demo Destructor\n";
  }

  int Add(int no1, int no2)
  {
    return no1+no2;
  }
};

class Hello 
{
public:
  int x,y;

   Hello()
  {
    cout<<"Inside Hello Constructor\n";
  }

  ~Hello()
  {
    cout<<"Inside Hello Destructor\n";
  }

  int Sub(int no1, int no2)
  {
    return no1-no2;
  }
};

class Maths : public Hello, public Demo
{
public :
  int a;

  Maths()
  {
    cout<<"Inside Maths Constructor\n";
  }

  ~Maths()
  {
    cout<<"Inside Maths Destructor\n";
  }

  int Mult(int no1, int no2)
  {
    return no1*no2;
  }
};

int main()
{

  Maths mobj;
  cout<<sizeof(mobj)<<endl;


  return 0;
}