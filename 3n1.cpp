#include <iostream>
using namespace std;




int main(){
 int num1, num2;
 int a, b;
 long int max_length;
 long int cycle_length;
int c;
 cout  << "Enter two numbers"<<endl;
while(cin >> num1 >> num2){

a=num1;
b=num2;
if(num1 > num2){
c = num1;
num1 = num2;
num2 = c;
}
max_length = 0;
for(int k=num2;k >= num1;k--){

int n;
n= k;
cycle_length=1;
while(n > 1){
if( n%2==1){
n = 3*n+1;
cycle_length++;
}
else{
n = n/2;
cycle_length++;
}

}

if(cycle_length > max_length){
max_length = cycle_length;
}

}

cout << num1 <<" " << num2 <<" "<< max_length<< endl;
}
return 0;
}

/*
OUTPUT =
Enter two numbers
1 10 20
100 200 125
201 210 89
*/

