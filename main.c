#include<stdio.h>

int main() {
    printf("The size of int is: %lu\n", sizeof(int));
    printf("The size of char is %lu\n", sizeof(char));
    //Using datatype as input
    printf("The size of float is: %lu\n", sizeof(float));
	printf("The size of float is: %lu\n", sizeof(double));
	printf("The size of float is: %lu\n", sizeof(void));
    return 0;
}