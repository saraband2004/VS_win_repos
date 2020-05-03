
#include <iostream>
#include <vector>
#include <set>
#include <unordered_set>

using namespace std;

class Solution {
public:
    vector<vector<int>> getSkyline(vector<vector<int>>& buildings) {

    }
};
 
void print_vector(vector<int>& list) {
    for (int i = 0; i < list.size(); i++) {
        cout << list.at(i) << " ";
    }
    cout << " " << endl;
}


int main(int argc, const char* argv[]) {
    /*
    vector<int> list;
    list.push_back(1);
    list.push_back(22);
    list.push_back(333);
    list.push_back(4444);
    list.push_back(55555);
    list.push_back(666666);
    list.push_back(77777);
    print_vector(list);
    cout << list.capacity() << endl; 
    
    list.erase(list.begin() + 1);

    print_vector(list);

    list.insert(list.end() - 1, 999);
    
    print_vector(list);

    vector<int>::iterator it = list.end();

    cout << *(it-1) << endl;
    */


    unordered_set<int> hset;
    hset.insert(1);
    hset.insert(-22);
    hset.insert(333);
    hset.insert(-444);
    hset.insert(1);
    
    if (hset.find(324) == hset.end()) {
        cout << "OKAY" << endl;
    }
    
    return 0;

}