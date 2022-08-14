
#include<iostream>
using namespace std;

class StringX
{
public:
	char str[30];

	void Accept()
	{
		cout<<"Enter String\n";
		scanf("%[^\n]s",str);
	}

	int StrlenX()
	{
		int iCnt = 0;
		char *ptr = str;
		while(*ptr !='\0')
		{
			ptr++;
			iCnt++;
		}
		return iCnt;
	}
};

int main()
{
	int iRet = 0;
	StringX obj;
	obj.Accept();
	iRet = obj.StrlenX();
	cout<<"String length is : "<<iRet<<"\n";
	
	return 0;
}