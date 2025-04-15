#include<iostream>
using namespace std;
int square(int x);
double square(double x);
int main(){
int num1;
int sq1;
cout << "정수를 입력하시오.\n";
cin >> num1;
sq1 = square(num1);
cout << num1<< "제곱은" << sq1 <<"입니다.\n";
double num2;
double sq2;
sq2 = square(num2);
cout << num2<< "제곱은" << sq2 <<"입니다.\n";
return 0;
}
int square(int x){
return x*x;
}
double square(double x){
return x*x;
}
