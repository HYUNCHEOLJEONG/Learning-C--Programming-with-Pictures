#include<iostream>
using namespace std;

void add(int* x1,int *x2,int a);


int main(){

int num1 =0;
int num2 =0;
int num3 =0;

cout << "2과목 분의 점수를 입력하십시오.\n";
cin >> num1 >> num2;
cout << "더할 점수를 입력하십시오.\n";
cin >> num3;
add(&num1,&num2,num3);
cout << "과목1 : " << num1;
cout << "\n과목2 : " << num2;

return 0;
}

void add(int* x1,int *x2,int a){
    *x1 += a;
    *x2 += a;
}