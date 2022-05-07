#include <stdio.h>

#include "C:\Users\Hieu_PC\code\Bainop\Headers\nhap.h"

int nhapmang(int a[], int n){
    for(short i=0;i<n;i++){
        printf(">>nhap phan tu thu %d: ", i+1);  
        scanf("%d",&a[i]);
    }
    return 0;
}

int xuatmang(int a[], int n){
    printf("->xuat mang: ");
    for(short i=0;i<n;i++) printf("%d ", a[i]);
    return 0;
}

int tongmang(int a[], int n){
    int tong=0;
    for(short i=0;i<n;i++) tong=tong+a[i];
    printf("\n->Tong mang= %d\n",tong);
    return 0;
}

int findmax(int a[], int n){
    
    int max=a[0];
    for(short i=1;i<n;i++){
        if (max<a[i]) max=a[i];
    }
    printf("->So lon nhat la: %d\n",max);
    return 0;
}

int findmin(int a[], int n){
    
    int min=a[0];
    for(short i=1;i<n;i++){
        if (min>a[i]) min=a[i];
    }
    printf("->So nho nhat la: %d",min);
    return 0;
}

int findpos(int a[], int b[], int n,int y){
    short j=0;
    for(short i=0;i<n;i++){
        if (y==a[i]){
            j=j+1;
            b[j]=i+1;
        }
    }
    if (j!=0){
        for(short z=1;z<=j;z++){
          printf("->vi tri thu %d cua x: %d\n",z,b[z]);
        }
    }
    else{
         printf("->Khong co x"); 
    }
    return 0;
}