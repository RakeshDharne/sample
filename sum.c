//We have populated the solutions for the 10 easiest problems for your support.
//Click on the SUBMIT button to make a submission to this problem.

#include <stdio.h>

int main(void)
{
   int t,dig,sum=0;
   int n;
   printf("enetr t");
   scanf("%d",&t);
   while(t--)
   {
      printf("enetr n=");
       scanf("%d",&n);
      //  while(n>0)
      //  {
      //     dig=n/10;
      //     sum=sum+dig;
      //     n=n%10;
            
      //  }
      for(;n>0;n%10)
      {
         dig=n/10;
         sum=sum+dig;

      }
       printf("\n%d",sum);
   }
	    
	    

	
	
	return 0;
}

