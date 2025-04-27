#include <stdio.h>
int main()
{
	int a = 36;
	int* ptr;
	ptr = &a;
	printf("%u %u", &*ptr, *&ptr); // & and * cancelled each other and display the address stored in a pointer variable ptr. so it gave address of a
	return 0;
}
