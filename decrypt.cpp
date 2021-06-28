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
	
	for (int i=0; i<s.length(); i++)
	{
		s[i]-=2;
	}
	
	cout<<"The decrypted string is = ";
	for (int i=0; i<s.length(); i++)
	{
		cout<<s[i];
	}
	cout<<endl;	
}
