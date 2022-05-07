#include <stdio.h>
#include <math.h>

#include "C:\Users\Hieu_PC\code\Bainop\Headers\nhap.h" 

#include "C:\Users\Hieu_PC\code\Bainop\Headers\convert.h"

#include "C:\Users\Hieu_PC\code\Bainop\Headers\m_string.h"


int main(){  
    int n,x,xy,xyz,m,l,h;
    int Mang1[10] = {0,0,1,2,3,4,5,6,7,8};
    int Mang2[10] = {0,0,1,2,3,4,5,6,7,8};
    printf(">>nhap so phan tu:");
    scanf("%d",&n);
    int a[n],b[n];
    nhapmang(a,n);
    xuatmang(a,n);
    tongmang(a,n);
    findmax(a,n);
    findmin(a,n);
    printf("\n>>nhap so can tim vi tri:");
    scanf("%d",&x);
    findpos(a,b,n,x);
    printf(">>nhap so can doi sang Bin:");
    scanf("%d",&xy);
    DectoBi(xy);
    printf("\n>>Nhap so can doi sang Hex: ");
	scanf("%d", &xyz);
	DectoHex(xyz);
    printf("\n>>Xuat 2 mang can so sanh:\n");
    xuatmang(Mang1,10);
    printf("\n");
    xuatmang(Mang2,10);
    ssmang(Mang1,Mang2,n);
    printf("\n>>nhap mang can duoc chen:");
    printf("\n>>nhap so phan tu:");
    scanf("%d",&m);
    int c[m];
    nhapmang(c,m);
    xuatmang(c,m);
    printf("\n>>nhap mang can chen:");
    printf("\n>>nhap so phan tu:");
    scanf("%d",&l);
    int d[l];
    nhapmang(d,l);
    xuatmang(d,l);
    printf("\n>>nhap vi tri muon chen:");
    scanf("%d",&h);
    chen(c,m,d,l,h);
    return 0;
}