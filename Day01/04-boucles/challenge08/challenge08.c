#include <stdio.h>

int main()
{
    int n;
    int i = 0;
    int a = 0, b = 1, next;

    printf("Entrez le nombre de termes: ");
    scanf("%d", &n);

    while (i < n)
    {
        printf("%d ", a); 
        next = a + b;  
        a = b;             
        b = next;           
        i++;
    }

    return 0;
}

