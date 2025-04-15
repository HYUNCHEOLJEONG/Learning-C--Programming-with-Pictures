#include<iostream>
using namespace std;
struct Person{
int age;
double height;
double weight;
};

void aging(Person* p){
p->age ++;
}

int main(){
Person ps;

cout << "나이를 입력하십시오\n";
cin >> ps.age;
cout << "키를 입력하십시오\n";
cin >> ps.height;
cout << "몸무게를 입력하십시오\n";
cin >> ps.weight;

cout << "나이: " << ps.age << endl;
cout << "키: " << ps.height << endl;
cout << "몸무게: " << ps.weight << endl;
aging(&ps);
cout << "1년이 지났습니다.\n";
cout << "나이: " << ps.age << endl;
cout << "키: " << ps.height << endl;
cout << "몸무게: " << ps.weight << endl;

return 0;
}