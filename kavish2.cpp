#include<iostream>
using namespace std;

int theFinalProblem(string target)
{
    string temp(target.length(), '0'); 
    // string temp= "00000";
    int f = 0;


    for (int i = 0; i < temp.length(); i++) {
        if (temp[i] != target[i]) {
            f++;


            for (int j = i; j < temp.length(); j++) {
                if (temp[j] == '0') {
                    temp[j] = '1';
                } else {
                    temp[j] = '0';
                }

            }
        }
    }

    return f;
}

// };



int minimum_flips(string initial, string target) {
    int flips = 0;
    for (int i = 0; i < initial.length(); i++) {
        if (initial[i] != target[i]) {
            flips++;
            for (int j = i; j < initial.length(); j++) {
                if (initial[j] == '0') {
                    initial[j] = '1';
                } else {
                    initial[j] = '0';
                }
            }
        }
    }
    return flips;
}

int main() {
    // string initial = "0000";
    string target = "01011";
    int result = theFinalProblem(target);
    cout << result << endl;
    return 0;
}


// int main()
// {
    









// return 0;
// }