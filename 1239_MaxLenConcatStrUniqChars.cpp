#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Solution {
public:
    int maxlength=0;
    bool check(string s, string t, vector<int> &vec)
    {
        // string temp =s+t;
        // sort(temp.begin(),temp.end());
        // for (int i = 1; i < temp.length(); i++)
        // {
        //     if(temp[i]==temp[i-1]) return false;
        // }
        // return true;
        for (auto i:t)
        {
            if(vec[i]) return false;
        }
        for (auto i:t)
        {
            vec[i]=1;
        }
        return true;
    }

    void backtrack(string s,string &tobe, int begin, vector<string>& arr,vector<int> &vec)
    {
        if(check(s,tobe,vec))
        {
            maxlength=max(maxlength,int(s.length())+int(tobe.length()));
            s+=tobe;
        }
        else return;

        for(int i=begin; i<arr.size(); i++)
        {
            backtrack(s,arr[i],begin+1,arr,vec);
        }
    }

    int maxLength(vector<string>& arr) {
        if(arr.size()==1) return arr[0].length();
        vector<int> vec(26,0);
        string temp="";
        backtrack("",temp,0,arr,vec);
        return maxlength;
    }
};



int main()
{
    









return 0;
}