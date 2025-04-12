#include<iostream>
using namespace std;
int main(){
int num1,num2;
cout << "두 개의 정수를 입력하시오.\n";
cin >> num1 >> num2;
if(num1<num2){
    cout << num1 << "는" << num2 << "보다 작습니다.\n";
}
else if(num1>num2){
    cout << num1 << "는" << num2 << "보다 큽니다.\n";
}
else{
    cout << num1 << "는" << num2 << "와 같습니다.\n";
}

return 0;
}