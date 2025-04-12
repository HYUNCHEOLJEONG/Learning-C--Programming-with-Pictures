#include<iostream>
using namespace std;
int main(){
int num1,sum=0;
cout << "시험 점수를 입력하십시오.\n";
do{
    cin >> num1;
    sum += num1;
}while(num1);
cout << "시험 점수의 합계는" << sum << "입니다.\n";
return 0;
}