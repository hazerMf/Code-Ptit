#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
    for(int j=1;j<=n;j++){
		int a;
		scanf("%d",&a);
		printf("Test %d: ",j);
		for(int i=2;i<=a;i++){
			int dem=0;
			while(a%i==0) {
				dem++;
				a=a/i;
			}
		
			if(dem){	
				if(dem>=1)	printf("%d(%d)",i,dem);
				if(a>i)	printf(" ");
			}	
		}
		printf("\n");
	}
	return 0;
}