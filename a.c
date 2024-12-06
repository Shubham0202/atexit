#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

void first(){
	printf("cleanUp 1\n");
}
void second(){
	printf("cleanUp 2\n");
	
}
int main()
{
	atexit(second);
	atexit(first);
	printf("MAIN FUNCTION\n");
 
}

