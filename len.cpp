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
	
	cout<< "The length of String is = "<< s.length()<<endl;

}
