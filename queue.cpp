#include <bits/stdc++.h>
using namespace std;

int main(){
    queue<int>q;

    //push operation
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);

    while(!q.empty()){
        cout<<q.front()<<" ";  //front prints first element
        q.pop();               //pop the element
    }

    //other functions are same as stacks
}