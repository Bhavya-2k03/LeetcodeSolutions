#include<iostream>
#include<vector>
#include<algorithm>
#include<unordered_map>
using namespace std;
class Solution {
public:
    int subarraySum(vector<int>& arr, int k) {        
        vector<int> prefix(arr.size());
        prefix[0] = arr[0];
 
        for(int i = 1; i < arr.size(); i++) prefix[i] = arr[i] + prefix[i - 1];

        unordered_map<int,int> mp; 
        int ans = 0;
        for(int i = 0; i < arr.size(); i++) 
        {
            if(prefix[i] == k)  ans++;
            if(mp.find(prefix[i] - k) != mp.end()) ans += mp[prefix[i] - k]; 
            mp[prefix[i]]++; 
        }
        
        return ans; 
    }
};
int main()
{
    









return 0;
}