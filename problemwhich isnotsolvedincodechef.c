#include <stdio.h>

int main(void) {
	// your code goes here
	int t,i,j,x;

	int flg=0;
	char s[50],p[50],q[50];
	scanf("%d",&t);
	while(t--)
	{
	    scanf("%d",&x);
	    for(i=0;i<x;i++)
	    {
	        scanf("%c",s[i]);

	    }
        s[i]='\0';

	    for(i=0,j=x/2;i<x/2,j<x;i++,j++)
	    {
	        p[i]=s[i];
	        q[j]=s[j];
            if(p[i]==q[j])
               flg=1;
	    }
            
	    if(flg==1)
	       printf("\nYES");
	    else
	       printf("\nNO");
	}
	return 0;
}
	          
	    
	
	
	

