// Accept N numbers from user and accept one another number as NO ,return frequency of NO form it.   

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

	int Frequency()
	{
		int iCnt = 0, i=0;

		for(i=0;i<iSize;i++)
		{
			if(Arr[i]==iValue)
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
	int iSize = 0, iNo=0, iRet = 0;
	cout<<"Enter the numbers of elements\n";
	cin>>iSize;

	cout<<"Enter the number that you want to search\n";
	cin>>iNo;

	Numbers obj(iSize,iNo);
	obj.Accept();
	iRet = obj.Frequency();
	cout<<"Frequency of "<<iNo<<" is : "<<iRet<<endl;

	return 0;
}