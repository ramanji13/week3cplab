#include<stdio.h>
#include<math.h>
int main()
{
   int P,r,t;
   float CI,A;
   printf("enter the initial amount\n");
   scanf("%d",&P);
   printf("\nrate of intrest\n");
   scanf("%d",&r);
   printf("\nnumber of years\n");
   scanf("%d",&t);
   A=P*((pow((1+r/100.0),t)));
   printf("the final amount is =%.2f\n",A);
   CI=A-P;
   printf("the compound intrest is =%.2f\n",CI);
}
