/* Write application which accept file name from user and open that file in read mode. 
Input : Demo.txt 
Output : File opened successfully. 
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
		fd = open(Name,O_RDONLY);
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