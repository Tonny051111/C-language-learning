#include <stdio.h> 
int main() 
{  
    int  i,j, t; 
    for(i=1;i<=1000;i++) 
    {   
        t=0; 
        for(j=1;j<i;j++) 
        /************found************/ 
            if(i%j==0) t+=j; 
        /************found************/ 
        if(t==i)   
        {   
            printf("\n%d is a full number\n",i); 
            printf("factors of %d are:\t",i); 
            /************found************/ 
            for(j=1;j<i;j++)
                if(i%j==0) printf("%d ",j); 
        } 
    } 
    printf("\n"); 
    return 0; 
}