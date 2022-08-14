#include<iostream>
using namespace std;

class Demo
{
public:
  void fun()
  {
    cout<<"Inside public fun\n";
  }

private:
  void gun()
  {
    cout<<"Inside private gun\n";
  }

protected:
  void sun()
  {
    cout<<"Inside protected sun\n";
  }

};

int main()
{
  Demo obj;
  cout<<sizeof(obj)<<endl;     // 1 byte

  obj.fun();    // Allowed
  obj.gun();    // Not Allowed
  obj.sun();    // Not Allowed

  return 0;
}
