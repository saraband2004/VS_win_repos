
#include <iostream>
#include <vector>
#include <set>
#include <unordered_set>
#include <stack>
#include <algorithm>
#include <array>
using namespace std;

class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        stack<int> Stack;
        heights.push_back(0);
        int max = 0;
        int min = 1 << 30 + 1<<29;

        vector<int> arr;
        for (int i = 0; i < heights.size(); i++) {
            arr.push_back(heights[i]);
        }
        
        for (int i = 0; i < heights.size(); ) {
            if (Stack.empty() || heights[i] > arr[Stack.top()]) {
                Stack.push(i);
                min = std::min(min, heights[i]);
                i++;
            }
            else if (heights[i] == arr[Stack.top()]) {
                max = std::max(max, heights[i] * (i - Stack.top() + 1));
                i++;
            }
            else {
                auto j = Stack.top();
                while (!Stack.empty() && arr[Stack.top()] > heights[i]) {
                    j = Stack.top();
                    Stack.pop();
                }
                
                max = std::max(max, arr[j] * (i - j));
                arr[j] = heights[i];
                max = std::max(max, arr[j] * (i - j + 1));
                Stack.push(j);
            }
        }
        
        return max; //std::max(max, (signed int)(min * heights.size()));
    }
};


int main(int argc, const char* argv[]) {
    Solution s;
    vector<int> h;
    h.push_back(0);
    h.push_back(3);
    h.push_back(2);
    h.push_back(5);
    cout << s.largestRectangleArea(h);

    return 0;

}