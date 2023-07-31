#include<iostream>
#include<stack>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
 
class Solution {
public:
    bool isPalindrome(ListNode* head) {
        ListNode* curr=head;
        int count=0;
        while(curr) 
        {
            curr=curr->next;
            count++;
        }
        int mid;
        curr=head;
        if(count%2==0) 
        {
            mid=count/2;
            count=0; 
            stack<int>s;
            while (curr)
            {
                count++;
                if(count<=mid) s.push(curr->val);
                else 
                {
                    if(curr->val!=s.top()) return false;
                    s.pop();
                }
                curr=curr->next;
            }
        }
        else
        {
            mid=(count/2)+1;
            count=0;
            stack<int> s;
            while(curr)
            {
                count++;
                if(count<mid) s.push(curr->val);
                else if(count>mid)
                {
                    if(curr->val!=s.top()) return false;
                    s.pop();
                }
                curr=curr->next;
            }
        }
        return true;
    }
};
int main()
{
    









return 0;
}