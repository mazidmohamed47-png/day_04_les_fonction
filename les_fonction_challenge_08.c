#include <stdio.h>
#include <stdlib.h>
int est_pair(int nomber){
if (nomber%2==0)
    return 1;
else
    return 0;
}
int main()
{
    int n ;
    printf("veuiller entrer un nomber ");
    scanf("%d",&n);
if (est_pair(n))
     printf("le nombre %d est pair ",n);
else
    printf("le nombre %d est impair ",n);

    return 0;
}
