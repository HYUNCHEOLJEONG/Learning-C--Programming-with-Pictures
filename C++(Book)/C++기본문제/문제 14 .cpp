#include<iostream>
using namespace std;
int square(int x);
int main(){ 
int num;
int sq;
cout << "정수를 입력하시오.\n";
cin >> num;
sq = square(num);
cout << num<< "제곱은" << sq <<"입니다.\n";
return 0;
}
int square(int x){
return x*x;
}