#include <iostream>
using namespace std;

int main() {                       //������. �ݵ�� �����ؾ� ��.
	cout << "�̸��� �Է��ϼ���: "; //cout << : ���
	char name[11]; //������ �� ���ڴ� 1����Ʈ, �ѱ��� �� ���ڴ� 2����Ʈ�� �ش���. �ִ� 5���� ���� �Է� �����ϵ��� ��.
	cin.getline(name, 11); //������ ������ ���� �Է� �����ϵ��� getline() �̿�.
	cout << "�ݰ����ϴ�." << name << "��" << endl; //endl�� �̿��Ͽ� �ٹٲ�. �� �ٹٲ��̶�� �ؼ� \n�� ���� ���� �ƴ�!

	int apple;
	cout << "apple�� ������ ���Դϱ�?";
	cin >> apple; //cin >> : �Է�
	
	int banana;
	cout << "banana�� ������ ���Դϱ�?";
	cin >> banana;

	int orange;
	cout << "orange�� ������ ���Դϱ�?";
	cin >> orange;

	int aprice;
	cout << "apple�� �� �� �ֽ��ϱ�?";
	cin >> aprice;

	int bprice;
	cout << "banana�� �� �� �ֽ��ϱ�?";
	cin >> bprice;

	int oprice;
	cout << "orange�� �� �� �ֽ��ϱ�?";
	cin >> oprice;

	cout << "��" << apple * aprice + banana * bprice + orange * oprice - 500 << "�� �Դϴ�.";  
	return 0;
}