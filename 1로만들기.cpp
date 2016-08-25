//#include<stdio.h>
//#include<algorithm>
//#define INF 987654321
//using namespace std;
//int n, arr[1000001];
//int dp(int n){
//	if (arr[n] != INF) return arr[n];
//	int& ret = arr[n];
//	if (n % 3 == 0) ret = dp(n / 3); //나누기3
//	if (n % 2 == 0) ret = min(ret, dp(n / 2)); //나누기2
//	ret = min(ret, dp(n - 1)) + 1; //-1
//	return ret;
//}
//int main(){
//	scanf("%d", &n);
//	arr[1] = 0;
//	arr[2] = 1;
//	arr[3] = 1;
//	for (int i = 4; i <= n; i++)
//		arr[i] = INF;
//	printf("%d", dp(n));
//	return 0;
//}