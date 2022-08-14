// Accept N numbers from user and accept one another number as NO , 
// return index of first occurrence of that NO.    

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

	int FirstOccurance()
	{
		int i=0;
		for(i=0;i<iSize;i++)
		{
			if(Arr[i] == iValue)
			{
				break;
			}
		}
		if(i != iSize)
		{
			return i;
		}
		else
		{
			return -1;
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
	int iRet = 0;

	cout<<"Enter the numbers of elements\n";
	cin>>iSize;

	cout<<"Enter the number that you want to search\n";
	cin>>iNo;

	Numbers obj(iSize,iNo);
	obj.Accept();
	iRet = obj.FirstOccurance();
	if(iRet==-1)
	{
		cout<<iNo<<" is not present\n";
	}
	else
	{
		cout<<iNo<<" is present at index "<<iRet;
	}

	return 0;
}