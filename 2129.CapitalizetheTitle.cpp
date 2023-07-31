#include<iostream>
#include<string>
using namespace std;
class Solution {
public:
    string capitalizeTitle(string title) {
        int flag=0;
        for (int i = 0; i < title.length(); i++)
        {
            if(i==0 || title[i-1]==' ')
            {
                if(title[i+1]==' '|| title[i+2]==' ') flag=1;
                else flag=0;
            }
            
            if(flag=1)
            {
                title[i]=tolower(title[i]);
            }
            else if(!flag)
            {
                if(i==0 || title[i-1]==' ') title[i]=toupper(title[i]);
                else title[i]=tolower(title[i]);
            }
        }
        return title;
        
    }
};
int main()
{
    









return 0;
}