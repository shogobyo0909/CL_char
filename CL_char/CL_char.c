/*char*/

#include<stdio.h>
void main(void){
	int i;
	char S[10];
	S[0]='4';
	S[1]='5';
	S[2]='0';
	for(i=0; i<3; i=i+1){
		printf("%c",S[i]);
	}
	printf("\n");

}