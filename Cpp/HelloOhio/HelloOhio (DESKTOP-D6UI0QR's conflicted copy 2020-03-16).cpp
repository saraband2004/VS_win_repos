// HelloOhio.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
using namespace std;
#include <iostream>
#include <string>
#include <cstring>
#include <vector>
#include <iostream>
#include <cmath>


class Solution {
public:
    int longestValidParentheses(string s) {

        int N;
        N = s.length();
        
        int moon = 0;
        int i = 0;
        int a[N + 1];
        a[0] = 0;
        int globalmax = 0;
        int globalmax2 = 0;

        while (i <= N - 1) {
            if (s[i] == '(') { a[i + 1] = a[i] + 1; }
            else { a[i + 1] = a[i] - 1; }

            if (a[i + 1] >= moon) {
                globalmax2++;

                if (a[i + 1] == moon) { if (globalmax2 > globalmax) { globalmax = globalmax2; } }

            }
            else {
                moon = a[i + 1];


                if (globalmax2 > globalmax) { globalmax = globalmax2; }   globalmax2 = 0;
            }
            i++;
        }
        if (a[N] == moon) { if (globalmax2 > globalmax) { globalmax = globalmax2; } }
        else {
            i = 0; moon = 0;
            a[0] = 0;
            globalmax2 = 0;

            while (i <= N - 1) {
                if (s[N - i - 1] == ')') { a[i + 1] = a[i] + 1; }
                else { a[i + 1] = a[i] - 1; }

                if (a[i + 1] >= moon) {
                    globalmax2++;

                    if (a[i + 1] == moon) { if (globalmax2 > globalmax) { globalmax = globalmax2; } }

                }


                else {
                    moon = a[i + 1];


                    if (globalmax2 > globalmax) { globalmax = globalmax2; }   globalmax2 = 0;
                }
                i++;
            }





        }
        return globalmax;
    };



};


int main()
{
    Solution q;

    return q.longestValidParentheses("()())");
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
