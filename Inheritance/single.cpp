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

class Hello : public Demo
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

int main()
{
/* Demo dobj;
   cout<<sizeof(dobj)<<"\n";
*/ cout<<dobj.Add(10, 20)<<"\n";

  Hello hobj;
  cout<<sizeof(hobj)<<endl;
  cout<<"Addition:"<<hobj.Add(10,20)<<endl;
  cout<<"Substraction:"<<hobj.Sub(20,8)<<endl;

  return 0;
}