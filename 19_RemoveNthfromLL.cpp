#include<iostream>
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
    int count=0;
    ListNode* removeNthFromEnd(ListNode* head, int &n) {
        if(!head) return head;
        head->next=removeNthFromEnd(head->next, n);
        count++;
        if(count==n) return head->next;
        else return head;        
    }
};
int main()
{
    









return 0;
}