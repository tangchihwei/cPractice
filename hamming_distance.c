// hamming distance
// Given two integers x and y, calculate the Hamming distance.
#include <stdio.h>
#include <stdlib.h>

int hammingDistance(int x, int y){
	uint32_t a = x^y;
	uint32_t n = 0;
	while (a){
		a = a & (a-1);
		n++;
	}
	return n;
}

int main(){
	int x, y, distance;
	printf("Type in two numbers to find the hamming distance \n");
	scanf("%d %d", &x, &y);
	distance = hammingDistance(x, y);
	printf("distance: %d \n", distance);
}