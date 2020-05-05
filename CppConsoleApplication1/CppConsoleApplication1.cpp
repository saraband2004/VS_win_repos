
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
    vector<vector<int>> getSkyline(vector<vector<int>>& buildings) {
        vector<vector<int>> buildings_format;
        for (vector<int> building : buildings) {
            vector<int> building_format0;
            building_format0.push_back(building[0]);
            building_format0.push_back(building[2]);

            buildings_format.push_back(building_format0);

            vector<int> building_format1;
            building_format0.push_back(building[1]);
            building_format0.push_back(0);
            buildings_format.push_back(building_format1);
        }
    }


    vector<vector<int>> merge(vector<vector<int>>& b1, vector<vector<int>>& b2) {
        map<int, int> map 
    }
};


int main(int argc, const char* argv[]) {
    map<int, int> tree;
    tree.insert(pair<int, int>(1111, 1));
    //tree.erase(tree.find(111));
    tree.insert(pair<int, int>(1111, 3));
    cout << tree.find(1111)->second << tree.size();
    return 0;
}