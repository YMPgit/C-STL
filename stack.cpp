#include <bits/stdc++.h>
using namespace std;

int main(){
    stack<int>s;

    //push() operation
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);

    //swap operation-swaps two stacks
    stack<int>s2;

    s2.swap(s);

    while(!s2.empty()){          //empty shows stack is empty or not
        cout<<s2.top()<<" " ;    //top() gives top element of stack
        s2.pop();                //deletes element in stack
    }
    cout<<endl;

    cout<<"Size:"<<s.size()<<endl;
    //traversing stack

    while(!s.empty()){          //empty shows stack is empty or not
        cout<<s.top()<<" " ;    //top() gives top element of stack
        s.pop();                //deletes element in stack
    }
    cout<<endl;
}