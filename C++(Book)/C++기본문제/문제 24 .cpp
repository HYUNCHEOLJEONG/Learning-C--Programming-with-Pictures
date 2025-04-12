#include <fstream>
#include <iostream>
#include <iomanip>

int main(int argc, char* argv[]) {
    if(argc != 2) {
        std::cout << "인수의 개수가 맞지 않습니다.\n";
        return 1;
    }

    std::ifstream fin(argv[1]);
    if(!fin) {
        std::cout << "파일을 열 수 없습니다.\n";
        return 1;
    }

    const int num = 8;
    int test[num];
    for(int i = 0; i < num; i++) {
        fin >> test[i];
    }

    int max = test[0];
    int min = test[0];
    for(int j = 0; j < num; j++) {
        if(test[j] > max) {
            max = test[j];
        }
        if(test[j] < min) {
            min = test[j];
        }
        std::cout << "No." << j + 1 << std::setw(5) << test[j] << std::endl;
    }

    std::cout << "최대점수는 " << max << std::endl;
    std::cout << "최소점수는 " << min << std::endl;

    fin.close();

    return 0;
}