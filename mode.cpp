#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v={1,1,1,2,5,3,2,3,3,4};
    unordered_map<int,int>mp;
    int maxi = INT_MIN;
    int key = -1; 
    for(auto i:v)
    {
        mp[i]++;
    }
    for(auto j:mp)
    {
        if(j.second>maxi)
        {
            maxi = j.second;
            key=j.first;
        }
    }
    cout<<key;
}