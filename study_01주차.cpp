#include <iostream>
using namespace std;

int main() {                       //시작점. 반드시 존재해야 함.
	cout << "이름을 입력하세요: "; //cout << : 출력
	char name[11]; //영문은 한 글자당 1바이트, 한글은 한 글자당 2바이트에 해당함. 최대 5글자 까지 입력 가능하도록 함.
	cin.getline(name, 11); //공백을 포함한 문자 입력 가능하도록 getline() 이용.
	cout << "반갑습니다." << name << "님" << endl; //endl을 이용하여 줄바꿈. 단 줄바꿈이라고 해서 \n과 같은 것은 아님!

	int apple;
	cout << "apple의 가격은 얼마입니까?";
	cin >> apple; //cin >> : 입력
	
	int banana;
	cout << "banana의 가격은 얼마입니까?";
	cin >> banana;

	int orange;
	cout << "orange의 가격은 얼마입니까?";
	cin >> orange;

	int aprice;
	cout << "apple은 몇 개 있습니까?";
	cin >> aprice;

	int bprice;
	cout << "banana는 몇 개 있습니까?";
	cin >> bprice;

	int oprice;
	cout << "orange는 몇 개 있습니까?";
	cin >> oprice;

	cout << "총" << apple * aprice + banana * bprice + orange * oprice - 500 << "원 입니다.";  
	return 0;
}