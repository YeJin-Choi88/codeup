#pragma warning (disable:4996)
#include <cstdio>

int main() {
	//1001
	{
		printf("Hello");
	}

	//1002
	{
		printf("Hello World");
	}
	//1003
	{
		printf("Hello\nWorld");
	}
	//1004
	{
		printf("'Hello'");
	}
	//1005
	{
		printf("\"Hello World\"");
	}
	//1006
	{
		printf("\"!@#$%%^&*()\"");
	}
	//1007
	{
		printf("\"C:\\\Download\\hello.cpp\"");
	}
	//1008
	printf("\n");
	{
		printf("\u250C\u252C\u2510\n\u251C\u253C\u2524\n\u2514\u2534\u2518");
	}
	//1010
	{
		int n;	//정수형 변수 선언
		scanf("%d", &n); // 변수에 정수값을 저장
		printf("%d", n); // 변수에 저장되어있는 값 출력

		return 0;
	}
	//1011
	{
		char x; // 문자형으로 변수 하나 선언
		scanf("%c", &x); //변수에 문자를 저장
		printf("%c", x); //변수에 저장되어 있는 문자 출력
	}
	//1012
	{
		float x;	//실수형으로 변수 선언
		scanf("%f", &x);	//변수에 실수값 저장
		printf("%f", x);	//변수에 저장되어 있는 실수값 출력
	}
	//1013
	{
		int a, b;
		scanf("%d %d", &a, &b); // 띄어쓰기로 문자구분
		printf("%d %d", a, b);
	}
	//1014
	{
		char x, y;
		scanf("%c %c", &x, &y);
		printf("%c %c", y, x); //순서를 바꿔 출력
	}
	//1015
	{
		float x;
		scanf("%f", &x);
		printf("%.2f", x);  //소수점 3째자리에서 반올림해서 소수점 2번째 자리까지
	}
	//1017
	{
		int a;
		scanf("%d", &a);
		printf("%d %d %d", a, a, a);
	}
	//1018
	{
		int a, b;
		scanf("%d:%d", &a, &b);
		printf("%d:%d", a, b);
	}
	//1019
	{
		int y, m, d;
		scanf("%d.%d.%d", &y, &m, &d);
		printf("%04d.%02d.%02d", y, m, d); //%02d를 사용해 2칸을 채워 출력함
	}
	//1020
	{
		int x, y;
		scanf("%d-%d", &x, &y);
		printf("%06d%07d", x, y); //주민번호 앞자리 6자리, 뒷자리 7자리
	}
	//1021
	{
		char data[51] = "";
		scanf("%s", data);
		printf("%s", data);
	}
	//1022
	{
		char data[2001];
		fgets(data, 2000, stdin); //fgets()는공백문자 포함되었는 문장 입력받아 저장 
		printf("%s", data);
	}
	//1023
	{
		int a, b;
		scanf("%d.%d", &a, &b);
		printf("%d\n%d", a, b);
	}
	//1024
	{
		char data[22];
		scanf("%s", data);
		for (int i = 0; data[i] != NULL; i++) {
			printf("\'%c\'\n", data[i]);
		}

	}
	//1025
	{
		int a, b, c, d, e;
		scanf("%1d%1d%1d%1d%1d", &a, &b, &c, &d, &e);
		printf("[%d]\n", a * 10000);
		printf("[%d]\n", b * 1000);
		printf("[%d]\n", c * 100);
		printf("[%d]\n", d * 10);
		printf("[%d]", e);
	}
	//1026
	{
		int h, m, s;
		scanf("%d:%d:%d", &h, &m, &s);
		printf("%d", m);
	}
	//1027
	{
		int y, m, d;
		scanf("%d.%d.%d", &y, &m, &d);
		printf("%02d-%02d-%04d", d, m, y);
	}
	//1028
	{
		unsigned int n;
		scanf("%u", &n);
		printf("%u", n);
	}
	//1029
	{
		double d;
		scanf("%lf", &d); //double은 long float 해서 lf라고 쓴다
		printf("%.11lf", d);
	}
	//1030
	{
		long long int n;
		scanf("%lld", &n);
		printf("%lld", n);
	}
}
