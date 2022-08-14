#include<iostream>
using namespace std;

class Demo
{
public:
  int i,j;
  
  Demo(int x=10, int y=20)
  {
    i=x;
    j=y;
  }
  friend Demo operator +(Demo, Demo);
  friend Demo operator *(Demo, Demo);
  friend bool operator ==(Demo, Demo);  
};

Demo operator +(Demo op1, Demo op2)
{
  cout<<"Inside Binary +operator\n";
  return Demo(op1.i+op2.i, op1.j+op2.j);
}

Demo operator *(Demo op1, Demo op2)
{
  cout<<"Inside Binary *operator\n";
  return Demo(op1.i*op2.i, op1.j*op2.j);
}

bool operator ==(Demo op1, Demo op2)
{
  cout<<"Inside Binary ==operator\n";
  if((op1.i==op2.i) && (op1.j==op2.j))
  {
    return true;
  }
  else
  {
    return false;
  }
}


int main()
{
  Demo obj1(5,7);
  Demo obj2(3,2);

  Demo ret1(0,0);
  Demo ret2(0,0);

  ret1=obj1+obj2;   // +(obj1, obj2)
  cout<<ret1.i<<"\t"<<ret1.j<<endl;

  ret2=obj1*obj2;   // *(obj1,obj2)
  cout<<ret2.i<<"\t"<<ret2.j<<endl;

  if(obj1==obj2)
  {
    cout<<"Objects are equal\n";
  }
  else
  {
    cout<<"Object are different\n";
  }
  return 0;
}

