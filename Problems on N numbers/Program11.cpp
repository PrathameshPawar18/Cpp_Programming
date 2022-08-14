// Accept N numbers from user and accept one another number as NO ,check whether NO is present or not.   

#include<iostream>
using namespace std;

class Numbers
{
public:
	int iSize;
	int iValue;
	int *Arr;

	Numbers(int iSize, int iValue)
	{
		this->iSize = iSize;
		this->iValue = iValue;
		Arr = new int[this->iSize];
	}

	void Accept()
	{
		int i=0;
		cout<<"Enter the elements\n";
		for(i=0;i<iSize;i++)
		{
			cout<<"Enter "<<i+1<<" element : ";
			cin>>Arr[i];
		}
	}

	bool Check()
	{
		int i=0;
		for(i=0;i<iSize;i++)
		{
			if(Arr[i]==iValue)
			{
				break;
			}
		}
		
		if(iSize == i)
		{
			return false;
		}
		else
		{
			return true;
		}
	}

	~Numbers()
	{
		delete []Arr;
	}
};

int main()
{
	int iSize = 0, iNo=0;
	bool bRet = false;

	cout<<"Enter the numbers of elements\n";
	cin>>iSize;

	cout<<"Enter the number that you want to search\n";
	cin>>iNo;

	Numbers obj(iSize,iNo);
	obj.Accept();
	bRet = obj.Check();
	if(bRet==true)
	{
		cout<<iNo<<" is present\n";
	}
	else
	{
		cout<<iNo<<" is not present\n";
	}

	return 0;
}