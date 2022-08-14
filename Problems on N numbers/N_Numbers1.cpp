// Accept n numbers from user and perform addition of all numbers.

#include<iostream>
using namespace std;

class Numbers
{
public:
	int *Arr;
	int iSize;

	Numbers(int iNo)
	{
		cout<<"Inside constructor\n";
		iSize=iNo;
		Arr = new int[iSize];
	}

	void Accept()
	{
		int i=0;
		cout<<"Enter the values\n";
		for(i=0;i<iSize;i++)
		{
			cin>>Arr[i];
		}
	}

	void Display()
	{
		int i=0;
		cout<<"Values are\n";
		for(i=0;i<iSize;i++)
		{
			cout<<Arr[i]<<endl;
		}
	}

	int Addition()
	{
		int i=0, iSum=0;
		for(i=0;i<iSize;i++)
		{
			iSum=iSum+Arr[i];
		}
		return iSum;
	}

	~Numbers()
	{
		cout<<"Inside Destructor\n";
		delete []Arr;
	}
};

int main()
{
	int iNo=0, iRet=0;
	cout<<"Enter number of elements\n";
	cin>>iNo;

	Numbers obj(iNo);
	obj.Accept();
	obj.Display();
	iRet = obj.Addition();
	cout<<"Addition is : "<<iRet<<"\n";

	return 0;
}