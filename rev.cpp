#include <iostream>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>
#include <string>
#include <cstring>

using namespace std;

int main(int argc, char* argv[])
{
	char* c = argv[1];
	string s = c;
	
	cout<< "Reversed String is = ";
	
	for (int i=s.length()-1; i>=0; i--)
	{
		cout<<s[i];
	}
	cout<<endl;

}
