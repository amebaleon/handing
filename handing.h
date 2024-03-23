#ifndef KOREAN_H
#define KOREAN_H

#include <iostream>
#include <vector>
#include <cmath>
#include <sstream>
#include <map>
#include <Windows.h>
#include <algorithm>

#define �غ� using namespace std;
#define ���� int main()
#define ���(x) std::cout << x;
#define �� return 0;
#define ��ȯ(x) return x;
#define �ݺ�(x, n) for(int x = 0; x < n; ++x)
#define ����(x) if(x)
#define �ƴϸ� else
#define ���� auto
#define ���� std::string
#define ���� std::vector
#define �ֱ� push_back
#define ���� pop_back()
#define ũ�� size()
#define ù��° front()
#define ������ back()
#define ���� pow
#define ��Ʈ sqrt
#define ���� abs
#define ���� map
#define �Է�(x) std::cin >> x;
template<typename T1, typename T2>
constexpr auto ����(T1 a, T2  b) { return (rand() % ((b)-(a)+1) + (a)); }
#define ���鱸��(x, ����) do { \
    stringstream ss(x); \
    string temp; \
    ����<����> ����; \
    while (ss >> temp) { \
        ����.�ֱ�(temp); \
    } \
} while(0)
#define ���� int
#define �Ҽ�1 double
#define �Ҽ�2 float
#define ���� char
#define ���ǹݺ�(x) while(x)
#define ���ѹݺ� while(1)
#define �ٹٲ� '\n'
#define ��ٸ���(x) Sleep(x * 1000);
#define ū��ã��(a, b) a>b?a:b;
#define ������ã��(a, b) a<b?a:b;
#define �迭����ū��ã��(arr, size) ({ \
    int max_val = arr[0]; \
    for (int i = 1; i < size; ++i) \
        max_val = MAX(max_val, arr[i]); \
    max_val; })
#define �迭����������ã��(arr, size) ({ \
    int max_val = arr[0]; \
    for (int i = 1; i < size; ++i) \
        max_val = MIN(max_val, arr[i]); \
    max_val; })
#define �� long
#define ������������(arr) do { \
    int size = sizeof(arr) / sizeof(arr[0]); \
    for (int i = 0; i < size - 1; ++i) { \
        for (int j = 0; j < size - i - 1; ++j) { \
            if (arr[j] > arr[j + 1]) { \
                auto temp = arr[j]; \
                arr[j] = arr[j + 1]; \
                arr[j + 1] = temp; \
            } \
        } \
    } \
} while(0)
#define ������������(arr) do { \
    int size = sizeof(arr) / sizeof(arr[0]); \
    for (int i = 0; i < size - 1; ++i) { \
        for (int j = 0; j < size - i - 1; ++j) { \
            if (arr[j] < arr[j + 1]) { \
                auto temp = arr[j]; \
                arr[j] = arr[j + 1]; \
                arr[j + 1] = temp; \
            } \
        } \
    } \
} while(0)
#endif#pragma once