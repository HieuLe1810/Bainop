#include <stdio.h>

#include "C:\Users\Hieu_PC\code\Bainop\Headers\m_string.h"

int ssmang(int a[],int b[],int n)
{
for (int i = 0;i < n; i++ ){
if(a[i] == b[i]){
if(i == n-1){
printf("\n->TRUE");
}
}
else{
printf("\n->FALSE");
break;
}
}
return 0;
}

int chen(int c[],int m,int d[],int l,int h) {
    int k=m+l;
    int temp=0,g=0;
    int p[k];
    for (int i=0;i<k;i++){
        if ((i<h-1)||(i>=h-1+l)){
            p[i]=c[temp];
            temp++;
        }
        else{
            p[i]=d[g];
            g++;
        }

    }
    printf("->Ketqua ");
    for (int i=0;i<k;i++){
        printf("%d ",p[i]);
    }
    return 0;
}