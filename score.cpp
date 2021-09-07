#include<stdio.h>
int main(){
	
	int i,score[5];
	
	for(i=0;i<5;i++){
		printf("input score : ");
		scanf("%d",&score[i]);
	}
	
	printf("score of student :");
	for(i=0;i<5;i++){
		printf(" %d",score[i]);
	}
	
}
