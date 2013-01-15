/*char*/

#include<stdio.h>
void main(void){
	int i;
	char S[10];
	S[0]='2';
	S[1]='2';
	S[2]='2';
	for(i=0; i<3; i=i+1){
		printf("%c",S[i]);
	}
	printf("\n");

}