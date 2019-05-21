#include<stdio.h>
int main(){
	int t,count=0,i,j,temp;
	scanf("%d",&t);
	int n;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++){
			scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++){
	
		for(j=i+1;j<n;j++){
			if(a[j]<a[i]){
				count =count+1;
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	printf("%d",count);
	
	
	
}
