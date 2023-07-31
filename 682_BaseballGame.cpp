#include<iostream>
#include<vector>
#include<string>
using namespace std;
class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int> vec;
        for(auto i:operations)
        {
            if(i=="+") vec.push_back(vec[vec.size()-1]+vec[vec.size()-2]);
            else if(i=="D") vec.push_back(2*vec[vec.size()-1]);
            else if(i=="C") vec.erase(vec.end()-1); 
            else vec.push_back(stoi(i));
        }
        int sum=0;
        for(auto i:vec) sum+=i;
        return sum;
    }
};
int main()
{
    









return 0;
}