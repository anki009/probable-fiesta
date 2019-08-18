#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    
vector<int> v;
int size;
cin>>size;
int val;
for(int i=0;i<size;i++)
{
 cin>>val;
 v.push_back(val);
}

vector<int>::iterator low;
int Q;
cin >> Q;
for(int j=1; j<=Q;  j++){
 int x;
 cin >> x;
  low = lower_bound (v.begin(), v.end(), x);  

  if(v[low - v.begin()]== x)    {
      cout << "Yes" << " " <<((low+1)- v.begin()) << '\n';
  }  
  else{
      cout << "No" << " " <<((low+1)- v.begin()) << '\n';
  }    

}

return 0;
}

/*
Input
 8
 1 1 2 2 6 9 9 15
 4
 1
 4
 9
 15
 
Output
 Yes 1
 No 5
 Yes 6
 Yes 8
 */
