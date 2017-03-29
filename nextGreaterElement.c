// You are given two arrays (without duplicates) nums1 and 
// nums2 where nums1’s elements are subset of nums2. Find
//  all the next greater numbers for nums1's elements in the 
//  corresponding places of nums2.

// The Next Greater Number of a number x in nums1 is
//  the first greater number to its right in nums2. If it
//   does not exist, output -1 for this number.
#include <stdio.h>
#include <stdlib.h>

int* nextGreaterElement(int* findNums, int findNumsSize, int* nums, int numsSize, int returnSize){
	int* returnNums = (int*) malloc(returnSize * sizeof(int));
	int i, j, k, returni;
	returni = 0;
	for(i = 0; i < findNumsSize; i++){
		for (j = 0; j < numsSize; j++){
			if(*(findNums+i) == *(nums+j)){
				k = j + 1;
				while(k < numsSize){
					if(*(findNums+i) < *(nums+k)){
						*(returnNums+returni) =  *(nums+k);
						returni++;
						break;
					}
					k++;
				}
				if(k == numsSize){
					*(returnNums+returni) = -1;
					returni++;
				}
			}
		}
	}
	return returnNums;
}

int main(){
	int i;
	int findNums[] ={2, 4};
	int nums[] = {1, 2, 3, 4};
	int* result = nextGreaterElement(findNums, 2, nums, 4, 2);

	for(i = 0; i < 2; i++){
		// printf("%d", findNums[i]);
		// printf("1 \n");
		printf(" %d ", result[i]);
	}
}