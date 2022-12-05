#include<stdio.h>

main(){
	
	int x = 150;
	int y = 350;
	int z;
	
	z = x;
	x = y;
	y = z;
	
	printf(" Swapped Value for A :- %d\n",x);
	printf(" Swapped Value for B :- %d",y);
	
	
}
