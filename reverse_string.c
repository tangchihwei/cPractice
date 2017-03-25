//reverse string in c
//
#include<stdio.h>
int strLength(char *str);

void reverseString(char *str){
	int length, lengthType; 
	length = strLength(str);
	lengthType = length%2;

	switch(lengthType){
		case 0: //even
			for (int i = 0; i < length/2; i++){
				int temp = *(str+i);
				*(str+i) = *(str+length-i-1);
				*(str+length-i-1) = temp;
			}
			break;
		case 1:
			for (int i = 0; i < (length/2) ; i++){
				int temp = *(str+i);
				*(str+i) = *(str+length-1-i);
				*(str+length-i-1) = temp;
			}
			break;
	}
	//check length odd or even
}

int strLength(char *str){
	int i = 0; 
	while(str[i]!='\0'){
		i++;
	}
	return i;
}

int main(){
	char str[100];
	printf("enter a string \n");
	gets(str);

	reverseString(str);
	printf("reversed string: %s \n", str);
	return 0;
}