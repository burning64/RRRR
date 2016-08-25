//#include<stdio.h>
//#include<vector>
//#include<queue>
//using namespace std;
//int n, maxw = 0, maxnode = 0;
//typedef struct Node{
//	int node;
//	int w;
//}Node;
//vector<Node> v[10001];
//queue<int> q;
//int w[10001] = { 0, };
//bool chk[10001];
//int main(){
//	scanf("%d", &n);
//	Node root;
//	root.node = 1;
//	root.w = 0;
//	v[0].push_back(root);
//	for (int i = 1, num; i < n; i++){
//		Node temp;
//		Node temp2;
//		scanf("%d %d %d", &num, &temp.node, &temp.w);
//		temp2.node = num;
//		temp2.w = temp.w;
//		v[num].push_back(temp);
//		v[temp.node].push_back(temp2);
//	}
//
//	q.push(0);
//	while (!q.empty()){
//		int ntemp = q.front();
//		q.pop();
//		for (int i = 0; i < v[ntemp].size(); i++){
//			if (chk[v[ntemp][i].node] != true){
//				chk[v[ntemp][i].node] = true;
//				w[v[ntemp][i].node] = w[ntemp] + v[ntemp][i].w;
//				q.push(v[ntemp][i].node);
//			}
//		}
//	}
//	for (int i = 1; i <= n; i++){
//		if (maxw < w[i]){
//			maxw = w[i];
//			maxnode = i;
//		}
//	}
//
//	for (int i = 1; i <= n; i++){
//		w[i] = 0;
//		chk[i] = false;
//	}
//	q.push(maxnode);
//	while (!q.empty()){
//		int ntemp = q.front();
//		q.pop();
//		for (int i = 0; i < v[ntemp].size(); i++){
//			if (chk[v[ntemp][i].node] != true){
//				chk[v[ntemp][i].node] = true;
//				w[v[ntemp][i].node] = w[ntemp] + v[ntemp][i].w;
//				q.push(v[ntemp][i].node);
//			}
//		}
//	}
//	for (int i = 1; i <= n; i++){
//		if (maxw < w[i]){
//			maxw = w[i];
//			maxnode = i;
//		}
//	}
//	printf("%d", maxw);
//	return 0;
//}