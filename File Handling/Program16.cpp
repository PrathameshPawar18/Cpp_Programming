/*  Write application which accept file name from user and one string from user. Write 
that string at the end of file. 
Input : Demo.txt 
 Hello World 
Output : Write Hello World at the end of Demo.txt file 
*/

#include<iostream>
#include<fcntl.h>
#include<stdio.h>

using namespace std;

class FileX
{
public:
	int fd;

	FileX(char Name[])
	{
		fd = open(Name,O_RDWR);
		if(fd==-1)
		{
			cout<<"Unable to open file\n";
			exit(0);
		}
		else
		{
			cout<<"File opened successfully\n";
		}
	}

	void WriteData()
	{
		int Arr[20]={'\0'};
		cout<<"Enter the string\n";
		scanf(" %[^\n]s",Arr);
		lseek(fd, 1, SEEK_END);
		write(fd,Arr,20);
	}

	~FileX()
	{
		close(fd);
	}
};

int main()
{
	char str[30];

	cout<<"Enter the name of the file\n";
	cin>>str;

	FileX obj(str);
	obj.WriteData();
	
	return 0;
} 

