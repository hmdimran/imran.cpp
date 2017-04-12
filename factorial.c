#include<stdio.h>
long int factorial(int n){
    int i;
    long int result=1;
    if(n>1){
        for(i=2;i<=n;i++)
            result=result*i;
    }
    return result;
}
int main(void)
{
    int sum;
    printf("please input.....");
    scanf("%d",&sum);
    printf("input number factorial is:%ld",factorial(sum));
    return 0;
}
