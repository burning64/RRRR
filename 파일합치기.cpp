//#include <stdio.h>
//int testcase, n, min;
//int arr[501][501] = { 0, };
//int main(){
//	scanf("%d", &testcase);
//	for (int c = 0; c < testcase; c++){
//		scanf("%d", &n);
//		for (int i = 1; i <= n; i++){
//			int temp;
//			scanf("%d", &arr[0][i]);
//			arr[0][i] += arr[0][i - 1];
//		}
//		for (int i = 2; i <= n; i++){
//			for (int x = i, y = 1; x <= n; x++, y++){
//				for (int j = x - i + 1, j2 = y + 1; j < x; j++, j2++){
//					if (j == x - i + 1){
//						min = arr[y][j] + arr[j2][x];
//					}
//					else if (min > arr[y][j] + arr[j2][x]){
//						min = arr[y][j] + arr[j2][x];
//					}
//				}
//				arr[y][x] = min + arr[0][x] - arr[0][x - i];
//				min = 0;
//			}
//		}
//		printf("%d\n", arr[1][n]);
//	}
//	return 0;
//}