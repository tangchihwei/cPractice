// Given a positive integer, output its complement number. The complement strategy is to flip the bits of its binary representation.

// Note:
// The given integer is guaranteed to fit within the range of a 32-bit signed integer.
// You could assume no leading zero bit in the integer’s binary representation.
#include <stdio.h>
#include <stdlib.h>

int findComplement(int num){
	int mask = 0xffff;
	while(mask & num){
		mask = mask<<1; 
	}
	return ~num & ~mask;
}

int main(){
	int num;
	while(1){
		printf("Type in a number, the system will return the complement of it \n");
		scanf("%d",num);
		printf("Complement is: %d \n",findComplement(num));
	}
}