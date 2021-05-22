#pragma warning (disable:4996)
#include <cstdio>

int main() {
	
	//1031
	{
		int x;
		scanf("%d", &x);
		printf("%o", x);	//8진수
	}
	//1032
	{
		int x;
		scanf("%d", &x);
		printf("%x", x);	//16진수 소문자
	}
	//1033
	{
		int x;
		scanf("%d", &x);
		printf("%X", x);	//16진수 대문자
	}
	//1034
	{
		int x;
		scanf("%o", &x);
		printf("%d", x);
	}
	//1035
	{
		int x;
		scanf("%x", &x);	//16진수 소문자
		printf("%o", x);	//8진수
	}
	//1036
	{
		char a;
		scanf("%c", &a);
		printf("%d", a);
	}
	//1037
	{
		int x;
		scanf("%d", &x);
		printf("%c", x);
	}
	//1038
	{
		long long int x, y;
		scanf("%lld %lld", &x, &y);
		printf("%lld", x+y);
	}
	//1039
	{
		long long int x, y;
		scanf("%lld %lld", &x, &y);
		printf("%lld", x + y);
	}
	//1040
	{
		long long int x;
		scanf("%lld", &x);
		printf("%lld", -x);
	}
	//1041
	{
		char a;
		scanf("%c", &a);
		printf("%c", a + 1);
	}
	//1042
	{
		int a, b;
		scanf("%d %d", &a, &b);
		printf("%d", a / b);
	}
	//1043
	{
		unsigned int a, b;
		scanf("%d %d", &a, &b);
		printf("%d", a % b);

	}
	//1044
	{
		long int a;
		scanf("%ld", &a);
		printf("%ld", ++a);

	}
	//1045
	{
		unsigned int a, b;
		scanf("%d %d", &a, &b);
		printf("%d\n", a + b);
		printf("%d\n", a - b);
		printf("%d\n", a * b);
		printf("%d\n", a / b);
		printf("%d\n", a % b);
		printf("%.2f", a/float(b));

	}
	//1046
	{
		int a, b, c;
		scanf("%d %d %d", &a, &b, &c);
		printf("%d\n", a + b + c);
		printf("%.1f", (a + b + c) / 3.0);
	}
	//1047
	{
		int a;
		scanf("%d", &a);
		printf("%d", a << 1);
	}
	//1048
	{
		int a, b;
		scanf("%d %d", &a, &b);
		printf("%d", a << b);
	}
	//1049
	{
		int a, b;
		scanf("%d %d", &a, &b);
		printf("%d", a > b);
	}
	//1050
	{
		int a, b;
		scanf("%d %d", &a, &b);
		printf("%d", a == b);
	}
	//1051
	{
		int a, b;
		scanf("%d %d", &a, &b);
		printf("%d", a <= b);
	}
	//1052
	{
		int a, b;
		scanf("%d %d", &a, &b);
		printf("%d", a != b);
	}
	//1053
	{
		int a;
		scanf("%d", &a);
		printf("%d", !a);
	}
	//1054
	{
		int a, b;
		a, b = (0 || 1);
		scanf("%d %d", &a, &b);
		if (a == 1 && b == 1) {
			printf("1");
		}
		else {
			printf("0");
		}
	}
	//1055
	{
		int a, b;
		a, b = (0 || 1);
		scanf("%d %d", &a, &b);
		if (a == 0 && b == 0) {
			printf("0");
		}
		else {
			printf("1");
		}
	}
	//1056
	{
		int a, b;
		scanf("%d %d", &a, &b);
		printf("%d", (a && !b) || (!a && b));
	}
	//1057
	{
		int a, b;
		scanf("%d %d", &a, &b);
		printf("%d", (a && b) || (!a && !b));
	}
	//1058
	{
		int a, b;
		scanf("%d %d", &a, &b);
		printf("%d", !a && !b);
	}
	//1059
	{
		int a;
		scanf("%d", &a);
		printf("%d", ~a);
	}
	//1060
	{
		int a, b;
		scanf("%d %d", &a, &b);
		printf("%d", a&b);
	}
}