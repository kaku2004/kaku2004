#include<stdio.h>
int main (){
int year;
printf("enter a year=");
scanf("%d",&year);
if(year %400==0)
printf("it is a leap year");
else 
printf("it is not leap year");
	int A,B;
 	printf("marks in A ");
 	scanf("%d",&A);
 	printf("mark of B");
 	scanf("%d",&B);
	if((A>=55 && B>=45 )|| (B>=55 && A>=45) ){
	printf("PASSED");
	}
	else if(B<45 && A>65){
	printf("student is allow to reappear in B");
	}
	else {
	printf("FAILED");
	}
  return 1;
}
