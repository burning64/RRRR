//#include<stdio.h>
//#include<algorithm>
//using namespace std;
//
//int in[2][100000];
//int testcase, n;
//int arr[3][100000];
//
//int main(){
//	scanf("%d", &testcase);
//
//	for (int c = 0; c < testcase; c++){
//		scanf("%d", &n);
//
//		for (int i = 0; i < 2; i++){
//			for (int j = 0; j < n; j++)
//				scanf("%d", &in[i][j]);
//		}
//
//		for (int i = 0; i < n; i++){
//			if (i == 0){
//				arr[0][i] = in[0][i];
//				arr[1][i] = in[1][i];
//				arr[2][i] = 0;
//			}
//			else{
//				arr[0][i] = max(arr[1][i - 1], arr[2][i - 1]) + in[0][i];
//				arr[1][i] = max(arr[0][i - 1], arr[2][i - 1]) + in[1][i];
//				arr[2][i] = max(arr[0][i - 1], arr[1][i - 1]);
//			}
//		}
//
//		printf("%d\n", max(arr[0][n - 1], max(arr[1][n - 1], arr[2][n - 1])));
//	}
//
//}