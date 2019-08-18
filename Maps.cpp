#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
using namespace std;


int main() {
    int q, type; cin >> q; 
    map<string,int> test; 
    string name;
    for (int i(0), mark; i<q; ++i)
    {
        cin >> type >> name;
        if (type == 1){
            cin >> mark;
            test[name] += mark;
        }
        else if (type == 2)
            test.erase(name);
        else
            cout << test[name] << "\n";
    }
    return 0;
}

/*
Input

7
1 Jesse 20
1 Jess 12
1 Jess 18
3 Jess
3 Jesse
2 Jess
3 Jess

Output

30
20
0
*/
