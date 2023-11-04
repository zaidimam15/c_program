#include<stdio.h>
#include<conio.h>
void main ()
{
 int number1,number2;
 printf ("enter first number");
 scanf ("%d",&number1);
 printf ("enter second number");
 scanf ("%d",&number2);

 printf ("\nfirst number = %d second number = %d\n",number1,number2);
 //swapping start from here
 int ims;
 ims = number1;
 number1 = number2;
 number2 = ims;


  printf ("\nfirst number = %d second number = %d\n",number1,number2);
  getch ();
}