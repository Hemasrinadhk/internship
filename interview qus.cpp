#include<stdio.h>
int main(){
	int t,i,n,j,x;
	char s[10];
	scanf("%d",&t);
	for(i=0;i<t;i++){
		int ai[10000000];
		scanf("%d",&n);
		for(j=0;j<100;j++){
			x=n%10;
			ai[x]=1;
			n=n/10;
		}
	}
	for(i=0;i<t;i++){
		int ai[10000000];
		for(j=0;j<100;j++){
		printf("%d",ai[j]);
		}
	}
}
