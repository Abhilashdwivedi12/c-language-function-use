#include <stdio.h>
void sum();
void mins();
void divide();
void mult();
 
 int main ()
 {
 	int c;
 	printf("your options are -\n 1.add\n 2.sub\n 3.mult\n 4.divide\n");
 	printf("select your option");
 	scanf("%d",&c);
 	switch(c){
	 
 	case 1:
 	sum();
 	break;
	case 2:
 	mins();
 	break;
 	case 3:
 	divide();
 	break;
 	case 4:
 	mult();
 	break;
 	default:
 		printf("wrong choice");
 }
 }
 void sum(){
 	int a,b;
 	printf ("input first number a");
 	scanf("%d",&a);
 	printf ("input second number b");
 	scanf("%d",&b);
 	printf ("%d+%d=%d",a,b,a+b);
 
 }
  void mins(){
 	int a,b;
 	printf ("input first number a");
 	scanf("%d",&a);
 	printf ("input second number b");
 	scanf("%d",&b);
 	printf ("%d-%d=%d",a,b,a-b);
 
 }
  void divide(){
 	int a,b;
 	printf ("input first number a");
 	scanf("%d",&a);
 	printf ("input second number b");
 	scanf("%d",&b);
 printf ("%d/%d=%d",a,b,a/b);
 
 }
  void mult(){
 	int a,b;
 	printf ("input first number a");
 	scanf("%d",&a);
 	printf ("input second number b");
 	scanf("%d",&b);
 	printf ("%d*%d=%d",a,b,a*b);
 
 }
