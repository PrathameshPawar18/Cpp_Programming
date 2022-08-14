// Accept N numbers from user check whether that numbers contains 11 in it or not.  

#include<iostream>
using namespace std;

class Numbers
{
public:
	int iSize;
	int *Arr;

	Numbers(int iNo)
	{
		iSize = iNo;
		Arr = new int[iSize];
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
			if(Arr[i]==11)
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
	int iSize = 0;
	bool bRet = false;
	cout<<"Enter the numbers of elements\n";
	cin>>iSize;

	Numbers obj(iSize);
	obj.Accept();
	bRet = obj.Check();
	if(bRet==true)
	{
		cout<<"11 is present\n";
	}
	else
	{
		cout<<"11 is not present\n";
	}

	return 0;
}