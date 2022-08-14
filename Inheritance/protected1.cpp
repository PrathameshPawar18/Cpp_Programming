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
};


class Derived1 : public Base
{
  int x;

};

class Derived2 : public Derived1
{
  int y;
  int z;
};

int main()
{
  Base bobj;
  Derived1 dobj1;
  Derived2 dobj2;

  cout<<sizeof(bobj)<<endl;
  cout<<sizeof(dobj1)<<endl;
  cout<<sizeof(dobj2)<<endl;

  return 0;
}
