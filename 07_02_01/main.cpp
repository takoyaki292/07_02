#include <stdio.h>
#include <thread>
#include<Windows.h>
#include <functional>
#include <list>
#include<vector>
#include <iostream>
using namespace std;
//�o�͂��邽�߂̊֐�
void Output(string a) 
{
	cout << a << "\n";
}
int main() {
	//�\������镶����
	string one = "threas1";
	string two = "threas2";
	string three = "threas3";
	//���񏈗����g���Ă���
	std::thread th1(Output, one);
	th1.join();
	std::thread th2(Output, two);
	th2.join();
	std::thread th3(Output, three);
	th3.join();

	return 0;
}