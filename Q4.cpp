#include <iostream>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>
#include <string>
#include <cstring>

using namespace std;

int main(int argc, char* argv[])
{
	char s[100];
	
	cout<< "Enter the string = ";
	
	cin.getline(s,100);
	
	pid_t rev = fork();
	
	if (rev >0)
	{
								//Reverse Parent Process
		wait(NULL);
		
		pid_t len = fork();
		
		if (len > 0)
		{
								//Length Parent Process
			wait(NULL);
			
			pid_t ascii = fork();
			
			if (ascii >0)
			{
								//Ascii parent process
				wait(NULL);
				
				pid_t sort = fork();
				
				if (sort > 0)
				{
								//Sort parent process
					wait(NULL);
					
					pid_t decrypt = fork();
					
					if (decrypt >0)
					{
								//Decrypt Parent Process
						wait(NULL);
						cout<<"The program has ended successfully! :) "<<endl;
					}
					
					else if (decrypt == 0)
					{
								//Decrypt Child Process
						execl("./decrypt","decrypt",s,NULL);			//Performing decrypt function
					}
					
					else
					{
						cout<<"Decrypt: Fork Failed"<<endl;
					}
				}
				
				else if (sort == 0)
				{
								//Sort Child Process
					execl("./sort","sort",s,NULL);			//Performing sorting function
				}
				
				else 
				{
					cout<<"Sort: Fork Failed"<<endl;
				}
			}
			
			else if (ascii == 0)
			{
								//Ascii child process
				execl("./ascii","ascii",s,NULL);			//Performing ascii function
			}
			
			else
			{
				cout<<"Ascii: Fork Failed"<<endl;
			}
		}
		
		else if (len == 0)
		{
								//Length Child Process
			execl("./len","len",s,NULL);			//Performing length function
		}
		
		else
		{
			cout<<"Length: Fork Failed"<<endl;
		}
		
		
	}
	
	else if (rev == 0)
	{
								//Reverse Child Process
		execl("./rev","rev",s,NULL);			//Performing reverse function
	}
	
	else
	{
		cout<<"Reverse: Fork Failed"<<endl;
	}

}
