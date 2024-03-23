#ifndef KOREAN_H
#define KOREAN_H

#include <iostream>
#include <vector>
#include <cmath>
#include <sstream>
#include <map>
#include <Windows.h>
#include <algorithm>

#define 준비 using namespace std;
#define 시작 int main()
#define 출력(x) std::cout << x;
#define 끝 return 0;
#define 반환(x) return x;
#define 반복(x, n) for(int x = 0; x < n; ++x)
#define 만약(x) if(x)
#define 아니면 else
#define 생성 auto
#define 문장 std::string
#define 벡터 std::vector
#define 넣기 push_back
#define 빼기 pop_back()
#define 크기 size()
#define 첫번째 front()
#define 마지막 back()
#define 제곱 pow
#define 루트 sqrt
#define 절댓값 abs
#define 사전 map
#define 입력(x) std::cin >> x;
template<typename T1, typename T2>
constexpr auto 랜덤(T1 a, T2  b) { return (rand() % ((b)-(a)+1) + (a)); }
#define 공백구분(x, 문자) do { \
    stringstream ss(x); \
    string temp; \
    벡터<문장> 문자; \
    while (ss >> temp) { \
        문자.넣기(temp); \
    } \
} while(0)
#define 정수 int
#define 소수1 double
#define 소수2 float
#define 문자 char
#define 조건반복(x) while(x)
#define 무한반복 while(1)
#define 줄바꿈 '\n'
#define 기다리기(x) Sleep(x * 1000);
#define 큰수찾기(a, b) a>b?a:b;
#define 작은수찾기(a, b) a<b?a:b;
#define 배열에서큰수찾기(arr, size) ({ \
    int max_val = arr[0]; \
    for (int i = 1; i < size; ++i) \
        max_val = MAX(max_val, arr[i]); \
    max_val; })
#define 배열에서작은수찾기(arr, size) ({ \
    int max_val = arr[0]; \
    for (int i = 1; i < size; ++i) \
        max_val = MIN(max_val, arr[i]); \
    max_val; })
#define 긴 long
#define 오름차순정렬(arr) do { \
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
#define 내림차순정렬(arr) do { \
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