#include<iostream>
using namespace std;

int main(){
for(int i=0;i<=5;i++){
for(int j=0;j<=5;j++){
cout.width(3);
cout.fill('-');
cout <<i*5+j;
}

cout <<'\n';

}
return 0;
}