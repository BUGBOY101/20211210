#define	_CRT_SECURE_NO_WARNINGS 1

//素数

#include<iostream>
#include<cmath>
using namespace std;
int sushu(int n) {
	int i;
	if (n <= 1)
		return 0;
	for (i = 2; i <= sqrt(n); i++) {
		if (n % i == 0)
			return 0;
	}
	if (i > sqrt(n))
		return 1;
}
int gede() {
	int i, j, k;
	for (i = 4; i < 10000; i += 2) {
		for (j = 2; j < i - 1; j++) {
			for (k = 2; k < i - 1; j++) {
				if (j + k == i && sushu(j) && sushu(k)) {
					return 1;
				}
			}
		}
	}
	return 0;
}
int main() {
	int n, i, j;
	//while (cin >> n) {//n必须为大于2的偶数-可以分解成两个素数之和
	//	for (i = 2; i < n - 1; i++) {
	//		for (j = 2; j < n - 1; j++) {
	//			if (i + j == n && sushu(i) && sushu(j))
	//				cout << n << " = " << i << " + " << j << endl;
	//		}
	//	}
	//}
	if (gede() == 1)
		cout << "哥德巴赫猜想成立" << endl;
	else
		cout << "不成立" << endl;
}

//my_sqrt函数

//#include<iostream>
//using namespace std;
//double my_sqrt(double n) {
//	if (n < 0) {
//		cout << "-nan(ind)" << endl;
//		return 0;
//	}
//	double r = n;
//	while (fabs(r*r-n) >= 1e-6) {
//		r = (r + n / r) / 2;
//	}
//	return r;
//}
//int main() {
//	double n;
//	while (cin >> n) {
//		printf("%.3lf\n", my_sqrt(n));
//		printf("%.3lf\n", sqrt(n));
//	}
//}

//2的N次方

//#include<iostream>
//using namespace std;
//int a[1000];
//int main() {
//	int n, i, j;
//	while (cin >> n) {
//		memset(a, 0, sizeof(a));
//		a[0] = 1;
//		for (i = 0; i < n; i++) {
//			for (j = 0; j < 1000; j++) {
//				a[j] *= 2;
//			}
//			for (j = 0; j < 1000; j++) {
//				if (a[j] > 9) {
//					a[j + 1] += a[j] / 10;
//					a[j] %= 10;
//				}
//			}
//		}
//		for (i = 1000; i > 0; i--) {
//			if (a[i] == 0)
//				continue;
//			else
//				break;
//		}
//		for (; i >= 0; i--)
//			cout << a[i];
//		cout << endl;
//	}
//}