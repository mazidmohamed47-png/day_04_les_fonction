#include <stdio.h>
#include <stdlib.h>
long  fibonacci (long N){
if (N==0||N==1)
    return N;
else
    fibonacci(N-1)+fibonacci(N-2);
 return fibonacci(N-1)+fibonacci(N-2);
}

int main()
{
    int i;
    long n;
    printf("veuillez entrer une nomber : ");
    scanf("%d",&n);
    printf("=======le terme de fibonacci=====\n");
    printf("F(%d)=%ld\n",n,fibonacci(n));
    return 0;
}
