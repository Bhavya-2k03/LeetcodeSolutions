#include<iostream>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    ListNode* ans=NULL;
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
       
        if(!headA || !headB) return NULL;
        ListNode *p1=headA, *p2=headB;
        while(p1!=p2)
        {
            if(!p1) p1= headB;
            if(!p2) p2= headA;

            if(p1==p2) return p1;
            p1=p1->next;
            p2=p2->next;

        }
        return p1;
    }
};
int main()
{
    









return 0;
}