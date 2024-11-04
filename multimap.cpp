#include <bits/stdc++.h>
using namespace std;

int main(){
    multimap<string,int>m;

    m.emplace("tv",1);
    m.emplace("tv",1);
    m.emplace("tv",1);
    m.emplace("tv",1);

    m.erase(m.find("tv"));
    for(auto p:m){
        cout<<p.first<<" "<<p.second<<endl;
    }
}