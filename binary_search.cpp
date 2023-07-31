#include<iostream>
#include<vector>
using namespace std;
int num;
int Binary(int left, int right ,vector<int> &a)
{
    int mid=(left+right)/2;
    int temp;

    if(left==right && num!=a[mid]) 
    return -1;
    
    if(num==a[mid])
    return mid;
    
    
    else if (num<a[mid])
    {
        if (mid==0)
        return -1;
        else
        return Binary(left,mid-1,a);
    }
    else
    {
        if( mid==a.size()-1)
        return -1;
        else 
        return Binary(mid+1,right,a);
    }
};


int main()
{
    vector<int> a={2,5};

    // int x;
    cout<<"Enter x"<<endl;
    cin>>num;
    int left=0;
    int right=a.size()-1;

    cout<<Binary(left,right,a);

    // int mid =a.size()/2;










return 0;
}