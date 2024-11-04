#include<bits/stdc++.h>
using namespace std;

int main(){
    list<int>l;

    l.push_back(1);    //push_back() or emplace_back()
    l.push_back(2);
    l.push_front(3);
    l.push_front(5);

    l.pop_back();
    l.pop_front();

    //print

    for(int val:l){
        cout<<val<<" ";
    }
    cout<<endl;
    //initialize list
    list<int>l2={1,2,3,4,5};
    for(int num:l2){
        cout<<num<<" ";
    }
}