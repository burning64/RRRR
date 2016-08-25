//#include<stdio.h>
//#include<queue>
//using namespace std;
//
//int f, s, g, u, d;
//int check[1000000] = { 0, };
//typedef struct QQ{
//	int floor;
//	int cnt;
//}QQ;
//queue<QQ> q;
//QQ temp;
//
//int main(){
//	scanf("%d %d %d %d %d", &f, &s, &g, &u, &d);
//	temp.floor = s;
//	temp.cnt = 0;
//	q.push(temp);
//	check[temp.floor] = 1;
//
//	if (s == g){
//		printf("0");
//		return 0;
//	}
//	while (!q.empty()){
//		temp = q.front();
//		if (temp.floor + u <= f && u > 0){
//			temp.floor = temp.floor + u;
//			temp.cnt++;
//			if (temp.floor == g){
//				printf("%d", temp.cnt);
//				return 0;
//			}
//			if (check[temp.floor] == 0){
//				check[temp.floor] = 1;
//				q.push(temp);
//			}
//		}
//		temp = q.front();
//		if (temp.floor - d > 0 && d > 0){
//			temp.floor = temp.floor - d;
//			temp.cnt++;
//			if (temp.floor == g){
//				printf("%d", temp.cnt);
//				return 0;
//			}
//			if (check[temp.floor] == 0){
//				check[temp.floor] = 1;
//				q.push(temp);
//			}
//		}
//		q.pop();
//	}
//	printf("use the stairs");
//	return 0;
//}