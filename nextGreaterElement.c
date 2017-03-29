// You are given two arrays (without duplicates) nums1 and 
// nums2 where nums1’s elements are subset of nums2. Find
//  all the next greater numbers for nums1's elements in the 
//  corresponding places of nums2.

// The Next Greater Number of a number x in nums1 is
//  the first greater number to its right in nums2. If it
//   does not exist, output -1 for this number.

int* nextGreaterElement(int* findNums, int findNumsSize, int* nums, int numsSize, int* returnSize){
	int* returnNums = (int*) malloc(*returnSize * sizeof(int));
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