//#include<stdio.h>
//#include<algorithm>
//using namespace std;
//int testcase, n;
//int card[1001];
//int game[1001][1001] = { 0, };
//int main(){
//	scanf("%d", &testcase);
//	for (int c = 0; c < testcase; c++){
//		scanf("%d", &n);
//		for (int i = 1; i <= n; i++){
//			scanf("%d", &card[i]);
//			game[i][i] = card[i];
//			game[0][i] = game[0][i - 1] + card[i];
//		}
//		for (int i = 2; i <= n; i++){
//			for (int x = i, y = 1; y <= n - i + 1; x++, y++){
//				game[y][x] = game[0][x] - game[0][x - i] - min(game[y][x - 1], game[y + 1][x]);
//			}
//		}
//		printf("%d\n", game[1][n]);
//	}
//	return 0;
//}