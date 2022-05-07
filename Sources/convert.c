#include <math.h>

#include <stdio.h>

#include "C:\Users\Hieu_PC\code\Bainop\Headers\convert.h"

int DectoBi(int n){
    int i=0;
    int a[1000];
    int he2=0;
    int m=n;;
    while (n!=0){
        a[i]=n%2;
        n=n/2;
        i++;
    }
    for(int j=i-1; j>=0;j--){
        he2=he2+pow(a[j]*10,j);
    }
    printf("->%d chuyen sang Binary: ob%d",m,he2);
    return 0;
}

int DectoHex(int xyz)
{
		int bien_phu = 0;
		int phantu = 0;
		char mang[100];
		int a = xyz;
		while (a != 0)
		{
			int chuso = a % 16;
			if (chuso <= 9)
				mang[phantu++] = chuso+48;
			else if (chuso == 10)
				mang[phantu++] = 'A';
			else if (chuso == 11)
				mang[phantu++] = 'B';
			else if (chuso == 12)
				mang[phantu++] = 'C';
			else if (chuso == 13)
				mang[phantu++] = 'D';
			else if (chuso == 14)
				mang[phantu++] = 'E';
			else if (chuso == 15)
				mang[phantu++] = 'F';
			bien_phu++;
			a /= 16;
		}
		printf("->%d chuyen sang HEX: ox",xyz);
		for (int i = bien_phu - 1; i >= 0; i--)
		{
            printf("%c", mang[i]);
		}
        return 0;
	}