#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <Windows.h>
using namespace std;

int main()
{
	system("title 电子教室毁灭者 // By CJYKK");
	system("color 17");
	cout << "+----------------------------------+" << endl;
	cout << "|          电子教室毁灭者          |" << endl;
	cout << "|此程序专为各种电子教室软件制造！  |" << endl;
	cout << "|                                  |" << endl;
	cout << "|使用此软件，您可以：              |" << endl;
	cout << "|—脱离学校中各种电子教室对您的控制|" << endl;
	cout << "|—老师无法广播或查看您的屏幕      |" << endl;
	cout << "|—老师的控制端显示您为在线状态    |" << endl;
	cout << "|                                  |" << endl;
	cout << "|              By CJYKK，用的开心！|" << endl;
	cout << "+----------------------------------+" << endl;
	cout << "[提示]请按任意键继续……";
	_getch();
	system("cls");
	cout << "+----------------------------------+" << endl;
	cout << "|此程序不能保证：                  |" << endl;
	cout << "|1.对于所有版本的电子教室绝对有效；|" << endl;
	cout << "|2.绝对不会被发现；                |" << endl;
	cout << "|3.您的生命安全；                  |" << endl;
	cout << "+----------------------------------+" << endl;
	cout << "|出现以上问题制作者不承担任何责任！|" << endl;
	cout << "+----------------------------------+" << endl;
	cout << "[提示]请按任意键继续……";
	_getch();
	system("cls");
	cout << "+----------------------------------+" << endl;
	cout << "|请选择电子教室的类别：            |" << endl;
	cout << "|0.通杀大部分（在下方未列出时使用）|" << endl;
	cout << "|1.极域电子教室；                  |" << endl;
	cout << "|2.传奇电子教室；                  |" << endl;
	cout << "|                                  |" << endl;
	cout << "|警告：                            |" << endl;
	cout << "|通杀大部分模式会降低运行速度并占用|" << endl;
	cout << "|较多的资源，因此仅限于未列出时使用|" << endl;
	cout << "+----------------------------------+" << endl;
	cout << "[输入]请输入要使用的序号：";
	char mode = _getch();
	long long time = -1;
	cout << endl << "[输入]请输入尝试杀进程的次数（-1为无限次）：";
	cin >> time;
	system("cls");
	cout << "模式：" << mode << "，次数：" << time << endl;
	cout << "+----------------------------------+" << endl;
	cout << "|现在程序将按照设置运行，          |" << endl;
	cout << "|运行过程中出现报错属于正常现象！  |" << endl;
	cout << "+----------------------------------+" << endl;
	cout << "[确认]请按任意键开始！";
	_getch();
	system("cls");
	if (mode == '0')
	{
		if (time == -1)
		{
			while (true)
			{
				system("taskkill /f /im Student.exe");
				system("taskkill /f /im StudentMain.exe");
				Sleep(2250);
			}
		}
		else
		{
			for (int i = 1; i <= time; i++)
			{
				system("taskkill /f /im Student.exe");
				system("taskkill /f /im StudentMain.exe");
				Sleep(2250);
			}
		}
	}
	if (mode == '1')
	{
		if (time == -1)
		{
			while (true)
			{
				system("taskkill /f /im StudentMain.exe");
				Sleep(2250);
			}
		}
		else
		{
			for (int i = 1; i <= time; i++)
			{
				system("taskkill /f /im StudentMain.exe");
				Sleep(2250);
			}
		}
	}
	if (mode == '2')
	{
		if (time == -1)
		{
			while (true)
			{
				system("taskkill /f /im Student.exe");
				Sleep(2250);
			}
		}
		else
		{
			for (int i = 1; i <= time; i++)
			{
				system("taskkill /f /im Student.exe");
				Sleep(2250);
			}
		}
	}
	system("cls");
	cout << "运行完成，感谢您的使用！" << endl;
	system("pause");
	return 1145141919;
}