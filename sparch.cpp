#include<iostream>
using namespace std;
#include <iostream>
#include<vector>
#include <string>

using namespace std;

vector<int> balancedOrNot(vector<string> expressions, vector<int> maxReplacement) {
    vector<int> result;
    for (int i = 0; i < expressions.size(); i++) {
        string expression = expressions[i];
        int max_replacement = maxReplacement[i];
        int open_count = 0;
        int close_count = 0;
        bool is_balanced = true;
        for (int j = 0; j < expression.length(); j++) {
            if (expression[j] == '<') {
                open_count++;
            } else if (expression[j] == '>') {
                if (open_count == 0) {
                    if (max_replacement <= 0) {
                        is_balanced = false;
                        break;
                    }
                    max_replacement--;
                } else {
                    close_count++;
                    if (close_count > open_count) {
                        if (max_replacement <= 0) {
                            is_balanced = false;
                            break;
                        }
                        max_replacement--;
                        open_count++;
                    }
                }
            }
        }
        if (open_count != close_count) {
            is_balanced = false;
        }
        result.push_back(is_balanced ? 1 : 0);
    }
    return result;
}

int main() {
    vector<string> expressions = {"<>>>","<>>>>"};
    vector<int> max_replacements = {2,2};
    vector<int> result = balancedOrNot(expressions, max_replacements);
    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << endl;
    }
    return 0;
}








// int main()
// {
    


// string a="bhavya is gupta";


// // for (int i = 0; i < a.length(); i++)
// // {
// //     cout<<a;
// // }

// for(auto i:a)
// cout<<i<<" ";





