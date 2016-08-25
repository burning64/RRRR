//#include<stdio.h>
//#include<algorithm>
//using namespace std;
//typedef struct Arr{
//	int x, y;
//	int val;
//}Arr;
//Arr arr[250000];
//Arr carr[250000];
//int cnt[500][500] = { 1, 0 };
//int m, n, c = 0;
//int dx[] = { 0, 0, -1, 1 };
//int dy[] = { -1, 1, 0, 0 };
//bool compare(const Arr &a, const Arr &b);
//int main(){
//	scanf("%d %d", &m, &n);
//	for (int i = 0; i < m; i++){
//		for (int j = 0; j < n; j++){
//			scanf("%d", &arr[c].val);
//			arr[c].x = i;
//			arr[c].y = j;
//			carr[c].val = arr[c].val;
//			carr[c].x = i;
//			carr[c].y = j;
//			c++;
//		}
//	}
//	sort(carr, carr + c, compare);
//
//	for (int i = 0; i <= c; i++){
//		for (int d = 0; d < 4; d++){
//			if (0 <= carr[i].x + dx[d] && carr[i].x + dx[d] < m && 0 <= carr[i].y + dy[d] && carr[i].y + dy[d] < n &&
//				arr[n * (carr[i].x + dx[d]) + carr[i].y + dy[d]].val < carr[i].val){
//				cnt[carr[i].x + dx[d]][carr[i].y + dy[d]] = cnt[carr[i].x + dx[d]][carr[i].y + dy[d]] + cnt[carr[i].x][carr[i].y];
//			}
//		}
//	}
//	printf("%d", cnt[m - 1][n - 1]);
//	return 0;
//}
//bool compare(const Arr &a, const Arr &b){
//	if (a.val > b.val){
//		return true;
//	}
//	return false;
//}