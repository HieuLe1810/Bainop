#include<stdio.h>
#include <string.h>

int mangten(char ten[]){
    int x,i;
    x=strlen(ten);
    char mang[x];
    for (i=0; i<=x; i++){
        mang[i]=ten[i];
    }
    printf("mang duoc khoi tao co so ky tu: %d\nmang duoc khoi tao co noi dung: %s",x-1,mang);
    return 0;
}

int main(){
    char name[20];
    printf("Nhap ten: ");
    fgets(name,20,stdin);
    mangten(name);
    return 0;
}