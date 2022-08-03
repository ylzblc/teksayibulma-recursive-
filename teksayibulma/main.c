#include <stdio.h>
#include <stdlib.h>

int teksayi(int dizi[], int i)
{
    if(i<0)
        return 0;

    else
    {
        if(dizi[i]%2==1)
            return 1+teksayi(dizi, i-1);
        else
            return teksayi(dizi, i-1);
    }
}

int main(void)
{
    int n;
    int dizi[10];

    printf("10 tane sayi giriniz:\n ");

    printf("1. sayi: ");
    scanf("%d", &dizi[0]);

    for(n=1; n<10; n++)
    {
        printf("%d. sayi: ", n+1);
        scanf("%d", &dizi[0]+n);
    }

    printf("%d tane tek sayi vardir.", teksayi(dizi, 10));
}
