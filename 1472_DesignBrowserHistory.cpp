#include<iostream>
using namespace std;
class node
{
public:
    node *next, *prev;
    string str;
    node(string str, node *prev=NULL, node *next=NULL)
    {
        this->str=str;
        this->next=next;
        this->prev=prev;
    }
};
class BrowserHistory {
public:
    node *head, *curr;
    BrowserHistory(string homepage) {
              head=new node(homepage);
              curr=head;
    }
    
    void visit(string url) {
        // node *curr=head;
        curr->next=new node(url,curr);
        curr=curr->next;
    }
    
    string back(int steps) {
        // node*curr=head;
        while(steps && curr->prev) 
        {
            curr=curr->prev;
            steps--;
        }
        return curr->str;
    }
    
    string forward(int steps) {
        while(steps && curr->next)
        {
            curr=curr->next;
            steps--;
        }
        return curr->str;
    }
};
/**
 * Your BrowserHistory object will be instantiated and called as such:
 * BrowserHistory* obj = new BrowserHistory(homepage);
 * obj->visit(url);
 * string param_2 = obj->back(steps);
 * string param_3 = obj->forward(steps);
 */
int main()
{
    









return 0;
}