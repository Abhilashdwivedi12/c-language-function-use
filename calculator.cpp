#include <stdio.h>
void sum(int, int);
void mins(int, int);
void divide(int, int);
void mult(int, int);
 
 int main ()
 {
 	int a,b,c;
 	printf("your options are -\n 1.add\n 2.sub\n 3.mult\n 4.divide\n");
 	printf("select your option");
 	scanf("%d",&c);
 		printf ("input first number a");
 	scanf("%d",&a);
 	printf ("input second number b");
 	scanf("%d",&b);
 	switch(c){
 	case 1:
 	sum(a,b);
 	break;
	case 2:
 	mins(a,b);
 	break;
 	case 3:
 	divide(a,b);
 	break;
 	case 4:
 	mult(a,b);
 	break;
 	default:
 		printf("wrong choice");
 }
 }
 void sum(int x, int y)
 	{
	 printf ("%d+%d=%d",x,y,x+y);
 	}
  void mins(int x, int y){
 	 	printf ("%d-%d=%d",x,y,x-y);
 	 }
  void divide(int x, int y){
 printf ("%d/%d=%d",x,y,x/y);
 
 }
  void mult(int x, int y){
  	
 	printf ("%d*%d=%d",x,y,x*y);
 
 }
