//#include<stdio.h>
//#include<stdlib.h>
//#include<queue>
//using namespace std;
//int day = 0;
//int box[1000][1000];
//int m, n;
//int dx[] = { 0, 0, -1, 1 };
//int dy[] = { -1, 1, 0, 0 };
//
//typedef struct pos{
//	int x, y;
//}pos;
//queue <pos> q;
//
//int main(){
//	int zero_check = 0, full_check = 0;
//
//	scanf("%d %d\n", &m, &n);
//	
//	for (int i = 0; i < n; i++){
//		for (int j = 0; j < m; j++){
//			scanf("%d", &box[i][j]);
//			if (box[i][j] == 1){
//				pos temp;
//				temp.x = i;
//				temp.y = j;
//				q.push(temp);
//			}
//		}
//	}
//	while (!q.empty()){
//		pos temp = q.front();
//		q.pop();
//
//		for (int i = 0; i < 4; i++){
//			if (0 <= temp.x + dx[i] && temp.x + dx[i] < n && 0 <= temp.y + dy[i] && temp.y + dy[i] < m
//				&& box[temp.x + dx[i]][temp.y + dy[i]] == 0){
//				box[temp.x + dx[i]][temp.y + dy[i]] = box[temp.x][temp.y] + 1;
//				pos temp2;
//				temp2.x = temp.x + dx[i];
//				temp2.y = temp.y + dy[i];
//				q.push(temp2);
//			}
//		}
//	}
//	day = 0;
//	for (int i = 0; i < n; i++){
//		for (int j = 0; j < m; j++){
//			if (day < box[i][j])
//				day = box[i][j];
//			else if (box[i][j] == 0){
//				printf("-1");
//				return 0;
//			}
//		}
//	}
//	
//	printf("%d", day - 1);
//	return 0;
//}
