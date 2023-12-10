#include<stdio.h>
int main()
{
    int b[100],i,j,n;
    printf("decimal number :");
    scanf("%d",&n);
    printf("octal number  :%o\n",n);
    printf("hexe d number :%x\n",n);

    i=0;
    while(n>0) {
        b[i]=n%2;
        n=n/2;
        i++;
    }
    printf("binary number :");
    for(j=i-1; j>=0; j--) 
    {
        printf("%d",b[j]);
    }

}
