#include<stdio.h>
#include<math.h>
int main()
{
   int tel,hin,eng,mat,sci,soc,avg;
   scanf("%d%d%d%d%d%d",&tel,&hin,&eng,&mat,&sci,&soc);
   scanf("enter your marks in tel=%d\n",&tel);
   scanf("enter your marks in hin=%d\n",&hin);
   scanf("enter your marks in eng=%d\n",&eng);
   scanf("enter your marks in mat=%d\n",&mat);
   scanf("enter your marks in sci=%d\n",&sci);
   scanf("enter your marks in soc=%d\n",&soc);
   
   printf("the marks in tel = %d\n",tel);
   printf("the marks in hin = %d\n",hin);
   printf("the marks in eng = %d\n",eng);
   printf("the marks in mat = %d\n",mat);
   printf("the marks in sci = %d\n",sci);
   printf("the marks in soc = %d\n",soc);
   
   avg=(tel+hin+eng+mat+sci+soc)/6;
   
   printf("the  avg marks = %d\n",avg);
     
     
    if(avg>=90){
    printf("you got A grade\n");
    }
    else if(avg>=80&&avg<90){
    printf("you got B grade\n");
    }
    else if(avg>=70&&avg<80){
    printf("you got C grade\n");
    }
    else if(avg>=60&&avg<70){
    printf("you got D grade\n");
    }
    else if(avg>=50&&avg<60){
    printf("you got E grade\n");
    }
    else if(avg<=90){
    printf("you are fail\n");
    }
     if(avg>=50){
     printf("well done");
     }
     else{
     printf("work hard");
     }
    
 }   
