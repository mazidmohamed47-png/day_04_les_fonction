#include <stdio.h>
#include <stdlib.h>
int maximum(int a, int b){
    int max;
if (a>b)
    max=a;
    else
    max=b;
    return max;
}
int main()
{
    int x,y;
    printf("veuillez enter la valeur de x : ");
    scanf("%d",&x);
    printf("veuillez enter la valeur de y : ");
    scanf("%d",&y);
    printf(" le maximum est %d ",maximum(x,y));
    return 0;
}
