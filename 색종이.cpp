//#include<stdio.h>
//
//int arr[101][101] = { 0, };
//int cnt[101] = { 0, };
//int n, x, y, w, h;
//
//int main(){
//	scanf("%d", &n);
//
//	for (int c = 1; c <= n; c++){
//		scanf("%d %d %d %d", &x, &y, &w, &h);
//		for (int i = x; i < x + w; i++){
//			for (int j = y; j < y + h; j++){
//				arr[i][j] = c;
//			}
//		}
//	}
//	for (int i = 0; i < 101; i++){
//		for (int j = 0; j < 101; j++){
//			cnt[arr[i][j]]++;
//		}
//	}
//	for (int c = 1; c <= n; c++){	
//		printf("%d\n", cnt[c]);
//	}
//	return 0;
//}