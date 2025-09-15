#include <stdio.h>
#include <stdlib.h>

void inverser_chaine(char str[]) {
    int debut=0;
    int fin=strlen(str)-1;

    if (str[fin]=='\n') {
        str[fin]='\0';
        fin--;
    }

    while (debut<fin) {
        char temp=str[debut];
        str[debut]=str[fin];
        str[fin]=temp;
        debut++;
        fin--;
    }
}

int main() {
    char str[100];

    printf("Veuillez entrer un mot: ");
    fgets(str, sizeof(str), stdin);

    inverser_chaine(str);

    printf("Le mot inverse est: %s\n", str);
    return 0;
}
