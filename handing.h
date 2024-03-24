#ifndef KOREAN_H
#define KOREAN_H

#include <iostream>
#include <vector>
#include <cmath>
#include <sstream>
#include <map>
#include <Windows.h>
#include <algorithm>

void help(const std::string& x) {
    for (int i = 0; i < x.length(); i++) {
        if (x[i] == '1') {
            std::cout << "[1 - 1]프로그램 시작하기\n준비 -> 프로그램을 준비합니다.\n시작 -> 시작 뒤에는 항상 중괄호를 열고, 그안에 프로그램을 적은후 중괄호를 닫습니다. \n끝 -> 프로그램을 종료 합니다.\n반환() -> 괄호 안에 숫자를 반환하고, 프로그램을 종료합니다.\n\n";
            std::cout << "[1 - 2]출력\n사용 방법\n출력(변수) -> 괄호안에 있는 변수 라는 이름의 변수 안에 들어가 있는 값을 출력한다.\n출력(\"자신이 원하는 글\") ->괄호 안에 있는 글을 출력한다\n출력(변수 << \"자신이 원하는 글\") -> 2개이상의 요소를 출력할때사용한다. 변수 라는 이름의 변수 안에 담긴 값을 출력하고,\'자신이 원하는 글\'이라는 글을 출력한다\n\n";
            std::cout << "[1 - 3]입력\n사용방법\n입력(변수) -> 괄호안에 있는 변수라는 이름의 변수에 값을 입력한다.\n\n";
            std::cout << "[1 - 4]변수 선언\n사용방법\n생성 변수명 = 0; -> 변수명 이라는 변수를 생성하고, 0이라는 값을 넣는다.\n정수 변수1; -> 정수를 담을수 있는 변수1 이라는 이름을 가진 변수를 만듭니다.\n\n";
            std::cout << "[1 - 5]자료형\n정수 -> 예시: -3, -2, -1, 0, 1, 2, 3\n소수 -> 예시: -3.3, -2.2, -1.1, 0.0, 1.1, 2.2, 3.3\n문장 -> 예시:\"안녕하세요\"\n문자 -> \"ㄱ\"\n\n";
        }
        if (x[i] == '2')
        {
            std::cout << "[2 - 1]배열\n사용방법\n정수 배열이름[배열크기]; -> 배열크기만큼의 길이를 가진 배열이름 이라는 이름을 가진 정수가 들어가는 배열을 만든다\n정수 배열이름[배열크기] = {0, 1}; -> 0과 1이 있는 이름이 배열이름 인 정수가 들어가는 배열크기만큼의 배열을 만든다\n정수 배열이름[배열크기] {0, } -> 0으로 초기화된 이름이 배열이름 인 정수가 들어가는 배열크기만큼의 배열을 만든다\n\n";
            std::cout << "[2 - 2]벡터\n사용방법\n벡터<정수> 벡터이름; -> 벡터이름이라는 이름을 가진 정수를 담을수있는 벡터를 만든다\n벡터<정수> 벡터이름(벡터크기); -> 벡터이름이라는 이름을 가진 정수를 담을수있는 길이가 벡터크기 인 벡터를 만든다\n";
            std::cout << "벡터이름.넣기(10); -> 벡터이름 이라는 벡터에 공간을 하나 만들고, 10을 넣는다.\n벡터이름.빼기; -> 벡터이름 이라는 벡터에 가장 끝 값을 지운다.(벡터의 길이도 같이 줄어든다)\n벡터이름.크기; -> 벡터이름 이라는 벡터의 크기를 구한다\n벡터이름.마지막; -> 벡터의 마지막 값을 반환합니다.\n벡터.첫번째; -> 벡터 안에 들어있는 첫번째 값을 반환합니다.\n벡터.초기화; -> 벡터에 있는 값을 모두 지웁니다.\n\n";
            std::cout << "[2 - 3]수학기호\n사용방법\n절댓값() -> 괄호안에 있는 수의 절댓값을 반환합니다.\n루트() -> 괄호 안에 값의 제곱근값을 반환합니다.\n제곱(숫자1, 숫자2) -> 숫자1 의 숫자2 제곱을 반환합니다.";
        }
    }
}
#define 도움말 using namespace std;\
int main()\
{\
    string x;\
    cout << "무슨 도움이 필요하신가요?\n선택가능한 명령어\n[1]출력, 입력등 기초적인도움이 필요함\n[2]배열, 벡터, 수학적요소 사용법이 필요함\n[3]기타 함수들이 필요함\n위 사항들중 필요한 것들의 번호를 공백, 쉽표 없이 입력해 주세요.\n";\
    cin >>  x;\
    help(x);\
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
#define 초기화 clear()
#define 첫번째 front()
#define 마지막 back()
#define 제곱 pow
#define 루트 sqrt
#define 절댓값 abs
#define 사전 map
#define 입력(x) std::cin >> x;
#define 길이 length()
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
#define 소수 double
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
