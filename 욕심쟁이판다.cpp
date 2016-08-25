//#include<stdio.h>
//#include<algorithm>
//using namespace std;
//typedef struct Arr{
//	int x, y;
//	int val;
//}Arr;
//Arr sortarr[250000];
//int n, arr[500][500], maxday = 0;
//int day[500][500] = { 0, };
//int dx[] = { 0, 0, -1, 1 };
//int dy[] = { -1, 1, 0, 0 };
//bool compare(const Arr &a, const Arr &b);
//int main(){
//	scanf("%d", &n);
//	for (int i = 0; i < n; i++){
//		for (int j = 0; j < n; j++){
//			scanf("%d", &sortarr[i*n + j].val);
//			arr[i][j] = sortarr[i*n + j].val;
//			sortarr[i*n + j].x = i;
//			sortarr[i*n + j].y = j;
//		}
//	}
//	sort(sortarr, sortarr + n * n, compare);
//	for (int i = 0; i < n * n; i++){
//		for (int d = 0; d < 4; d++){
//			if (0 <= sortarr[i].x + dx[d] && sortarr[i].x + dx[d] < n && 0 <= sortarr[i].y + dy[d] && sortarr[i].y + dy[d] < n 
//				&& arr[sortarr[i].x + dx[d]][sortarr[i].y + dy[d]] > sortarr[i].val){
//				if (day[sortarr[i].x][sortarr[i].y] == 0){
//					day[sortarr[i].x][sortarr[i].y] = 1;
//				}
//				if (day[sortarr[i].x + dx[d]][sortarr[i].y + dy[d]] < day[sortarr[i].x][sortarr[i].y] + 1){
//					day[sortarr[i].x + dx[d]][sortarr[i].y + dy[d]] = day[sortarr[i].x][sortarr[i].y] + 1;
//					maxday = max(maxday, day[sortarr[i].x + dx[d]][sortarr[i].y + dy[d]]);
//				}
//			}
//		}
//	}
//	if (maxday == 0){
//		maxday = 1;
//	}
//	printf("%d", maxday);
//	return 0;
//}
//bool compare(const Arr &a, const Arr &b){
//	if (a.val < b.val){
//		return true;
//	}
//	return false;
//}