// 20131201-2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
/*
* ��Ŀ
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
10
*/
#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;
#define MAX 10005
int main()
{
	map <int, int > m;
	int n;
	cin >> n;

	int midVal;
	for (int i = 0; i < n; i++)
	{
		cin >> midVal;
		m[midVal]++;
	}
	//output
	int maxAns = 0;
	for (map<int, int>::iterator it = m.begin(); it != m.end(); it++)
	{
		if (it->second > maxAns)
		{
			maxAns = it->second;
		}

	}
	//cout << maxAns << endl;
	vector <int> ans;
	for (map<int, int>::iterator it = m.begin() ; it!=m.end() ; it++)
	{
		if (it->first == maxAns)
		{
			ans.push_back( it->second);
		}
	}
	int out = ans[0];
	for (int i = 0; i < ans.size(); i++)
	{
		if (out < ans[i])
			out = ans[i];
	}
	cout << out;

	return 0;
}

