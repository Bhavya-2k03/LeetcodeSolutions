#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main()
{
    cout<<"Enter class strength: "<<endl;
    int class_strength;
    cin>>class_strength;
    
    vector<int> vec;

    for (int i = 0; i < class_strength; i++)
    {
        cout<<"Enter marks: "<<endl;
        int temp;
        cin>>temp;
        vec.push_back(temp);
    }

    sort(vec.begin(),vec.end());

    int count=0;
    for (int i = 0; i < vec.size()-1; i++)
    {
        if(vec[i]==vec[i+1])
        {
            count++;
        }
        else
        {
            cout<<"count of marks: "<<vec[i]<<" is "<<count+1<<endl;
            count=0;
        }

    }
       
return 0;
}