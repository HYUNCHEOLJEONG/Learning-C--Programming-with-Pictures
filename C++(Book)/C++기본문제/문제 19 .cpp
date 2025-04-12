#include<iostream>
using namespace std;

int count(char str[], char ch);


int main(){

char str[100];
char ch;

cout << "문자열을 입력하십시오.\n";
cin >> str;
cout << "문자열에서 찾을 문자를 입력하십시오.\n";
cin >> ch;
int cnt = count(str, ch);
cout << str << "안에" << ch << "는" << cnt << "개 있습니다.\n";

return 0;

}
int count(char str[], char ch){
    int cnt = 0;
    for(int i=0;str[i] != '\0';i++){
        if(str[i] == ch){
            cnt++;
        }
    }
    return cnt;
}