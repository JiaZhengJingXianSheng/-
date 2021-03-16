// 20131203.cpp : This file contains the 'main' function. Program execution begins and ends there.
/*
* �ں����Ϸ���n�����ڵľ��Σ�ÿ�����εĿ����1������i��1 �� i �� n�������εĸ߶���hi��
��n�����ι�����һ��ֱ��ͼ�����磬��ͼ���������εĸ߶Ⱦͷֱ���3, 1, 6, 5, 2, 3��

���ҳ��ܷ��ڸ���ֱ��ͼ��������ľ��Σ����ı�Ҫ��������ƽ�С�����������������ӣ�
����������ͼ��ʾ����Ӱ���֣������10��

����
��һ�а���һ������n�������ε�����(1 �� n �� 1000)��
�ڶ��а���n ������h1, h2, �� , hn�����ڵ���֮���ɿո�ָ���(1 �� hi �� 10000)��hi�ǵ�i�����εĸ߶ȡ�

���
���һ�У�����һ��������������ֱ��ͼ�ڵ������ε������

��������
6
3 1 6 5 2 3

�������
10
*/
#include <iostream>
#include <vector>
using namespace std;
#define NMAX 1000
int high[NMAX];
vector <int> maxAns;
int ans;
int main()
{
    int max ;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> high[i];
    }

    //����
    
    for ( int i = 0; i < n; i++)
    {
        int hiMin = high[i];
        for (int j = i; j < n; j++)
        {
            hiMin = min(hiMin, high[j]);
            maxAns.push_back(hiMin* (j - i + 1));
        }
    }
    ans = maxAns[0];
    for (int i = 0; i < maxAns.size(); i++)
    {
        if (ans < maxAns[i])
            ans = maxAns[i];
    }
    cout << ans;
    return 0;
}

