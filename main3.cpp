#pragma warning (disable:4996)
#include <cstdio>
#include <iostream>

int main() {
	//1061
	{
		int a, b;
		scanf("%d %d", &a, &b);
		printf("%d", a | b);
	}
	//1062
	{
		int a, b;
		scanf("%d %d", &a, &b);
		printf("%d", a^b);
	}
	//1063
	{
		int a, b;
		scanf("%d %d", &a, &b);
		printf("%d", a > b ? a : b);
	}
	//1064
	{
		int a, b, c;
		scanf("%d %d %d", &a, &b, &c);
		printf("%d", (a < b ? a : b) < c ? (a < b ? a : b) : c);
	}
	//1065
	{
		int a, b, c;
		scanf("%d %d %d", &a, &b, &c);
		if (a % 2 == 0)
		{
			printf("%d\n", a);
		}

		if (b % 2 == 0)
		{
			printf("%d\n", b);
		}

		if (c % 2 == 0)
		{
			printf("%d", c);
		}
	}
	//1066
	{
		int a, b, c;
		scanf("%d %d %d", &a, &b, &c);
		if (a % 2 == 0) printf("%s\n", "even");
		else printf("%s\n", "odd");
		if (b % 2 == 0) printf("%s\n", "even");
		else printf("%s\n", "odd");
		if (c % 2 == 0) printf("%s", "even");
		else printf("%s", "odd");
	}
	//1067
	{
		int a;
		scanf("%d", &a);
		if (a > 0) {
			printf("%s\n", "plus");
			if (a % 2 == 0) printf("%s", "even");
			else printf("%s", "odd");
		}
		else {
			printf("%s\n", "minus");
			if (a % 2 == 0) printf("%s", "even");
			else printf("%s", "odd");
		}
	}
	//1068
	{
		int num;
		scanf("%d", &num);
		if (num >= 90 && num <= 100) printf("%s", "A");
		else if (num <= 89 && num >= 70) printf("%s", "B");
		else if (num >= 40 && num <= 69) printf("%s", "C");
		else printf("%s", "D");
	}
	//1069
	{
		char c;
		scanf("%c", &c);
		switch (c) {
		case 'A': printf("%s", "best!!!");
			break;
		case 'B': printf("%s", "good!!");
			break;
		case 'C': printf("%s", "run!");
			break;
		case 'D': printf("%s", "slowly~");
			break;
		default: printf("%s", "what?");
			break;
		}
	}
	//1070
	{
		int x;
		scanf("%d", &x);
		switch (x) {
		case 3 :
		case 4 :
		case 5:
			printf("%s", "spring");
			break;
		case 6 :
		case 7 :
		case 8 :
			printf("%s", "summer");
			break;
		case 9:
		case 10:
		case 11:
			printf("%s", "fall");
			break;
		default :
			printf("%s", "winter");
			break;
		}
		//1071
		{
			while (true) {
				int n;
				scanf("%d", &n);
				if (n == 0) {
					break;
				}
				printf("%d\n", n);
			}

		}
	}
	//1072
	{
		int n, m;
		scanf("%d", &n);
	reget:
		scanf("%d", &m);
		printf("%d\n", m);
		if (n-- != 0) goto reget;
	}
	//1073
	{
		while (true) {
			int n;
			scanf("%d", &n);
			if (n == 0) {
				break;
			}
			printf("%d\n", n);
		}

	}
	//1074
	{
		int m;
		scanf("%d", &m);
		for (int i = m; i > 0;i--) {
			printf("%d\n", i);
		}
	}
	//1075
	{
		int m;
		scanf("%d", &m);
		for (int i = m; i > 0;i--) {
			printf("%d\n", i-1);
		}
	}
	//1076
	{
		char n;
		scanf("%c", &n);
		for (char i = 'a'; i <= n;i++) {
			printf("%c ", i);
		}
	}
	//1077
	{
		int a;
		scanf("%d", &a);
		for (int i = 0;i <= a;i++) {
			printf("%d\n", i);
		}
	}
	//1078
	{
		int sum = 0;
		int n;
		scanf("%d", &n);
		for (int i = 1; i <= n;i++) {
			if (i % 2 == 0) {
				sum += i;
			}
		}
		printf("%d", sum);
	}
	//1079
	{
		char ch;
		while (true) {
			scanf(" %c", &ch);
			if (ch == 'q') {
				printf("%c", ch);
				break;
			}
			printf("%c\n", ch);
		}
	}
	//1080
	{
		int n;
		int sum = 0;
		scanf("%d", &n);
		for (int i = 1; ;i++) {
			sum += i;
			if (sum >= n) {
				printf("%d", i);
				break;
			}
		}
	}
	//1081
	{
		int n, m;
		scanf("%d %d", &n, &m);
		for (int i = 1; i <= n;i++) {
			for (int j = 1; j <= m; j++) {
				printf("%d %d\n", i, j);
			}
		}
	}
	//1082
	{
		int a;
		scanf("%X", &a);
		for (int i = 1; i < 16;i++) {
			printf("%X*%X=%X\n", a, i, a * i);
		}
	}
	//1083
	{
		int a;
		scanf("%d", &a);
		for (int i = 1; i <= a; i++) {
			if (i % 3 == 0) {
				printf("X ");
			}
			else {
				printf("%d ", i);
			}

		}
	}
}