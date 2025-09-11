#include <stdio.h>
#include <stdlib.h>

int minimum(int A,int B ){
int min ;
if (A<B)
    min=A;
    else
    min=B;
    return min ;
}
int main()
{
    int A,B;
    printf("veuillez entrer le nomber A : ");
    scanf("%d",&A);
    printf("veuillez entrer le nomber B : ");
    scanf("%d",&B);
    printf("le nomber minimum est : %d",minimum(A,B));

    return 0;
}
