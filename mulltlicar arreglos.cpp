#include <stdio.h>
 
int main()
{
    int v[] = {20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30};
    int numero;
 
    printf("\nNumero: "); scanf("%d", &numero);
 
    for (int i = 0; i < 11; i++)
        v[i] *= numero;
 
    for (int i = 0; i < 11; i++)
        printf("%d ", v[i]);
 
    printf("\n");
 
    return 0;
}
