#include<iostream>
#include<vector>

using namespace std;
class MinStack {
    vector<int>stak;
public:
    MinStack() {
        
    }
    
    void push(int val) {
        stak.push_back(val);
    }
    
    void pop() {
        if(!stak.empty())
        stak.pop_back();
    }
    
    int top() {
        return stak[stak.size()-1];
    }
    
    int getMin() {
        int min=stak[0];
        for (int i: stak)
        {
            if(i<=min)
            min=i;
        }
        return min;
        
    }
};



int main()
{
    
MinStack* minStack = new MinStack();

minStack->push(-2);
minStack->push(0);
minStack->push(-3);
cout<<minStack->getMin()<<endl; // return -3
minStack->pop();
cout<<minStack->top()<<endl;    // return 0
cout<<minStack->getMin()<<endl; // return -2








return 0;
}
// class MinStack {
// public:
//     MinStack() {
        
//     }
    
//     void push(int val) {
        
//     }
    
//     void pop() {
        
//     }
    
//     int top() {
        
//     }
    
//     int getMin() {
        
//     }
// };

// /**
//  * Your MinStack object will be instantiated and called as such:
//  * MinStack* obj = new MinStack();
//  * obj->push(val);
//  * obj->pop();
//  * int param_3 = obj->top();
//  * int param_4 = obj->getMin();
//  */