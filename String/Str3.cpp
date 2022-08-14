/*
H 
H e 
H e l
H e l l
H e l l o
*/

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

	void Pattern()
	{
		int iCnt=0;
		char *ptr = str;
		while(*ptr != '\0')
		{
			iCnt++;
			ptr++;
		}
		ptr = str;
		
		for(int i=0; i<iCnt;i++)
		{
			for(int j=0; j<=i;j++)
			{
				cout<<*ptr<<"\t";
				ptr++;
			}
			cout<<"\n";
			ptr = str;
		}
	}
};

int main()
{
	StringX obj;
	obj.Accept();
	obj.Pattern();
	
	return 0;
}