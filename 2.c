#include<stdio.h>

main(){
	
	int x = 150;
	int y = 350;
	
	
	x = x+y;
	y = x-y;
	x = x-y;
	
	printf(" Swapped Value for A :- %d\n",x);
	printf(" Swapped Value for B :- %d",y);
	
	
}
