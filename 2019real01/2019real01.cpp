// 2019real01.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
/*
* ������������ ������������ͬ��������������һ�� �������й��ж��ٶ�
* ��һ������n 1-1000
* �ڶ����� 0-1000
* ����
* 8
* 8 8 8 0 12 12 8 0
* ���
* 5
* 
*/
#include <iostream>

using namespace std;

int main()
{
    int n;
    int count = 1;
    int fr, re;
    cin >> n;
    cin >> fr;

    for (int i = 1; i < n; i++)
    {
        cin >> re;
        if (re != fr)
        {
            count++;
        }
        fr = re;
    }
    cout << count;
    return 0;
}

