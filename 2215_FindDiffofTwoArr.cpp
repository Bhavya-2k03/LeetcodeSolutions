#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        vector<vector<int>> vec;
        unordered_map<int,int> m;
        vector<int> temp;
        for(int i:nums2)
        {
            m[i]++;
        }
        for(int i:nums1)
        {
            if(m.find(i)==m.end()) temp.push_back(i);
            else m[i]++; 
        }
        vec.push_back(temp);
        temp.clear();
        for(int i:nums2)
        if(m[i]==1) temp.push_back(i);
        vec.push_back(temp);
    }
};
int main()
{
    









return 0;
}