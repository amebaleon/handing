#ifndef KOREAN_H
#define KOREAN_H

#include <iostream>
#include <vector>
#include <cmath>
#include <sstream>
#include <map>
#include <Windows.h>
#include <algorithm>

void help1(const std::string& x) {
    for (int i = 0; i < x.length(); i++) {
        if (x[i] == '1') {
            std::cout << "[1 - 1]출력\n사용 방법\n출력(변수)\n출력(\"자신이 원하는 글\")\n출력(변수 << \"자신이 원하는 글\")\n\n";
            std::cout << "[1 - 2]입력\n사용방법\n입력(변수)\n\n";
            std::cout << "[1 - 3]변수 선언\n사용방법1\n생성 변수명 = 0;\n생성 변수명2 = 0.0;\n생성 변수명3 = \"원하는 문장\";\n\n사용방법1에 대한 주의 사항\n변수명 뒤에 \"=\" 표시 후 0(정수),0.0(소수),\"원하는 문장\"(문장)과 같이 형태를 알려 주어야 한다\n\n사용방법2\n정수 변수1;\n소수1 변수1;\n소수2 변수1;\n문장 변수1;\n\n";
        }
    }
}
#define 도움말 using namespace std;\
int main()\
{\
    string x;\
    cout << "무슨 도움이 필요하신가요?\n선택가능한 명령어\n[1]출력, 입력등 기초적인도움이 필요함\n[2]배열, 벡터, 수학적요소 사용법이 필요함\n[3]기타 함수들이 필요함\n위 사항들중 필요한 것들의 번호를 공백, 쉽표 없이 입력해 주세요.\n";\
    cin >>  x;\
    help1(x);\
}
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
