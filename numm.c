#include <stdio.h>
int x=1;								//1 original parent
int main(){
    for(int i=0;i<24;i+=4){				//for loop to run through 24 hrs 4 hrs at a time 
        x++;							//to increment by 1 every time the loop is run indicating a new cell being born
    }
    printf("You will have %i cells in 1 day",x); 	//Outputs the number of cells you will have in 1 day
} 