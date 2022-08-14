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
		fd=open(Name, O_RDONLY);
		if(fd==-1)
		{
			cout<<"Unable to open file\n";
		}
		else
		{
			cout<<"File successfully opened\n";
		}
	}

	void ReadData(int size)
	{
		int ret;
		char *Arr = new char[size];
		ret = read(fd, Arr, size);
		cout<<ret<<"\n";
		write(1,Arr,ret);
		delete []Arr;  
	}

	~FileX()
	{
		close(fd);
	}
};

int main()
{
	int no;
	char str[30];
	cout<<"Enter file name\n";
	cin>>str;
	cout<<"Enter number of characters you want to read\n";
	cin>>no;
	FileX obj(str);
	obj.ReadData(no);
	return 0;
}