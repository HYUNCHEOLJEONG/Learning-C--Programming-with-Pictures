#include<iostream>
using namespace std;

struct Person{
    int age;
    double height;
    double weight;
};

int main(){
Person ps[2];

for(int i=0; i<2; i++){
    cout << "나이를 입력하십시오\n";
    cin >> ps[i].age;
    cout << "키를 입력하십시오\n";
    cin >> ps[i].height;
    cout << "몸무게를 입력하십시오\n";
    cin >> ps[i].weight;
    }

for(int i=0; i<2; i++){
    cout << "나이: " << ps[i].age << endl;
    cout << "키: " << ps[i].height << endl;
    cout << "몸무게: " << ps[i].weight << endl;
    }
return 0;

}