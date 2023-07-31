#include<iostream>
#include<vector>
#include<stack>
#include<string>
using namespace std;
class Solution {
public:
    bool checkOperand(string a)
    {
        if(a>="0" && a<="9" || a.length()>1)
        {
            // cout<<a<<" operand hain "<<endl;
            return true;
        }
        else
        {
        return false;
        }    
    }

    int evalRPN(vector<string>& tokens) {
        
        stack<int> s;
        // int()
        for (auto i: tokens)
        {
            if(checkOperand(i))
            s.push(stoi(i));
            else
            {
                int y=s.top();
                s.pop();
                int x=s.top();
                s.pop();
                if(i=="+")
                {   
                    s.push(x+y);
                    // cout<<"x is "<<x<<" y is "<<y<<" Top element is "<<s.top()<<endl;
                }
                else if(i=="-")
                {
                    s.push(x-y);
                    // cout<<"x is "<<x<<" y is "<<y<<" Top element is "<<s.top()<<endl;
                } 
                else if(i=="/")
                {
                    s.push(x/y);

                    // cout<<"x is "<<x<<" y is "<<y<<" Top element is "<<s.top()<<endl;
                }
                else if(i=="*")
                {
                    s.push(x*y);
                    // cout<<"x is "<<x<<" y is "<<y<<" Top element is "<<s.top()<<endl;    
                }
            }
        }
        return s.top();
        

    }
};



int main()
{
   vector<string> a={"2","1","+","3","*"};

    Solution s1;
    cout<<s1.evalRPN(a);

return 0;
}