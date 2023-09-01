#include <stdio.h>
#include <stdlib.h>

void baklava_ust(int satirsayi)
{
    int bosluk, i,j;
    bosluk = satirsayi-1;


    for(i=1;i<=satirsayi;i++)
    {
        for(j=1;j<=bosluk;j++)
        {
            printf(" ");
        }
        bosluk--;
        for(j=1;j<=2*i-1;j++)
        {
            printf("*");
        }
        printf("\n");
    }
}

void baklava_alt(int satirss)
{
    int i,j,bosluk;
    bosluk=1;
    for(i=1;i<=satirss-1;i++)
    {
        for(j=1;j<=bosluk;j++)
        {
            printf(" ");
        }
        bosluk++;
        for(j=1;j<=2*(satirss-i)-1;j++)
        {
            printf("+");
        }
        printf("\n");
    }


}


int main()
{
    system("color 03");
    int satir;
    printf("Lutfen satir sayisi giriniz.\n");
    scanf("%d",&satir);
    baklava_ust(satir);
    baklava_alt(satir);
    return 0;

}
