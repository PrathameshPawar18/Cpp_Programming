/* Accept three file names from user which are existing files. Create one new file 
named as Demo.txt. Write name and Data of that three files in Demo.txt file one 
after another. 
Input : abc.txt 
 pqr.txt 
 xyz.txt 
Output : Write file name and data of each file in Demo.txt file. 
*/

#include<iostream>
#include<fcntl.h>
#include<stdio.h>
#include<string.h>

using namespace std;

class FileX
{
public:
	int fd1, fd2, fd3, fd4;
	char name1[10], name2[10], name3[10];

	FileX(char Name1[],char Name2[],char Name3[])
	{
		fd1 = open(Name1,O_RDONLY);
		fd2 = open(Name2,O_RDONLY);
		fd3 = open(Name3,O_RDONLY);
		if(fd1==-1 || fd2==-1 || fd3==-1)
		{
			cout<<"Unable to open file\n";
			exit(0);
		}
		else
		{
			cout<<"File opened successfully\n";
		}

		strcpy(name1,Name1);
		strcpy(name2,Name2);
		strcpy(name3,Name3);
	}

	void CreateFile()
	{
		fd4=creat("Demo.txt",0777);
		if(fd4==-1)
		{
			cout<<"Unable to create file\n";
		}
		else
		{
			cout<<"File created successfully\n";
		}
	}

	void WriteData()
	{
		char Arr[10];
		int ret=0;

		write(fd4,name1,sizeof(name1));
		while((ret=read(fd1,Arr,10))!=0)
		{
			write(fd4,Arr,ret);
		}
		write(fd4,name2,sizeof(name2));
		while((ret=read(fd2,Arr,10))!=0)
		{
			write(fd4,Arr,ret);
		}

		write(fd4,name3,sizeof(name3));
		while((ret=read(fd3,Arr,10))!=0)
		{
			write(fd4,Arr,ret);
		}

		
	}

	~FileX()
	{
		close(fd1);
		close(fd2);
		close(fd3);
		close(fd4);
	}
};

int main()
{
	char str1[10]={'\0'}, str2[10]={'\0'}, str3[10]={'\0'};

	cout<<"Enter the name of first file\n";
	cin>>str1;

	cout<<"Enter the name of second file\n";
	cin>>str2;

	cout<<"Enter the name of third file\n";
	cin>>str3;

	FileX obj(str1, str2, str3);
	obj.CreateFile();
	obj.WriteData();
	
	return 0;
} 

