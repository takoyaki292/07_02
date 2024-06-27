#include <stdio.h>
#include <thread>
#include<Windows.h>
#include <functional>
#include <list>
#include<vector>
#include <iostream>
using namespace std;
//o—Í‚·‚é‚½‚ß‚ÌŠÖ”
void Output(string a) 
{
	cout << a << "\n";
}
int main() {
	//•\¦‚³‚ê‚é•¶š—ñ
	string one = "threas1";
	string two = "threas2";
	string three = "threas3";
	//•À—ñˆ—‚ğg‚Á‚Ä‚¢‚é
	std::thread th1(Output, one);
	th1.join();
	std::thread th2(Output, two);
	th2.join();
	std::thread th3(Output, three);
	th3.join();

	return 0;
}