#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> vec;
    vec.push_back(1); // push_back
    vec.push_back(2);
    vec.push_back(3);
    vec.emplace_back(4);                           // emplace()
    vec.pop_back();                                // pop_back()
    cout << "size:" << vec.size() << endl;         // size()
    cout << "capacity:" << vec.capacity() << endl; // capacity()
    // print vector
    vec.erase(vec.begin()); // erase()
    vec.insert(vec.begin() + 2, 100);
    for (int val : vec)
    {
        cout << val << " ";
    }
    cout << endl;
    // access value
    cout << "value at index 2 " << vec[2] << " or " << vec.at(2) << endl;

    cout << "front:" << vec.front() << endl;
    cout << "back:" << vec.back() << endl;

    cout << "------------------new vector------------------" << endl;

    // different types to initialize vectors
    vector<int> v1{1, 2};
    vector<int> v2(3, 10);
    vector<int> v3(v1);
    cout << "v1:";
    for (int i = 0; i < v1.size(); i++)
    {
        cout << v1[i] << " ";
    }
    cout << endl;
    cout << "v2:";
    for (int i = 0; i < v1.size(); i++)
    {
        cout << v2[i] << " ";
    }
    cout << endl;
    cout << "v3:";
    for (int i = 0; i < v1.size(); i++)
    {
        cout << v3[i] << " ";
    }
    cout << endl;
    // clear()
    v1.clear();
    cout << "v1 size after clearing:" << v1.size() << endl;
    cout << "v1 is empty or not:" << v1.empty();
    cout << endl;

    cout << "------------------new vector------------------" << endl;

    // iterators in vector(.begin(),.end())

    vector<int> vec2 = {1, 2, 3, 4, 5};
    vector<int>::iterator it;

    for (it = vec2.begin(); it != vec2.end(); it++)
    {
        cout << *(it) << " ";
    }
    cout << endl;
    // print in reverse
    vector<int> vec3 = {1, 2, 3, 4, 5};
    for (auto it2 = vec3.rbegin(); it2 != vec3.rend(); it2++)
    {
        cout << *(it) << " ";
    }
    return 0;
}