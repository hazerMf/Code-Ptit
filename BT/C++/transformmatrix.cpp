#include<bits/stdc++.h>
using namespace std;
int main(){
    int runs;
    cin >> runs;
    while(runs--){
        int size;
        cin >> size;
        int matrix[size][size],sum[size];
        int sum1=0;
        for(int i=0;i<size;i++){
            for(int j=0;j<size;j++){
                cin >> matrix[i][j];
                sum1 += matrix[i][j];
            }
        }
        int max=0;
        for(int i=0;i<size;i++){
            sum[i]=0;
            for(int j=0;j<size;j++){
                sum[i]+=matrix[i][j];
            }
            if(sum[i]>max) max=sum[i];
        }
        for(int j=0;j<size;j++){
            sum[j]=0;
            for(int i=0;i<size;i++){
                sum[j]+=matrix[i][j];
            }
            if(sum[j]>max) max=sum[j];
        }
        max *= size;
        cout << max - sum1 << endl;
    }
}