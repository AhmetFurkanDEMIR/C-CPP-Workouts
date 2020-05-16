#include <stdio.h>
int main()
{
    int i, bosluk, satir, k=0;

    printf("Satýr sayýsýný girin: ");
    scanf("%d",&satir);

    for(i=1; i<=satir; ++i, k=0)
    {
        for(bosluk=1; bosluk<=satir-i; ++bosluk)
        {
            printf("  ");
        }

        while(k != 2*i-1)
        {
            printf("* ");
            ++k;
        }

        printf("\n");
    }
    
    return 0;
}
