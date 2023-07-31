#include<iostream>
#include<vector>
#include<algorithm>
#include<numeric>
using namespace std;

void fit(vector<int> &block , vector<int> &process, int &algo)
{
    if(algo==2) sort(block.begin(),block.end());
    else if(algo==3) sort(block.begin(),block.end(),[](int a, int b) { return a > b; });
    for (int i = 0; i < process.size(); i++)
    {
        for (int j = 0; j < block.size(); j++)
        {
            if(block[j]>=process[i])
            {
                cout<<"Process "<<i+1<<" will be assigned memory block of size "<<block[j]<<" & memory left will be "<<block[j]-process[i]<<endl;
                block[j]=block[j]-process[i];
                if(algo ==2 ) sort(block.begin(),block.end());
                else if(algo==3) sort(block.begin(),block.end(),[](int a, int b) { return a > b; });
                break;
            }
            if(j==block.size()-1) cout<<"No memory block available for process: "<<i+1<<endl;
        }   
    }
    cout<<"Total memory left: "<<accumulate(block.begin(),block.end(),0);
};

int main()
{
    vector<int> block={334, 653, 786, 200, 700, 500};
    vector<int> process={200, 1000, 398, 246,760};
    int algo;

    cout<<"Enter 1 for first fit, 2 for best fit & 3 for worst fit algo."<<endl;
    cin>>algo;
    fit(block,process,algo);

return 0;
}