// Online C compiler to run C program online
#include <stdio.h>
#include<math.h>
#include<ctype.h>
#include<string.h>


int main()
{
    int a,b;
    printf("enter the value of a\n");
    scanf("%d\n",&a);
    for(b=0;b<=a;b++){
        if (b%2==1){
            printf("%d is a odd number\n",b);
            continue;
        
        }
    }
}
