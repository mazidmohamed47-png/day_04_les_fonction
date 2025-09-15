#include <stdio.h>
#include <stdlib.h>

long factorielle( int N){
    int F,i;
if (N==0 || N==1)
    F=1;

else{
    F=1;
    for (i=2;i<=N;i++)
    F*=i;
    }
    return F;
}

int main()
{
    long fact;
    int n;
    printf("veuillez entrer le nombrer qui calcule la factorielle : ");
    scanf("%d",&n);

    fact=factorielle(n);
    printf("la factorielle : %d!=%ld",n,fact);

    return 0;
}
