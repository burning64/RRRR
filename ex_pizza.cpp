//#include<stdio.h>
//#include<intrin.h>
//
//int main(){
//	int fullpizza = (1 << 20) - 1;
//	int toppings = 0, pizza = 0;
//	for (int i = 0; i < 3; i++){
//		int t;
//		scanf("%d", &t);
//		toppings |= (1 << t); //�߰�
//	}
//	pizza = toppings;
//	printf("size %d\n", __popcnt(toppings)); //ũ��
//
//	int tp = pizza;
//	for (int i = 1; i <= 3; i++){
//		int first = (tp & -tp);
//		printf("%d = %d\n", i, first);
//		tp -= first;
//	}
//
//	for (int subset = pizza; subset; subset = ((subset - 1) & pizza)){ //��ȸ
//		printf("%d\n", subset);
//	}
//
//
//	return 0;
//}