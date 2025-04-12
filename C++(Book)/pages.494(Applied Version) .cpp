#include <iostream>
using namespace std;

// 템플릿 클래스 정의
template <class T>
class Array {
private:
    T data[5]; // 길이 5짜리 배열
public:
    void setData(int num, T d);
    T getData(int num);
};

// setData 함수 구현
template <class T>
void Array<T>::setData(int num, T d) {
    if (num < 0 || num > 4) {
        cout << "배열 길이를 초과했습니다. (index: " << num << ")" << endl;
    } else {
        data[num] = d;
    }
}

// getData 함수 구현
template <class T>
T Array<T>::getData(int num) {
    if (num < 0 || num > 4) {
        cout << "배열 길이를 초과했습니다. (index: " << num << ")" << endl;
        return data[0]; 
    } else {
        return data[num];
    }
}

// 메인 함수
int main() {
    cout << "int형 배열을 생성합니다." << endl;
    Array<int> i_array;
    i_array.setData(0, 100);
    i_array.setData(1, 80);
    i_array.setData(2, 60);
    i_array.setData(3, 40);
    i_array.setData(4, 20);
    i_array.setData(5, 0); // 범위 초과

    for (int i = 0; i < 6; i++) {
        cout << "i_array[" << i << "] = " << i_array.getData(i) << endl;
    }

    cout << "double형 배열을 생성합니다." << endl;
    Array<double> d_array;
    d_array.setData(0, 100.5);
    d_array.setData(1, 80.1);
    d_array.setData(2, 60.2);
    d_array.setData(3, 40.3);
    d_array.setData(4, 20.4);

    for (int i = 0; i < 5; i++) {
        cout << "d_array[" << i << "] = " << d_array.getData(i) << endl;
    }

    return 0;
}