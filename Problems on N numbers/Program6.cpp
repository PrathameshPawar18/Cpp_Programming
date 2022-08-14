// Accept N numbers from user and return frequency of even numbers. 

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

	int EvenFrequency()
	{
		int iCnt = 0, i=0;

		for(i=0;i<iSize;i++)
		{
			if((Arr[i]%2)==0)
			{
				iCnt++;
			}
		}
		return iCnt;
	}

	~Numbers()
	{
		delete []Arr;
	}
};

int main()
{
	int iSize = 0, iRet = 0;
	cout<<"Enter the numbers of elements\n";
	cin>>iSize;

	Numbers obj(iSize);
	obj.Accept();
	iRet = obj.EvenFrequency();
	cout<<"Frequency of even numbers is : "<<iRet<<endl;

	return 0;
}