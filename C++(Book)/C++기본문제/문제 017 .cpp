#include<iostream>
using namespace std;
int max(int x[]);


int main(){
int test[5];

cout << "시험 점수를 입력하십시오.\n";
for(int i=0;i<5;i++){
    cin >> test[i];
}
int m = max(test);
cout << "최고 점수는 " << m << "입니다.\n";

return 0;
}


int max(int x[]){
    int max = x[0];
    for(int i=1;i<5;i++){
        if(x[i] > max){
            max = x[i];
        }
    }
    return max;
}