#include <stdio.h>
#include <math.h>

int main(void)
{
    int ab, bc, ac;

    printf("Quelle est la longueur de AB? ");
    scanf("%i", &ab);
    printf("Quelle est la longueur de BC? ");
    scanf("%i", &bc);

    // √(AB² + BC²)
    ac = sqrt((ab*ab)+(bc*bc));

    printf("La longueur de l'hypoténuse est de %i cm.\n", ac);//credit A alexandre pour m'avoir montré comment faire.
}
