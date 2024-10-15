#include <stdio.h>
#include <math.h>

int main(){
	int n,m=3,dem0=0;
	scanf("%d",&n);
	int a[n][m];
	for (int i=0;i<n;i++){
		for(int j=0;j<3;j++){
			scanf("%d", &a[i][j]);
		}
	}
	for (int i=0;i<n;i++){
			int dem1=0;
		for(int j=0;j<3;j++){
		
			if(a[i][j]==1){
				dem1++;
			}
		}
		if(dem1>=2) dem0++;
	}
	printf("%d", dem0);
}