#include<stdio.h>
int main()
{
    int x,y;
    scanf("%d",&x);
    if(x>0&&x<=50){
        printf("W");
        for(y=1;y<=x;y++){
            printf("o");
        }
        printf("w");
    }
    return 0;
}
