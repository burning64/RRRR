//#include<stdio.h>
//#include<stdlib.h>
//
//int arr[100][100];
//int carr[50];
//int max, c;
//
//void sum(int count);
//int main(){
//	int testcase;
//
//	scanf("%d", &testcase);
//
//	for (c = 0; c < testcase; c++){
//		scanf("%d", &carr[c]);
//		for (int i = 0; i < carr[c]; i++){
//			for (int j = 0; j <= i; j++){
//				scanf("%d", &arr[i][j]);
//			}
//		}
//		max = 0;
//		sum(carr[c]);
//		printf("%d\n", arr[0][0]);
//	}
//
//	return 0;
//}
//void sum(int count){
//	int i, j, n;
//
//	i = count - 1;
//	j = 0;
//
//	if (count > 1){
//		while (j < i){
//			if (arr[i][j] > arr[i][j + 1]){
//				arr[i - 1][j] = arr[i - 1][j] + arr[i][j];
//			}
//			else{
//				arr[i - 1][j] = arr[i - 1][j] + arr[i][j + 1];
//			}
//			j++;
//		}
//		count--;
//		sum(count);
//	}
//}