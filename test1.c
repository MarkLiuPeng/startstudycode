#include<stdio.h>
int value_x=10;
int value_y=20;
int num,sum;
char shop_name;
int main(){
	printf("下面是本店的产品:value_x,value_y");
	printf("请选择你的商品:value_x-y:");
	scanf("%c",&shop_name);
	printf("请输入你购买的数量:");
	scanf("%d",&num);
	sum=shop_name=='value_x'?num*value_x:num*value_y;	//三目运算符 
	printf("一共购买了%d\n个%c商品总共%d\n元",num,shop_name,sum);
	return 0;
}




/*
#include<time.h>
#define TIME 100000000
int m,n=TIME;
int main(void){
	time_t start ,stop;
	register int x,y;	//寄存器变量
	int a,b;			//普通变量
	time(&start);
	for(a=0;a<b;a++);
	time(&stop);
	printf("普通变量用时:%ds\n",stop-start);
	
	time(&start);
	for(x=0;x<y;x++);
	time(&stop);
	printf("寄存器变量用时:%ds\n",stop-start);
	
	return 0;
}
/*
extern int count;				//调用外部变量或函数 
void fun(){
	printf("%d\n",count);
}
*/
