#include <bits/stdc++.h>
using namespace std;

int main(){
    map<string,int>m;

    m["tv"]=1;
    m["Fridge"]=2;
    m["headphones"]=3;
    m["laptop"]=4;

    m.insert({"speaker",5});
    
    for(auto p:m){
        cout<<p.first<<" "<<p.second<<endl;
    }

    m.erase("tv");

    if(m.find("tv") != m.end()){
        cout<<"Found"<<endl;
    }
    else{
        cout<<"Not Found"<<endl;
    }
    
}