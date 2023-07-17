#include<stdio.h>
int main()
{
    int num,i;
    int a[32];

    printf("Enter a Decimal number=");
    scanf("%d",&num);

    // Hexa-Decimal Number
    printf("\n Hexa-Decimal number=%x \n",num);
    printf("\nOctal=%o \n",num);

    for(i=0;num>0; i++)
    {
        a[i]=num%2;
        num=num/2;
    }

    //Binary Number Convert
    printf("\nBinary of Given Number is=");
    for(i=i-1; i>=0; i--)
    {
        printf("%d",a[i]);
    }
    printf("\n");
    return 0;
    grtch();
}

