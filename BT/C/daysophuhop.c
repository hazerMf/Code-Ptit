#include<stdio.h>

void nhap1(int n, int arr[]) {
	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}
}

void nhap2(int n, int a[], int b[]) {
	nhap1(n, a);
	nhap1(n, b);
}

void sapxep(int a[],int n) {
	int i,j,t;
	for(i = 0; i < n; i++) {
		for(j = i + 1; j < n; j++) {
			if(a[i] > a[j]) {
				t = a[i];
				a[i] = a[j];
				a[j] = t;
			}
		}
	}
}

int sosanh(int a[], int b[], int n) {
	for (int i = 0; i < n; i++) {
		if (a[i] > b [i]) {
			return 0;
		}
	}
	return 1;		
}

int main() {
	int n, a[100], b[100], runs;
	scanf("%d", &runs);
	while (runs--) {
		scanf("%d", &n);
		nhap2(n, a, b);
		sapxep(a, n);
		sapxep(b, n);
		if (sosanh(a, b, n)) {
			printf("YES\n");
		} else printf("NO\n");
		
	}
	return 0;
}