//reverse string in c
//
#include<stdio.h>
int strLength(char *str);

void reverseString(char *str){
	int length; 
	length = strLength(str);

	for (int i = 0; i < length/2; i++){
		int temp = *(str+i);
		*(str+i) = *(str+length-i-1);
		*(str+length-i-1) = temp;
	}
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