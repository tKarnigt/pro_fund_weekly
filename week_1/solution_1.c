#include <stdio.h>
int main (){
    int a[4],count=0;
    scanf("%d%d%d%d",&a[0],&a[1],&a[2],&a[3]);
    for(int i=0;i<=3;i++){
        if(a[i]%2==0){
            count+=1;
        }
    }printf("%d",count);
    return 0;
}
