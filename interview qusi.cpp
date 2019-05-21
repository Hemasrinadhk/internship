#include<stdio.h>
int main(){
	int n,r,count=1,i,x;
	scanf("%d%d",&n,&r);
	int a[n];
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	x=a[0];
	for(i=1;i<n;i++){
	
		if(x>r){
			x=a[i+1];
		}
		else{
			x=x+a[i];
			count=count+1;
		}
			printf("%d ",x);
			
		printf("%d ",count);
			printf("\n");
	}
//	printf("%d",count+1);
}
