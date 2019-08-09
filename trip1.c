#include<stdio.h>
double  exchange (int n, double expenses[]);
double  mean( int n, double numbers[]);
int main(){

int numberOfStudents;

while( scanf("%d", &numberOfStudents) ){

if(numberOfStudents == 0 ){

break;
}

double expenses[numberOfStudents];

for(int i = 0; i < numberOfStudents; i++){
   scanf("%lf", &expenses[i]);
}

double result = exchange( numberOfStudents, expenses );
result = (double)((int)(result*100.0)) / 100.0;
printf("$%.2lf\n",result);

}

}


double  exchange (int n, double expenses[]){

double ans, avg, result;

avg = mean(n, expenses);

for(int i =0; i < n; i++){
if(expenses[i] < avg){
ans = avg - expenses[i];
result += ans;

}

}
return result;
} 

double  mean( int n, double numbers[]){
double avg;
 
    for(int i = 0; i < n; i++) {
        avg += numbers[i];

    }
    return avg / (double)n;

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
