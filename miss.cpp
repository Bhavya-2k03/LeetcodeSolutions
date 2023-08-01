#include<iostream>
#include<vector>
#include<unordered_map>
#include<algorithm>
#include<cstring>
#include<cmath>
#include <climits>
#include<string>
#include<numeric>
#include<set>
#include <string>
using namespace std;




int main() {
   int n=32;

    cout<<to_string(n)<<"hello";
    // cin>>n;

	// for(int i=0; i<n; i++) //For number of test cases
	// {
	//     int temp;
	//     cin>>temp;
	//     vector<int> vec;
	    
	//     for(int j=0; j<temp; j++) // vector mein value push krne ke liye
	//     {
	//         int u;
	//         cin>>u;
    // 	    vec.push_back(u);
	//     }
	    
	//    sort(vec.begin(),vec.end());
	   
	//    int l=0;
	//    for(int &g: vec) l+=g; // total sum of vector
	   
	//    for(int i=0; i<vec.size(); i++)
	//    {
	//        cout<<l<<" ";
	//        l-=vec[i];
	//    }
	//    cout<<endl;
	   
	   // for(int k=1 ; k<=vec.size(); k++)
	   // {
	   //     int sum=0;
	   //     int max_val=0;
	   //     set<int> ans;   
	   //     int i=1;
	   //     while (i<k)
	   //     {
	   //         ans.insert(vec[i-1]);
	   //         i++;
	   //     }
	   //    // cout<<"hello";
	   //    // cout<<i<<" is "<<i<<endl;
	   //     while(i<=vec.size())
	   //     {
	   //        // cout<<"inserting "<<vec[i-1]<<endl;
	   //         ans.insert(vec[i-1]);
	   //         auto largestElement = max_element(ans.begin(), ans .end());
	   //         sum+=*largestElement;
	   //         ans.erase(largestElement);
	   //         i++;
	   //     }
	   //     cout<<sum<<endl;
	   // }
	    
        


	
	return 0;
}

    // int a,b;
    // cin>>a>>b;
    // if(a+b==6) cout<<"yes";
    // // string s="bhavya";
    // recurse(s);
    // cout<<5;
    // cout<<maxFrequency({1,4,20,28},5);
    // int i=0;
    // while(i<3) cout<<i++<<" ";

        // unordered_map<char,string> m;
        // string digits="234";
        // m['2']="abc";
        // m['3']="def";
        // m['4']="ghi";
        // m['5']="jkl";
        // m['6']="mno";
        // m['7']="pqrs";
        // m['8']="tuv";
        // m['9']="wxyz";

        // int index=2;

        // cout<<m[digits[index]].length();
    // cout<<endl;
    // i=0;
    // while(i<3) cout<<++i<<" ";
        // float sum=16;
        // // for(auto i:matchsticks) sum+=i;
        // float side= sum/4;
        // float temp;
        // string s="69542", t="gupta";
        // string temp=s+t;
        // sort(temp.begin(),temp.end());
        // cout<<temp;
        // for(auto i:s)
        // {
        //     // string temp="";
        //     // cout<<stoi(string(1,i))<<" ";
        // }
        // if(!modf(side,&temp)) cout<<"hello";
        // unordered_map<int,int> m;
        // int count=0,flag=0;
        // recurse(side,0,count,flag,0,m,matchsticks);
        // return count;
    // string str = "world";
    // char ch = 'H';

    // str.insert(0, 1, ch);  // Insert the character at index 0

    // cout << str << std::endl;  // Output: Hello world

    // int a=2, b=1;
    // a = (b += a) - a;
    // b += a;
    // a = b;
    // cout<<a;


    // string s="bhavya";
    // string c=s.substr(0,1);
    // cout<<c;

    // set<int> s ={1,4,5,6};
    // for(auto y:s) cout<<y;
    // vector<int> dp(20,0);

    // // for(auto i:dp) cout<<i<<" ";
    // string temp="p";
    // // cout<<"p"+"1";
    // temp=temp+"1";
    // cout<<temp;

    // int a=7;
    // string b="";

    // string c=to_string(a);
    // cout<<b+to_string(a);
    // vector<int> a ={23, 34, 21};
    // sort(a.begin(),a.end(),[](int a, int b) { return a > b; });
    // // cout<<accumulate(a.begin(),a.end(),0);
    // for(auto i: a) cout<<i<<" ";

// long long int temp=INT_MIN;
// cout<<INT_MIN;
// 2147483648
// 2147483648
// 2147483648
    // string s1="abcbd", s2="dbbca";
    // unordered_map<char,int> m1;
    // unordered_map<char,int> m2;
    // for(auto i:s1) {m1[i]++;}
    // for(auto i:s2) {m2[i]++;}

    // if(m1==m2)
    // cout<<"Same hain";

        // string a="app";
        // string b="le";
        // a=a+b;
        // cout<<a;

        // vector<int> vec={1,4,6,13,17,24,45,76,90};
        // cout<<vec.front();
        // int n=vec.size();
        // // upper_bound()

        // // auto it =upper_bound(vec.begin(),vec.end(),13);
        // auto it =upper_bound(vec.begin(),vec.end(),13);

        // auto itr=lower_bound(vec.begin(),vec.end(),13);

        // // cout<<"The index of last occurence is "<<it-vec.begin();
        // cout<<"The index of first occurence is "<<itr-vec.begin()<<endl<<"The index of last occurence is "<<it-vec.begin();


        // int a[2][2]={0};

        // for (int i = 0; i < 2; i++)
        // {
        //     for (int j = 0; j < 2; j++)
        //     {
        //         cout<<a[i][j]<<" ";
        //     }
            
        // }

// cout<<ceil(3/7);
// int *ptr1 =NULL, *ptr2 =NULL;

// // if(ptr1==ptr2) cout<<"hi";
// string target="bhya";
// string initial(target.length(), '0'); 

// cout<<initial;


// return 0;
// }