#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {1, 2, 3, 4, 5};

    cout << "---------------------------reverse---------------------------" << endl;
    // reverse
    reverse(v.begin(), v.end());
    for (int val : v)
    {
        cout << val << " ";
    }
    cout << endl;

    cout << "---------------------------next permutation and previous permutation---------------------------" << endl;
    // next_permutation

    string s = "abc";

    next_permutation(s.begin(), s.end());
    cout << "next permutation:" << s << endl;

    string s2 = "acb";
    prev_permutation(s2.begin(), s2.end());

    cout << "previous permutation:" << s2 << endl;

    cout << "---------------------------max and min in array---------------------------" << endl;

    cout<<"max:"<<*(max_element(v.begin(),v.end()))<<endl;
    cout<<"min:"<<*(min_element(v.begin(),v.end()))<<endl;

    cout << "---------------------------binary search---------------------------" << endl;
    vector<int>v2={1,2,3,4,5};
    cout<<binary_search(v2.begin(),v2.end(),4)<<endl;

    cout << "---------------------------count bits functions---------------------------" << endl;
    int n=15;
    long long n2=83748;
    long long n3=928492894979;
    cout<<"first:"<<__builtin_popcount(n)<<endl;
    cout<<"second:"<<__builtin_popcountl(n2)<<endl;
    cout<<"third:"<<__builtin_popcountll(n3)<<endl;

}