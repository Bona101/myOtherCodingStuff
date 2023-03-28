#include <stdio.h>
#include <math.h>

int main(){
	double a,b,c,x1,x2,d,i;
	printf("Input your value for a\na = ");				//Input coeficient of x^2
	scanf("%lf",&a);									
	printf("Input your value for b\nb = ");				//Input coeficient of x
	scanf("%lf",&b);
	printf("Input your value for c\nc = ");				//Input coeficient of x^0
	scanf("%lf",&c);
	d=b*b-4*a*c;										//Store value of discriminant in d
	if (d<0)
    {											//If d is negative, it has complex roots
		x1=-b/(2*a);                                    //compute one real part and store it in x1. The two real parts are equal.
		i=sqrt(-d)/(2*a);								//compute one imaginary part but without the "i" and store it in. The two imaginary parts are conjugates of each other.
		printf("x1 = %g + %gi\nx2 = %g - %gi",x1,i,x1,i);//Attach "i" to the imaginary parts that do not have "i" and print the roots 
		return 0;										//return statement to terminate program as roots would have been calculated if complex
	}
	x1=(-b+sqrt(d))/(2*a);								//if d is not negative, it has real roots. Computing the first root
	x2=(-b-sqrt(d))/(2*a);								//computing the second root
	printf("x1 = %lf\nx2 = %lf",x1,x2);					//print the roots
 
}