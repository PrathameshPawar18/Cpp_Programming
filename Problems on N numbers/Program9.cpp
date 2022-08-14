// Accept N numbers from user and return frequency of 11 form it.   

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

	int Frequency()
	{
		int iCnt = 0, i=0;

		for(i=0;i<iSize;i++)
		{
			if(Arr[i]==11)
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
	iRet = obj.Frequency();
	cout<<"Frequency of 11 is : "<<iRet<<endl;

	return 0;
}