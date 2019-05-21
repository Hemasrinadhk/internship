#include<stdio.h>
int main(){
    int n,m,t,i,j=0,count;
    scanf("%d%d%d",&n,&m,&t);
    int a[m],a2[m];
    for(i=n;i<=m;i++){
        count=0;
        a[i]=i;
        while(n!=0){
            n=a[i];
            count++;
            n=n/10;
        }
        printf("%d ",count);
        a2[i]=(((a[i]%10)*(10)^(count-1)+10)-(10-(a[i]/10)));
    } 
     for(i=n;i<=m;i++){
      //printf("%d ",a2[i]);
     }
}
