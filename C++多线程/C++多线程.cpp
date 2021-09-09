// C++多线程.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <thread>
#include <string>
#include <chrono>
using namespace std;
int main()
{

	auto start = chrono::system_clock::now();
	string z = "test";
	cout << "a";
	thread f = thread([&z](int a, int b)
	{	cout << z << endl;
		cout << a + b << endl;
	}, 2, 3);
	f.join();
	chrono::duration<double> diff = chrono::system_clock::now() - start;
	cout << "Times:" << diff.count() << endl;
    return 0;
}

