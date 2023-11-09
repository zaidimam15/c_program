

#include<stdio.h>
#include<conio.h>
void main ()
{
    int physics,chemistry,math,bio,computer;
    float percentage;
    printf ("enter 5 subject marks:");
    scanf ("%d%d%d%d%d",&physics,&chemistry,&math,&bio,&computer);
    percentage =(physics+chemistry+math+bio+computer)/5.0;
    printf ("percentage = % .2f\n",percentage);
    if (percentage>=90)
    {
        printf ("grade a");
    }
    else if (percentage>=80)
    {
        printf ("grade b");
    }
    else if (percentage>=70)
    {
        printf ("gradec");
    }
    else if (percentage>=60)
    {
        printf ("graded");
    }
    getch ();
}
