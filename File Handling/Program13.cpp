/*   Write application which accept file name from user and create that file. 
Input : Demo.txt 
Output : File created successfully. 
*/

#include<iostream>
#include<fcntl.h>

using namespace std;

class FileX
{
public:
	int fd;

	FileX(char Name[])
	{
		fd = creat(Name,0777);
		if(fd==-1)
		{
			cout<<"Unable to create file\n";
			exit(0);
		}
		else
		{
			cout<<"File created successfully\n";
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

	cout<<"Enter the name of the file\n";
	cin>>str;

	FileX obj(str);
	
	return 0;
}
