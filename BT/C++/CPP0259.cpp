#include <stdio.h>
#include <math.h>

int main(){
	int n,m,p;
	scanf("%d%d %d",&n,&m,&p);
	int a[n][m];
	int b[m][p];
	int c[n][p];
	for (int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			scanf("%d", &a[i][j]);
		}
	}
	for (int i=0;i<m;i++){
		for(int j=0;j<p;j++){
			scanf("%d", &b[i][j]);
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<p;j++){
			int tt=0;
			for(int k=0;k<m;k++){
				tt=tt+(a[i][k] * b[k][j]);
			}
			c[i][j]=tt;
		}
	}
		for (int i=0;i<n;i++){
		for(int j=0;j<p;j++){
			printf("%d ", c[i][j]);
		}
		printf("\n");
	}
}