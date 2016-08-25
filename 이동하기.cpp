//#include<stdio.h>
//
//int n, m;
//int arr[1000][1000];
//int arr2[1000][1000] = { 0, };
//
//int main(){
//	scanf("%d %d", &n, &m);
//
//	for (int i = 0; i < n; i++){
//		for (int j = 0; j < m; j++){
//			scanf("%d", &arr[i][j]);
//		}
//	}
//
//	arr2[n - 1][m - 1] = arr[n - 1][m - 1];
//	for (int i = n - 1; i >= 0; i--){
//		for (int j = m - 1; j >= 0; j--){
//			if (i > 0 && arr2[i - 1][j] == 0){
//				arr2[i - 1][j] = arr2[i][j] + arr[i - 1][j];
//			}
//			if (j > 0 && arr2[i][j - 1] == 0){
//				arr2[i][j - 1] = arr2[i][j] + arr[i][j - 1];
//			}
//			else if (j > 0 && arr2[i][j - 1] > 0){
//				if (arr2[i][j - 1] < arr2[i][j] + arr[i][j - 1]){
//					arr2[i][j - 1] = arr2[i][j] + arr[i][j - 1];
//				}
//			}
//		}
//	}
//
//	printf("%d", arr2[0][0]);
//	return 0;
//}