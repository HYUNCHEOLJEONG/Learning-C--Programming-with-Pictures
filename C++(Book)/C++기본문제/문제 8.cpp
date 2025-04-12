#include<iostream>
using namespace std;

int main(){
int sum=0;
int num=0;

cout <<"과목 1의 점수를 입력하십시오.\n";
cin >> num;
sum += num;
cout << "과목2의 점수를 입력하십시오.\n";
cin >>num;
sum += num;
cout <<"과목3의 점수를 입력하십시오.\n";
cin >> num;
sum += num;
cout << "과목4의 점수를 입력하십시오.\n";
cin >> num;
sum += num;
cout << "과목5의 점수를 입력하십시오.\n";
cin >> num;
sum += num;
cout << "5과목의 합계는 " << sum << "입니다.\n";
cout << "5과목의 평균은 " << (double)sum/5 << "입니다.\n";

return 0;
}