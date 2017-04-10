#include <stdio.h>
int main()
{
    char pnot[5]={'e','r','r','o','r'};
    int i;
    scanf("%d",&i);
    if(i==1){
    for(i=1;i<=100;i++)
        printf("%d\n",i);
    }
    else if(i==0){
    for(i=100;i>=1;i--)
        printf("%d\n",i);
    }
    else{
      printf("%s",pnot);
    }
    return 0;
}
