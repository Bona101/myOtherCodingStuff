#include <stdio.h>

int main(){

    int x=1;							    //1 original parent
    for(int i=0;i<24;i+=4){				    //for loop to run through 24 hrs 4 hrs at a time 
        x++;							    //to increment by 1 every time the loop is run indicating a new cell being born
    }

    double sim[43]={1,2,3,4,5,6};			//An array of 43 elements with each element representing the total number of cells every 4 hours starting from the 0th 4 hours to the 42nd 4 hours (there are 168 hours in a week, 168/4=42)
	for(int i=6;i<43;i++){					//for loop to run through the elements in the sim array, starting from the 7th element
		sim[i]=sim[i-1]+sim[i-6];			//after the 6th element, in order to know how many cells you have next you simply add the value of the previous element and the sixth to last element 
	}										//this is done to add up the new parents that just finished incubation and we use the sixth to last element because there are six 4 hours in a day (24/4=6) and the last 24hrs is when they were born

	double sum[187]={1,2,3,4,5,6};			//An array of 187 elements with each element representing the total number of cells every 4 hours starting from the 0th 4 hours to the 186th 4 hours (there are 744 hours in a month(31 days), 744/4=186)
	for(int i=6;i<187;i++){					//for loop to run through the elements in the sum array, starting from the 7th element
		sum[i]=sum[i-1]+sum[i-6];			//after the 6th element, in order to know how many cells you have next you simply add the value of the previous element and the sixth to last element 
	}										//this is done to add up the new parents that just finished incubation and we use the sixth to last element because there are six 4 hours in a day (24/4=6) and the last 24hrs is when they were born
   // printf("You will have %i cells in 1 day, %g cells in 1 week and %e cells in 1 month",x,sim[42],sum[186]); 	//Outputs the number of cells you will have in 1 day, 1 week and 1 month
    printf("Number of cells in 1 day: %d cells\n", x);
    printf("Number of cells in 1 week: %g cells\n", sim[42]);
    printf("Number of cells in 1 month: %e cells", sum[186]);
}
	
