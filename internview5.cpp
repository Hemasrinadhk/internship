#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int a[n],count=0,i,a2[n],x=0,j,temp;
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(a[j]<a[i]){
				temp=a[j];
				a[j]=a[i];
				a[i]=temp;
			}
		}
	}
	for(i=0;i<n;i++){
	//printf("%d ",a[i]);
}
//printf("\n");

	a2[0]=1;
	for(i=0;i<n;i++){
		if(a[i+1]>a[i]){
			a2[i+1]=a[i+1];
		}
		else if(a[i+1]<a[i]){
			a2[i+1]=a2[i]-1;
		}
		else if(a[i+1]==a[i]){
			a2[i+1]=1;
		}
		//printf("%d ",a2[i]);
	}
for(i=0;i<n;i++){
x=x+a2[i];
}
printf("%d ",x);
}
