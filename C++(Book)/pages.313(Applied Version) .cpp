#include <iostream>
using namespace std;

void func();

int a = 0; // 전역 변수

int main() {
    cout << "=== 함수 호출 테스트 ===" << endl;
    
    for (int i = 0; i < 5; i++) {
        func();
    }

    return 0;
}

void func() {
    int b = 0;           // 지역 변수: 호출할 때마다 초기화
    static int c = 0;    // 정적 변수: 한 번만 초기화되고 값 유지

    a++;
    b++;
    c++;

    cout << "[함수 호출]" << endl;
    cout << "전역 변수 a: " << a << endl;
    cout << "지역 변수 b: " << b << endl;
    cout << "정적 변수 c: " << c << endl;
    cout << "------------------------" << endl;
}