#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<unistd.h>
#include<fcntl.h>

using namespace std;

class FileX
{
public:
	int fd;

	FileX(char Name[])  // FileX(char *Name)
	{
		fd=creat(Name, 0777);
		if(fd==-1)
		{
			cout<<"Unable to create file\n";
		}
		else
		{
			cout<<"File successfully created\n";
		}
	}

	~FileX()
	{
		close(fd);
	}
};

int main()
{
	char str[30];
	cout<<"Enter file name\n";
	cin>>str;
	FileX obj(str);
	return 0;
}