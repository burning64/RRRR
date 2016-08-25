//#include<stdio.h>
//#include<queue>
//#include<vector>
//#include <algorithm>
//using namespace std;
//typedef struct Node{
//	int n, w;
//	Node(int n, int w) : n(n), w(w){
//	}
//}Node;
//vector <Node> graph[20001];
//priority_queue <Node> q;
//int v, e, start;
//int minw[20001] = { 0, };
//bool flag[20001] = { false, };
//bool operator<(const Node &a, const Node &b){
//	return a.w > b.w;
//}
//int main(){
//	scanf("%d %d", &v, &e);
//	scanf("%d", &start);
//	for (int i = 0; i < e; i++){
//		int t1, t2, w;
//		Node temp;
//		scanf("%d %d %d", &t1, &t2, &w);
//		temp.n = t2;
//		temp.w = w;
//		graph[t1].push_back(temp);
//	}
//	Node startNode;
//	startNode.n = start;
//	startNode.w = 0;
//	q.push(startNode);
//	while (!q.empty()){
//		Node temp = q.top();
//		q.pop();
//		if (flag[temp.n] == true) continue;
//		else if (flag[temp.n] == false){
//			flag[temp.n] = true;
//			minw[temp.n] = temp.w;
//		}
//	/*	else if(minw[temp.n] > temp.w){
//			minw[temp.n] = temp.w;
//		}*/
//		for (int i = 0; i < graph[temp.n].size(); i++){
//			Node intemp = graph[temp.n][i];
//			intemp.w += temp.w;
//			q.push(intemp);
//		}
//	}
//	for (int i = 1; i <= v; i++){
//		if (i == start) printf("0\n");
//		else if (minw[i] == 0) printf("INF\n");
//		else printf("%d\n", minw[i]);
//	}
//	return 0;
//}