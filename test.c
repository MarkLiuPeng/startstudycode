#include<stdio.h>
#include<limits.h>
#define WIDTH 10	//预处理器 
#define HEIGTH 20
int count;
extern void fun();
int main(){
	count=1;
	fun();
	//printf("count:%d\n",count);
}







/*
void fun(void);
static int count=10;				//静态局部变量 
int main(){
	while(count--){
		
		fun();
	}
	return 0;
	/*
	printf("int length is:%lu\n",sizeof(int));
	int area;
	area=WIDTH*HEIGTH;
	printf("area:%d\n",area);
	const int x=10;	//常量 
	printf("x:%d\n",x);			
	return 0;
	*/
	
	//存储类 
/*
	auto int y;
	register int x;
	//scanf("%d\n",&x);
	printf("x:%d\ny:%d\n",sizeof(x),sizeof(y));
	
*/
/*
}
void fun(void){
	static int i=5;
	i++;
	printf("当i为%d\n时,count为%d\n",i,count);	
}
*/

//传参 
/*
	int main(int argc,char *argv[]){
	printf("program name is:%s\nprogram num is%d\n programe content%s\n,",argv[0],argc,argv[1]);
	return 0;	
}
*/

//阶乘 
	/*
	int i=1;
	int j=2;
	while(i<5){
		j=j*i;
		i++;
	}
	printf("5!=:%d\n",j);
}
*/

	/*
	int max(int x,int y);//声明最大值函数 
	int a,b,c;
	printf("请输入a,b的值:\n");
	scanf("%d,%d",&a,&b);
	c=max(a,b);
	printf("max is:%d\n",c);
	return 0;		

int max(int x,int y){
	int z;
	if(x>y){
		x=z;
	}
	else{
		y=z;	
	}
	return(z);	
	}	

	//求两个数的和 
	/*
	int x,y,sum;
	x=10;
	y=90;
	sum=x+y;
	printf("sum is%d\n",sum);
	return 0;
	*/ 


