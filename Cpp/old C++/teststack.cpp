using namespace std;
#include <iostream>
#include <string>
#include <cstring>
#include <vector>
#include <iostream>
#include <cmath>
#include <algorithm>
#include <stack>
#include <deque>
#include <queue>

struct node{
int x;
int y;
};

class base{
public: std::stack<string> x;
public: void fct(){

x.push("asdfv");
x.push("zzazsf");
x.push("eqvh");
x.push("jtertwe");
x.pop();
x.pop();
x.pop();
cout<<x.top();
x.pop();
x.push("xxx");
cout<<x.top();

if (!x.empty()){x.pop();}
};

};






int main() {
base y;
y.fct();

    return 0;
}

