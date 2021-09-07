#include<stdio.h>
int  i,min;

mini(int num){
    
	if(num<min){
		min=num;
	}
	
	
	
}



int main(){

    int number[5] ;

   for (i = 0;i<5; i++)
    {
        printf("input number #%d : ",i+1);
        scanf("%d",&number[i]);
        if(i==0){
        	min=number[i];
		}
        
    	mini(number[i]);
    }
    printf("\n%d ",min);


  
}
