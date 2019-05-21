#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

 int main(){
        int t,i,j;
        scanf("%d",&t);
       // printf("%d ",t);
        while(t>0){
            // printf("%d",i);
             //printf(" \n");
            int n,count=0;
            scanf("%d",&n);
            // printf("%d",n);
            //int a[n],a2[n];
            char s[n],s2[n];
              scanf("%s",s);
            //puts(s);
            //for(i=0;i<n;i++){
                //scanf("%c",&s[i]);
                //printf("%c ",s);
                //a[i]=s[i];
                //printf("%d ",a[i]);
           // }
            //printf("\n");
             scanf("%s",s2);
             //puts(s2);
            //for(j=0;j<n;j++){
                //scanf("%c",&s2[j]);
                //a2[j]=s2[j];
                //scanf("%d",&a2[j]);
                //printf("%c ",s2);
            //}
            for(i=0;i<n;i++){
            	for(j=0;j<n;j++){
            		if(s[i]==s2[j]){
            			count=count+1;
            			s2[j]==0;
            			break;
					}
				}
			}
			 printf("%d",count);
            printf(" \n");
            t--;
        }
        
    }
