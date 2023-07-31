#include<iostream>
using namespace std;



char* ispossible(int a, int b, int c, int d)
{
    static char s[]="Yes";
    static char t[]="No";
    int temp1 =a;
    int temp2= b;
    while (true)
    {

    if (a > c) {
        return t;
    }
    if (a == c) {
        break;
    }
    a=a+temp2;
    cout<<a;

    }
    cout<<endl;
    while (true)
    {

        if (b > d) {
            return t;
        }
        if (b == d) {
            break;
        }
        cout<<"bis "<<b<<endl;
        b=b+temp1;
        cout<<b;

    }
    
        if (a == c && b == d) {

        return s;
    }
    return s;
    
    


// };

}

// bool isPossible(int a, int b, int c, int d) {
//     if (a > c || b > d) {
//         return false;
//     }
//     if (a == c && b == d) {
//         return true;
//     }
//     return isPossible(a + b, b, c, d) || isPossible(a, a + b, c, d);
// }

int main()
{
    
    cout<<ispossible(1,1,5,2); 








return 0;
}