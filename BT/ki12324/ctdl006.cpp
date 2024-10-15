#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    node *next;
};

node* createnode(int x){
    node *temp = new node;
    temp->data = x;
    temp->next = NULL;
    return temp;
}

node* addnode(node *l,int x){
    node *p = createnode(x);
    l->next = p;
    return p;
}

int main(){
    int len;
    cin >> len;
    len--;
    int f;
    cin >> f;
    node *p = createnode(f);
    node *l = p;
    while(len--){
        int a;
        cin >> a;
        l = addnode(l,a);
    }
    vector<int> ck;
    while(p!=NULL){
        int val = p->data;
        if(find(ck.begin(),ck.end(),val) == ck.end()){
            cout << val << " ";
            ck.push_back(val);
            p = p->next;
        }else{
            p = p->next;
        }
    }
}