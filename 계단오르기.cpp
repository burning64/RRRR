//#include<stdio.h>
//#include<algorithm>
//using namespace std;
//int n, arr[3][301];
//int main(){
//	scanf("%d", &n);
//	for (int i = 1; i <= n; i++)
//		scanf("%d", &arr[0][i]);
//	arr[1][1] = arr[0][1];
//	arr[1][2] = arr[1][1] + arr[0][2];
//	arr[2][2] = arr[0][2];
//	for (int i = 3; i <= n; i++){
//		arr[1][i] = arr[0][i] + arr[2][i - 1];
//		arr[2][i] = arr[0][i] + max(arr[1][i - 2], arr[2][i - 2]);
//	}
//	printf("%d", max(arr[1][n], arr[2][n]));
//	return 0;
//}