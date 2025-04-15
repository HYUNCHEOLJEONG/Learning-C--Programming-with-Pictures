#include<iostream>
using namespace std;
int main(){
int res;
cout << "정수를 입력하시오.\n";
cin >> res;
if((res%2)==0){
    cout << res << "는 짝수입니다.\n";
}
else{
    cout << res << "는 홀수입니다.\n";

}

return 0;
}