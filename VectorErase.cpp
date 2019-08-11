#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {

    vector <int> vec;
    int n, x,val;
    int a, b;

    cin >> n;
 
    for(int i=1;i <=n; i++){
        cin >> val ;
        vec.push_back(val);
    }
 
    cin >> x;
    vec.erase(vec.begin()+(x-1));
    
    cin >> a >> b;
    vec.erase(vec.begin()+(a-1),vec.begin()+(b-1));

    cout <<vec.size() <<endl;
    
    vector <int> :: iterator j;
    for( j=vec.begin();j != vec.end(); j++){
        cout << *j <<" ";
    }
    return 0;
}
/*
Sample Input

6
1 4 6 2 8 9
2
2 4
Sample Output

3
1 8 9
*/
