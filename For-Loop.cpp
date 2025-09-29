#include <stdio.h>
int main()
{
    int A;
    printf("Enter A Number : ");
    scanf("%d",&A);
    
    for(int i=1 ; i<=10 ; i++)
    {
      printf("%d   x   %d  =  %d\n" , i , A , i*A);
    }
    
    
}

