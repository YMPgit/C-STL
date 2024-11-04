#include <bits/stdc++.h>
using namespace std;

int main(){
    set<int>s;

    s.insert(1);   //insert operation
    s.insert(2);
    s.insert(3);
    s.insert(5);
    s.insert(6);

    for(int val:s){
        cout<<val<<" ";
    }
    cout<<endl;

    //lower_bound: gives if the element exist, or gives the exactly greater value than input otherwise give 0

    cout<<"lower bound:"<<*(s.lower_bound(4))<<endl;

    //upper_bound: gives the value greater than key

    cout<<"upper bound:"<<*(s.upper_bound(5))<<endl;

    cout<<"-----------------------unordered set-----------------------"<<endl;

    //data will print in any order
    unordered_set<int>s2;

    s2.insert(1);
    s2.insert(2);
    s2.insert(3);

    for(int val:s2){
        cout<<val<<" ";
    }
    cout<<endl;
    cout<<"-----------------------Multiset-----------------------"<<endl;

    //duplicated data allowed

    multiset<int>ms;

    ms.insert(1);
    ms.insert(1);
    ms.insert(1);
    ms.insert(1);
    ms.insert(1);

    for(int val:ms){
        cout<<val<<" ";
    }

}