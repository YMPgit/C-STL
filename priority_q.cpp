#include <bits/stdc++.h>
using namespace std;

int main(){
    priority_queue<int>pq;

    //push() operations
    pq.push(1);
    pq.push(2);
    pq.push(3);
    pq.push(4);
    pq.push(5);

    while(!pq.empty()){
        cout<<pq.top()<<" ";
        pq.pop();
    }

    cout<<endl;
    //in increasing order printing
    priority_queue<int,vector<int>,greater<int>>pq2;

    pq2.push(5);
    pq2.push(3);
    pq2.push(10);
    pq2.push(2);

    while(!pq2.empty()){
        cout<<pq2.top()<<" ";
        pq2.pop();
    }
    
}