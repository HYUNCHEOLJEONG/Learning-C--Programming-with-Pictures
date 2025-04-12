#include <iostream>
using namespace std;
int main(){
int num;
int *pT;
cout << "몇 명의 시험 점수를 입력하겠습니까?"<<endl;
cin >> num;
pT = new int[num];
cout << num << "명 분의 점수를 입력하십시오."<<endl;
for(int i=0;i<<num;i++){
cin >> pT[i];
}
for(int j=0;j<num;j++){
cout << j+1 << " 번쩨 사람의 점수는 " << pT[j] << "입니다."<<endl;
}
delete [] pT;
return 0;
}