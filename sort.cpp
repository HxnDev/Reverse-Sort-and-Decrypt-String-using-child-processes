#include <iostream>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>
#include <string>
#include <cstring>
#include <algorithm>

using namespace std;

int main(int argc, char* argv[])
{
	char* c = argv[1];
	string s = c;
	
	sort(s.begin(), s.end());
	
	cout << "Sorted string is = " << s << endl;
}
