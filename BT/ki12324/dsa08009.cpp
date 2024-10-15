#include<bits/stdc++.h>
using namespace std;

long long solve(long long s,long long t){
	queue<pair<long long,long long>> q; 
	set<long long> se;
	q.push({s,0}); se.insert(s);
	while(!q.empty()){
		pair<long long,long long> top = q.front(); q.pop();
		if(top.first == t) return top.second;
		if(top.first * 2 == t || top.first - 1 == t) return top.second + 1; 
		if(!se.count(top.first*2) && top.first < t){
			q.push({top.first*2,top.second + 1}); 
			se.insert(top.first*2); 
		}
		if(!se.count(top.first - 1) && top.first > 1){
			q.push({top.first-1,top.second + 1});
			se.insert(top.first - 1);  
		}
	}
}

int main(){
	int t; cin >> t;
	while(t--){
		long long s,t; cin >> s >> t;
		cout << solve(s,t) << "\n"; 
	}
}