#include <iostream>
using namespace std;

int main() {                                  //시작점. 반드시 존재해야 함.
	cout << "이름을 입력하세요: "; //cout << : 출력
	char name[11]; //영문은 한 글자당 1바이트, 한글은 한 글자당 2바이트에 해당함. 최대 5글자 까지 입력 가능하도록 코드 작성. char 은 8비트 정수형 처리 변수.
	cin.getline(name, 11); //공백을 포함한 문자 입력 가능하도록 getline() 이용. 그냥 cin >> 을 입력해서 성 이름을 작성했을 때는, 성만 나오게 됨 >> 띄어쓰기를 인식하지 못함.
	cout << "반갑습니다." << name << "님" << endl; //endl을 이용하여 줄바꿈. 단 줄바꿈이라고 해서 \n과 같은 것은 아님!
	                                               // 위에서 name 입력 받은 것을 이용해서 '반갑습니다 OOO님' 을 출력함.

	int apple;
	cout << "apple의 가격은 얼마입니까?"; //endl; 줄바꿈 없이 출력된 문장 옆에 바로 apple 의 가격을 입력받도록 작성함. (과제에 나와있는 이미지 그대로 했습니다) 
	cin >> apple; //cin >> : 입력, apple 의 가격을 입력받음.
	
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

	cout << "총" << apple * aprice + banana * bprice + orange * oprice - 500 << "원 입니다.";  //입력받은 값들을 토대로 산술 연산자를 이용해서 가격을 계산함.

	return 0; //프로그램을 종료함.
}
