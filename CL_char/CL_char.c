/*char*/

#include<stdio.h>
void main(void){
	int i;
	char S[10];
	S[0]='C';
	S[1]='L';
	S[2]='1';
	for(i=0; i<3; i=i+1){
		printf("%c",S[i]);
	}
	printf("\n");

}