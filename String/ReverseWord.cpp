/*
Input : __Abc___p15___&__AB__
Output : __cbA___51p___&__BA__
*/

#include<iostream>
using namespace std;

class NumberX
{
public:
	char str[30];

	void Accept()
	{
		cout<<"Enter string\n";
		scanf(" %[^\n]s",str);
	}

	void WordReverse()
	{
		char *ptr=str;
		char *s1=str;
		char *s2=str;
		char cTemp='\0';
		while(*ptr!='\0')
		{
			if(*ptr==' ')
			{
				while((*ptr==' ') && (*ptr!='\0'))
				{
					ptr++;
					s1++;
					s2++;
				}
			}
		 	else
			{
				while((*ptr!=' ') && (*ptr!='\0'))
				{
					ptr++;
					s2++;
				}
				s2--;
				while(s1<s2)
				{
					cTemp = *s1;
					*s1 = *s2;
					*s2 = cTemp;
					s1++;
					s2--;
				}
				s1=ptr;
				s2=ptr;
			}
		}
	}
};

int main()
{
	NumberX obj;
	obj.Accept();
	obj.WordReverse();
	cout<<"Modified String is : "<<obj.str<<"\n";
	
	return 0;
}