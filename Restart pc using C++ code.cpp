#include<stdio.h>
#include<stdlib.h>
using namespace std;
int main()
{
	
	//for windows user
	
	//restart immediately after 3minutes seconds when i compile and run my code
system("c:\\windows\\system32\\shutdown /r /t 180");		//2min = 2*60 =120
//restart immediately after 30 seconds when i compile and run my code
system("c:\\windows\\system32\\shutdown /r");
//restart immediately after 0 seconds when i compile and run my code
system("c:\\windows\\system32\\shutdown /r /t 0");
}

