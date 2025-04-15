#include<iostream>
using namespace std;

int Length(char* str);

int main(){


    char str[100];
    cout << "문자열을 입력하십시오.\n";
    cin >> str;
    int len = Length(str);
    cout << "문자열의 길이는 " << len << "입니다.\n";

    return 0;

}
int length(char* str){
    int len = 0;
    while(str[len] != '\0'){
        len++;
    }
    return len;
}