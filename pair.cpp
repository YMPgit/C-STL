#include <bits/stdc++.h>
using namespace std;

int main(){
    pair<int,int>p={1,5};
    cout<<p.first<<endl;
    cout<<p.second<<endl;

    //nested pairs
    pair<int,pair<char,int>>p2={1,{'a',3}};
    cout<<p2.first<<endl;
    cout<<p2.second.first<<" "<<p2.second.second<<endl;


    //vector of pairs

    vector<pair<int,int>>v={{1,2},{3,4},{5,6}};

    //push in vector of pairs
    v.push_back({7,8});

    for(pair<int,int>p3:v){
        cout<<p3.first<<" "<<p3.second<<endl;
    }
    return 0;
}