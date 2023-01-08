#include <stdio.h>

int main() {
	//¹èÅ¸ÀûOR

	unsigned char a = 2;
	unsigned char b = 3;

	// a:      00000010
    // b:      00000011
    // 
    // a ^ b:  00000001 (c)
    // a:      00000010
    // c ^ a:  00000011 

    // b:      00000011
    // a ^ b:  00000001 (c)
    // c ^ b:  00000010  (a)


	unsigned char c = a ^ b;
	printf("a ^ b = %d", c);

	c = c ^ b;
	printf("c ^ b = %d", c); //a




	return 0;
}