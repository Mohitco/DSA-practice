#include <stdio.h>
int main()
{
	int i = 25;
	int* j;
	int** k;
	j = &i;
	k = &j;
	printf("%u %u %u ", k, *k, **k);
	return 0;
}


//Here a pointer variable *j hold the address of i and then another pointer variable *k hold the address of j. now k = address of j *k = address of i **k = value of i.