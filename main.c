#include <stdio.h>
#include <stdlib.h>
int main(){
   int a,b;
   int count=0;
   int remainder1,remainder2;
   scanf("%d %d",&a,&b);
   while(a!=0 || b!=0)
   {
     while(a>0||b>0)
     {
       remainder1=a%10;
       remainder2=b%10;
       a=a/10;
       b=b/10;
       if(remainder1+remainder2>9)
       {  
         count++;
         a=a+1;    
       }  
     }  
     if(count==1)
     {
       printf("%d carry operation.\n",count);
     }
     else if(count>1)
     {
       printf("%d carry operations.\n",count);
     }
     else
     {
       printf("No carry operation.\n");
     }
        
   scanf("%d %d",&a,&b);
   count=0;
   }

return 0;
}





