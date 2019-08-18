#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() { 
    set<int>s;
    int q;
    int x, type;
    cin >>q ;
    for(int i=0;i< q;i++){

    
    cin >> type >> x;
    
    switch(type){
        case 1:
          s.insert(x);
          break;

        case 2:
          s.erase(x);
          break;
        case 3:
           cout << (s.find(x)==s.end()?"No":"Yes") <<"\n";
           break;
            
    }
    }
    return 0;
}

/*
 Input

8
1 9
1 6
1 10
1 4
3 6
3 14
2 6
3 6

Output

Yes
No
No
*/
