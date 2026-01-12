#include <stdio.h>
int main(){
	
	int r,c,i,j,min,n;
	scanf("%d %d",&r,&c);
	int arr[r][c];
	
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			scanf("%d",&n);
			arr[i][j]= n+1;
		}
	}printf("\n");
	
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			if(arr[i][j]<arr[i][j+1]){
				min = arr[i][j];
			}else{
				min = arr[i][j+1];
			}
		}
	}
	
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			printf("%d ",arr[i][j]);
		}printf("\n");
	}printf("\n");
	
	printf("min: %d",min);
	
}
