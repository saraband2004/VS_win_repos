
#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <stack>
#include <algorithm>
#include <array>
using namespace std;

class Solution {
public:
    int longestMountain(vector<int>& A) {
        vector<int> incre;
        vector<int> decre;
        stack<int> stack, stuck;
        

        for (int num : A) {
            if (!stack.empty() && num > stack.top()) {
                incre.push_back(stack.size());
                stack.push(num);
            }
            else {
                while (!stack.empty()) {
                    stack.pop();
                }
                incre.push_back(0);
                stack.push(num);
            }
        }


        

        for (auto it = A.rbegin(); it != A.rend(); it++) {
            if (!stuck.empty() && *it > stuck.top()) {
                decre.push_back(stuck.size());
                stuck.push(*it);
            }
            else {
                while (!stuck.empty()) {
                    stuck.pop();
                }
                decre.push_back(0);
                stuck.push(*it);
            }
        }

       // cout << incre.size() << " " << decre.size();

        int max;
        int Max = 0;
        for (int i = 0; i < incre.size(); i++) {
            
            if (incre[i] != 0 && decre[decre.size() - 1 - i] != 0) {
                cout << incre[i] << " , " << decre[decre.size() - 1 - i] << endl;
                max = incre[i] + decre[decre.size() - 1 - i] + 1;
                Max = std::max(Max, max );
            }
        }
        return Max;
    }
};


int main(int argc, const char* argv[]) {
    Solution s;
    vector<int> list;
    list.push_back(0);
    list.push_back(1);
    list.push_back(2);
    list.push_back(3);
    list.push_back(2);
    list.push_back(1);
    cout<<s.longestMountain(list);
    return 0;
}

