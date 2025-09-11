#include <stdio.h>
#include <stdlib.h>
int produit(int x, int y){
int p;
p=x*y;
return p;
}
int main()
{
    int a,b;
    printf("veuillez entrer la valeure de a : ");
    scanf("%d",&a);
    printf("veuillez entrer la valeure de b : ");
    scanf("%d",&b);
    printf("la multiplication de %d x %d = %d",a,b,produit(a,b));
    return 0;
}
