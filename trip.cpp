#include <iostream>
#include <iomanip>

using namespace std;

float twoPrecision(float n){
    return n - float((n*100.0-(int)(n*100))/100.0);
}

int main(){

  int n; cin >> n;
  float *v, sum, avg, result;

  while(n){

    sum = result = 0.0;
    v = new float[n];
    for(int i = n-1; i >= 0; i--){
      cin >> v[i];
      sum += v[i];
    }

    avg = (1.0*sum)/n;

    for(int i = n-1; i >= 0; i--)
      if(twoPrecision(v[i]-avg > 0))
        result = twoPrecision(result + twoPrecision(v[i]-avg));

    cout << '$';
    cout << fixed << setprecision(2) << result << endl;

  delete v;
  cin >> n;
  }
}

/*
OUTPUT=
3
10
20
30
$10.00
4
15
15.01
3.01
3
$11.99
0

*/
