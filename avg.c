#include<stdio.h>
#include<math.h>
int main()
{
   int tel,hin,eng,mat,sci,soc,avg;
   scanf("%d%d%d%d%d%d",&tel,&hin,&eng,&mat,&sci,&soc);
   printf("the marks in tel = %d\n",tel);
   printf("the marks in hin = %d\n",hin);
   printf("the marks in eng = %d\n",eng);
   printf("the marks in mat = %d\n",mat);
   printf("the marks in sci = %d\n",sci);
   printf("the marks in soc = %d\n",soc);
   
   avg=(tel+hin+eng+mat+sci+soc)/6;
   
   printf("the  avg marks = %d\n",avg);
     
     if(avg>=300){
     printf("well done");
     }
     else{
     printf("work hard");
     }
    
 }   
