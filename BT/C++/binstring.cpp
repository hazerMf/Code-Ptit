#include<iostream>
using namespace std;
int x[11],n,m,OK=1;
void init(void){
	n = 2;
	cin>>n;
	for(int i=0;i<n;i++){
		x[i]=0;
	}
}
void Result(void){
	for(int i=0;i<n;i++){
		if(x[i]==0) cout<<"0";
        else cout << "1";
	}
	cout<<'\n';
}
void next(void){
 	int i=n-1;
	while(i>=0 && x[i]){
 		x[i]=0;
 		i--;
	}
	if(i>=0) x[i]=1;
	else OK=0;
}

int main(){
	int runs;
	cin >> runs;
	while(runs--){
		init();
		while(OK){
			Result();
			next();
		}
	}
}