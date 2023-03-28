#include <stdio.h>
int num,i=10,d=0,z=0;
float num1,num2;
int main(){
	printf("Input your Telephone Number, Bank Verification Number (BVN) or Body weight: ");  //Note that Body weight can be a float
	scanf("%f",&num1);
	num2=num1;		//stores the value of your input in num1
	num=(int)num1;			//we cast num1 to int and store the value in num
	
	while(num1!=num){		//if the user input a floating-point number and not an integer then the integer cast float will not equal the original float and that is the only time the loop will run
		num1*=10;			//we multiply by ten so the decimal part can become part of the integer part
		num=(int)num1;		//we cast the new num1 to int and store the value in num
	}
	while(i<=num*10){				//given i is less than or equal to num*10
	sum:
		d+=(num-(num/i)*i)/(i/10);	//since num is an integer it drops the decimal part after division so we multiply the divided num by i and deduct it from the original num to retrieve the lost digit(s) and now we multiply all by 10 and then divide all by i. We now add that value to d and store it in d 
		i*=10;						//we then multiply i by 10 and store it in i
	}z++;							//to keep track of how many times this line has run
	(z==1) ? printf("The sum of digits of %g is %d\n",num2,d):printf("The sum of digits of %d is %d\n",num,d); 	//to print the original number the first time this line is run even if it is a float

	if(d>9){						//if d is not a 1 digit number
		num=d;						//let num be d
		d=0;						//let d be 0
		i=10;						//let i be 10
		goto sum;					//sum up all digits of num and the same process will continue to take place as long as the sum of num is greater than 9
	}
									
}
