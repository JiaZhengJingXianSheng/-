// 20131201.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
/*
��Ŀ
����n�����������ҳ������г��ִ�����������������������ж���������������С��һ����

����
����ĵ�һ��ֻ��һ��������n(1 �� n �� 1000)����ʾ���ֵĸ�����
����ĵڶ�����n������s1, s2, ��, sn (1 �� si �� 10000, 1 �� i �� n)�����ڵ����ÿո�ָ���

���
�����n�������г��ִ�����������������������ж�������������С��һ����

��������
6
10 1 10 20 30 20

�������
10*/
#include <iostream>
#include <algorithm>
#define MAX 10005
int val[MAX];
using namespace std;

int main()
{   
    int n , a;
    cin >> n;
    
    for (int i = 0; i < MAX; i++)
    {
        val[i] = 0;
    }

    int i = 0;
    while (n >= 1 and n <= 10000 and i < n)
    {
        cin >> a;
        val[a]++;
        i++;
    }
    int ansMax = 0;
    int ans;
    for (int i = 0; i < MAX; i++)
    {
        if (ansMax < val[i])
            ansMax = val[i];
    }
    for (int i = 0; i < MAX; i++)
    {
        if (val[i] == ansMax) {
            ans = i;
            break;
        }

    }
    cout << ans;
    return 0;
}

