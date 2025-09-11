#include <stdio.h>
#include <stdlib.h>

int additionne(int a,int b){
return a+b;
}
int main()
{
    int x,y;
    printf("veuillez entrer la valeur de x : ");
    scanf("%d",&x);
    printf("veuillez entrer la valeur de y : ");
    scanf("%d",&y);
    printf("l additione est : %d ",additionne(x,y));

    return 0;
}
