# 2019학년도 1학년 여름방학 1주차 과제

## 제출 기간 [2019/8/4 00:00 ~ 2019/8/10 23:59]

### 1st week homework
* 게시 폴더 명: 1st_week_homework

## AVR GPIO 
* IDE: Atmel Studio 7
* Language: C
-------------
## 1. LED_ON_OFF
* 게시 파일 명: LED_ON_OFF
* LED 하나를 1초 주기로 점등하세요
-------------
## 2. LED_Even_Odd
* 게시 파일 명: LED_Even_Odd
* LED 8개를 1초 주기로 짝수, 홀수번으로 점등하세요
-------------
## 3. LED_Shift_1
* 게시 파일 명: LED_Shift_1
* 다음과 같은 패턴으로 LED 8개를 1초 주기로 점등하세요

|       | **PE0** | **PE1** | **PE2** | **PE3** | **PE4** | **PE5** | **PE6** | **PE7** |
|:-----:|:-------:|:-------:|:-------:|:-------:|:-------:|:-------:|:-------:|:-------:|
| **1** |   [1]   |   [0]   |   [0]   |   [0]   |   [0]   |   [0]   |   [0]   |   [0]   |
| **2** |   [0]   |   [1]   |   [0]   |   [0]   |   [0]   |   [0]   |   [0]   |   [0]   |
| **3** |   [0]   |   [0]   |   [1]   |   [0]   |   [0]   |   [0]   |   [0]   |   [0]   |
| **4** |   [0]   |   [0]   |   [0]   |   [1]   |   [0]   |   [0]   |   [0]   |   [0]   |
| **5** |   [0]   |   [0]   |   [0]   |   [0]   |   [1]   |   [0]   |   [0]   |   [0]   |
| **6** |   [0]   |   [0]   |   [0]   |   [0]   |   [0]   |   [1]   |   [0]   |   [0]   |
| **7** |   [0]   |   [0]   |   [0]   |   [0]   |   [0]   |   [0]   |   [1]   |   [0]   |
| **8** |   [0]   |   [0]   |   [0]   |   [0]   |   [0]   |   [0]   |   [0]   |   [1]   |
| **9** |   [1]   |   [0]   |   [0]   |   [0]   |   [0]   |   [0]   |   [0]   |   [0]   |
. <br> . <br> .

* 1은 HIGH, 0은 LOW
* 이 패턴을 무한 반복하도록 하세요
* 8번째 LED가 켜지면 그 다음에는 1번째 LED가 켜져야 합니다 (8 -> 9 패턴)
* 최대한 시프트 연산자(>>, <<>>)와 비트 연산자(AND, OR, XOR)를 사용하도록 하세요
-------------

## 4. LED_Shift_2
* 게시 파일 명: LED_Shift_2
* 다음과 같은 패턴으로 LED 8개를 1초 주기로 점등하세요

|       | **PE0** | **PE1** | **PE2** | **PE3** | **PE4** | **PE5** | **PE6** | **PE7** |
|:-----:|:-------:|:-------:|:-------:|:-------:|:-------:|:-------:|:-------:|:-------:|
| **1** |   [0]   |   [0]   |   [0]   |   [0]   |   [0]   |   [0]   |   [0]   |   [0]   |
| **2** |   [1]   |   [0]   |   [0]   |   [0]   |   [0]   |   [0]   |   [0]   |   [1]   |
| **3** |   [1]   |   [1]   |   [0]   |   [0]   |   [0]   |   [0]   |   [1]   |   [1]   |
| **4** |   [1]   |   [1]   |   [1]   |   [0]   |   [0]   |   [1]   |   [1]   |   [1]   |
| **5** |   [1]   |   [1]   |   [1]   |   [1]   |   [1]   |   [1]   |   [1]   |   [1]   |
| **6** |   [1]   |   [1]   |   [1]   |   [0]   |   [0]   |   [1]   |   [1]   |   [1]   |
| **7** |   [1]   |   [1]   |   [0]   |   [0]   |   [0]   |   [0]   |   [1]   |   [1]   |
| **8** |   [1]   |   [0]   |   [0]   |   [0]   |   [0]   |   [0]   |   [0]   |   [1]   |
| **9** |   [0]   |   [0]   |   [0]   |   [0]   |   [0]   |   [0]   |   [0]   |   [0]   |
. <br> . <br> . <br>
* 1은 HIGH, 0은 LOW
* 이 패턴을 무한 반복하도록 하세요
* 8번째 LED가 켜지면 그 다음에는 1번째 LED가 켜져야 합니다 (8 -> 9 패턴)
* 최대한 시프트 연산자(>>, <<>>)와 비트 연산자(AND, OR, XOR)를 사용하도록 하세요


-------------

## Algorithm 

### Password Cracker

게시 폴더 명: Algorithm
게시 파일 명: Password Cracker

하나의 데이터배열을 n개의 데이터로 만들어서 구조체 안에 있는 n개의 요소를 가진 배열에 저장하고 n개의 데이터를 모두 더한 결과를 출력하라.

암호를 알아낼 수 있는 특수한 배열이 있습니다. 배열 내의 이진수 값들을 이용하여 암호를 알아낼 수 있는데, 암호는 **A부터 N 까지**, 14개의 11비트 정수를 이용해 표현됩니다. 하지만 모두 사용되지는 않고, 그 중 8개만 사용됩니다. 암호는 **A+B+C+D-E-F-G-H** 입니다.

배열이 주어졌을 때, 암호를 찾는 것이 문제입니다. 단, 암호를 찾는 과정은 모두 비트단위 연산이나 비트 시프트 연산으로 이루어져야 합니다. 

2차원 배열을 1차원으로 길게 늘어트린다고 생각했을 때, 값 A부터 N은 배열의 처음부터 11비트씩 끊어서 만들어집니다. 예를 들면, A는 맨 처음 11비트, B는 그 다음 11비트, C는 그 다음 11비트… 와 같은 방식으로 얻어낼 수 있습니다. 우리의 목표는 주어진 배열에서 A, B, C, D, E, F, G, H의 값을 찾아내는 것입니다. 주어지는 배열은 다음과 같습니다.

~~~
00000000
00100000
00000110
11111111
01000000
00010000
00000010
00000000
01000000
00001000
00000001
00000000
00100000
00000100
00000000
10000000
00010000
00000010
00000000
01000000
~~~

**배열 예시**

~~~
unsigned char bits[20][8] = {
	{0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 1, 0, 0, 0, 0, 0},
	{0, 0, 0, 0, 0, 1, 1, 0},
	{1, 1, 1, 1, 1, 1, 1, 1},
	{0, 1, 0, 0, 0, 0, 0, 0},
	{0, 0, 0, 1, 0, 0, 0, 0},
	{0, 0, 0, 0, 0, 0, 1, 0},
	{0, 0, 0, 0, 0, 0, 0, 0},
	{0, 1, 0, 0, 0, 0, 0, 0},
	{0, 0, 0, 0, 1, 0, 0, 0},
	{0, 0, 0, 0, 0, 0, 0, 1},
	{0, 0, 0, 0, 0, 0, 0, 0},
	{0, 0, 1, 0, 0, 0, 0, 0},
	{0, 0, 0, 0, 0, 1, 0, 0},
	{0, 0, 0, 0, 0, 0, 0, 0},
	{1, 0, 0, 0, 0, 0, 0, 0},
	{0, 0, 0, 1, 0, 0, 0, 0},
	{0, 0, 0, 0, 0, 0, 1, 0},
	{0, 0, 0, 0, 0, 0, 0, 0},
	{0, 1, 0, 0, 0, 0, 0, 0}
 }
~~~
