#include <stdio.h>

int main(void)
{
	char f,m;
	int age;
	printf("Enter your initials followed by your age: "); 
	scanf("%c %c %d", &f, &m, &age);
	printf("My initials are: %c%c and my age is %d.\n",f,m,age);
	return(0);
}

