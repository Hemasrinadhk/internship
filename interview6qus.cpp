#include<stdio.h>
int main(){
	int t;
	scanf("%d",&t);
	while(t!=0){
		int n,i,j,k,x=0,y=0;
		scanf("%d",&n);
		int a[n];
		for(i=0;i<n;i++){
			scanf("%d",&a[i]);
		}
		for(i=0;i<n;i++){
			int x=0,y=0;
			for(j=0;j<i;j++){
				x=x+a[j];
			}
			for(k=i+1;k<n;k++){
				y=y+a[k];
			}
		//	printf("%d %d %d",x,y,i);
		//	printf("\n");
			if(x==y){
				printf("%d %d",i,x);
			}
		}
		t--;
	}
}
