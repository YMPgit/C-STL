#include <bits/stdc++.h>
using namespace std;

int main(){
    cout<<"---------------------sort arrays---------------------"<<endl;
    int n=5;
    int a[n]={3,4,1,5,6};

    //sort arrays
    sort(a,a+n);

    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;

    cout<<"---------------------sort vectors---------------------"<<endl;

    vector<int>v={3,4,1,5,6};

    sort(v.begin(),v.end());

    for(int val:v){
        cout<<val<<" ";
    }
    cout<<endl;

    cout<<"---------------------sort in descending---------------------"<<endl;

    vector<int>v2={3,4,1,5,6};

    sort(v2.begin(),v2.end(),greater<int>());

    for(int val:v2){
        cout<<val<<" ";
    }
    cout<<endl;

    cout<<"---------------------sort vector of pairs---------------------"<<endl;

    vector<pair<int,int>>p={{3,1},{2,1},{7,1},{5,2}};

    sort(p.begin(),p.end());

    for(auto pr:p){
        cout<<pr.first<<" "<<pr.second<<endl;
    }
    cout<<endl;

    
}