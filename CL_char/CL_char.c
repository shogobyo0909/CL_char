/*char*/

#include<stdio.h>
void main(void){
	int i;
	char S[10];
	S[0]='w';
	S[1]='t';
	S[2]='5';
	for(i=0; i<3; i=i+1){
		printf("%c",S[i]);
	}
	printf("\n");

}