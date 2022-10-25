/*
# include <stdio.h> //指令：包含c标准输入、输出库的信息 
int main()
{
	float a;
	
	a=12.34567;
	printf ("a= %.5f\n", a);
   return 0;
}
*/

/* 
#include <stdio.h>
 int main(void)//"int main() " previously defined here:报错：重复定义main函数 
 //[Error] ld returned 1 exit status 报错：函数名不正确，可能有拼写错误 
 {
 
 	int length,width,height,volume,weight;//可以先初始化变量比如 int length=10, height=8 
 	
 	height=6;
 	length=12;
 	width=8;
 	volume=length*width*height;
 	weight=(volume+165)/166;
 	
 	printf("体积为： %d\n",volume);
 	printf("相对质量： %d", weight);
 	return 0;
 }//expected unqualified-id before "{" token:报错：一个main函数下只有一组{}，如同这两个程序，同时执行需要注释include和int main并且去掉}{和第一个return 0
 */
 
 /*
 #include <stdio.h>//画个勾勾 
 int main(void)
{
	printf("        *\n");
	printf("       *\n");
	printf(" *    *\n");
	printf("  *  *\n");
	printf("   *");
	return 0 ;
  }
*/
  
/*
#include<stdio.h>//[Error] ld returned 1 exit status:报错：程序正在运行，无法编译or一个项目中有多个xx.c文件，将多余xx.c文件改成头文件即可or有函数拼写错误 
#include<iostream>
#include<cmath>//调用π 
int main()
  {
  	int r=0;
	float v=0;
  	printf("球的半径为：\n");
	  scanf("%d",&r);//如果写的是"%d ",&r,那么scanf函数将重复读取空白字符知道出现非空白字符（但此处不会录入这个非空白字符），所以执行异常。 
	v=r*r*r *(4.0f/3.0f)*acos(-1);
	printf("球的体积为： %.2f",v);
	return 0;  
   }
*/   

/*
#include<stdio.h>//计算税后额 
int main(void)
{
	float a,b;
	printf("数额为： ");
	scanf("%f",&a);
	b=a*1.05;
	printf("\n 税后为： %.2f",b);
	return 0; 
   }  
*/

/*
#include<stdio.h>//计算金钱数额可以最少用多少张20元5元1元来组成 
int main()
{
	printf("请输入整数数额\n");
	int a,b,c,d,e,f,g;
	scanf("%d",&a);
	b=a/20;
	c=a-20*b;
	d=c/5;
	e=c-5*d;
       //	printf("最少张数分别为：\n20: %d\n",b);
	        printf("5: %d\n",d);
            printf("1: %d",e);
	        return 0;  //这样写比较麻烦
	printf("最少的张数分别为：\n 20: %d \n 5: %d \n 1: %d ", b,d,e);
	return 0;	  	
*/

/*
#include<stdio.h>//用户输入日期 
int main()
{
	int a,b,c;
	printf("请输入日期(格式：日/月/年)：\n");
	scanf("%d/%d/%d",&a,&b,&c);
	printf("你输入了日期：%4d%2.2d%2.2d",c,b,a);
	return 0;
}
*/

/*
#include<stdio.h>
int main()
{
	float m,n;
	printf("Enter item number: \n");
	scanf("%f",&m);
	printf("Enter unit price: \n");
	scanf("%f",&n);
    int a,b,c;
	printf("请输入日期(格式：日/月/年)：\n");
	scanf("%d/%d/%d",&a,&b,&c);
	printf("item\t unit\t purchase\n \t price\t date\t\n %-.0f\t %.2f\t %-4d%-2.2d%-2.2d\t",m,n,c,b,a);
	return 0;
}
*/

/*
#include<stdio.h>
int main()
{
    int a,b,c,d,e;
    printf("Enter ISBN: \n");
    scanf("%d-%d-%d-%d-%d",&a,&b,&c,&d,&e);
    printf("Gsi: %d\n Gi: %d\n Pc: %d\n In: %d\n Cd: %d\n",a,b,c,d,e);
    return 0;
}
*/

/* 
#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter phone number:(xxx)xxx-xxxx\n");
	scanf("(%d)%d-%d",&a,&b,&c);//输入时括号用英文 
	printf("you entered: %d.%d.%d",a,b,c);
	return 0; 
}
*/

/*
#include <stdio.h>
int main(void)
{
	int num1, denom1, num2, denom2, result_num, result_denom;
	
	printf("Enter first fraction: ");
	scanf("%d/%d+%d/%d", &num1, &denom1, &num2, &denom2);
	
	result_num = num1 * denom2 + num2 * denom1;
	result_denom = denom1 * denom2;
	printf( " The sum is %d/%d\n " , result_num, result_denom);
	
	return 0;
}
*/

/*
#include<stdio.h>//求余数 
int main()
{
	int a,b;
	scanf("%d",&a);
	b=a%5;
	printf("余数为： %d",b);
	return 0;
 }
*/

/*
#include<stdio.h>
int main()
{
	int i=1;
	printf("%d",++++++i);//+只能是双数 
	return 0;
 }
*/

/*
#include<stdio.h>
int main() 
{
	int i=3,j=4,k=5;
	printf("%d\n",i++ -j++ + --k);
	printf("%d %d %d",i,j,k);
	return 0;
}
*/

/*
#include<stdio.h>
int main()
{
	int i=7,j;
	j=3*i--+2;
	printf("%d %d",i,j);	
}
*/

/*
#include<stdio.h>
int main()
{
	int a,b,c,d,e;
	printf("请输入  \n");
	scanf("%d",&a);
	b=a/100;
	c=(a-b*100)/10;
	d=a-b*100-c*10;
	e=d*100+c*10+b;
	printf("交换后为： %d",e);
	return 0;
}
*/

/*
#include<stdio.h>
int main()
{
	int a,b,c,d,e;
	printf("请输入  \n");
	scanf("%1d%1d%1d",&a,&b,&c);
	printf("%d%d%d",c,b,a);
	return 0;
}
*/

/*
#include<stdio.h>
int main()
{
	int i,j,m;
	printf("输入两个数，中间用逗号隔开\n"); 
	scanf("%d,%d",&i,&j);
	if(i==j)//记住是== 
	  m=1;
	else
	  m=0;
	printf("%d",m);
	return 0;  
}
*/

/* 
#include<stdio.h>
int main()
{
	int i=6,j=2,k=5; 
	//printf("%d",!!i+!j+!!!!k);
	//printf("%d",(!i<j));//如果写成！i<j则意味0<j,错误	 
    printf("%d",!(i<j));
}
*/

/* 
#include<stdio.h>
int main()
{
	int i=7,j=8,k=9;
	printf("%d\n",i-7&&j++<k);//先计算i-7，发现=0，那么由于&&，则之后的程序都不会阅读和执行了，直接输出0 
	printf("%d\n",j=j++);//不要这么写 ，程序可能先执行了自增操作并储存，但又把j=8赋给了j，盖住了9 
	printf("%d %d %d",i,j,k);
}
*/

/*
#include<stdio.h>
int main()
{
	int i=1,j=1,k=1;
	printf("%d\n",++i||++j&&++k);
	printf("%d %d %d",i,j,k);//输出结果为2 1 1 
}
*/

/*
#include<stdio.h>
int main()
{
	int i,j;
	scanf("%d, %d",&i, &j);
	if (i==j)//!!!!!!!!==
	printf("一样大");
	else if (i>j)
	printf("i大");
	else if (i<j)
	printf("j大");
	return 0;
}
*/

/*
#include<stdio.h>
int main()
{
	int a;
	scanf("%d",&a);
	switch(a)
	{
		case 229: printf("Albany"); break;
		case 404: case 470: case 678: case 770: printf("Atlanta"); break;
		case 706: case 762: printf("Columbus"); break;
		default: printf("not found"); break;
	}	
}
*/

/* 
#include<stdio.h>//把24小时制转换为12小时制 
int main()
{
	int a,b;
	scanf("%d:%d",&a,&b);
	if(a>12)
	printf("%d:%.2d",a-12,b);
	else
	printf("%d:%.2d",a,b);
}
*/

/* 
#include<stdio.h>//为乘客寻找时间最近的航班的起飞和降落时刻 
int main()
{
	int a,b,c,d,e,f;
	printf("请输入时刻"); 
	scanf("%d:%d",&a,&b);
	if(a<=8)
	printf("8:00a.m. 10:16a.m.");
	else if(a==9||a==10)
	printf("9:43a.m. 11:52a.m.");
	else if(a=11)
	printf("11:19a.m 1:31p.m.");
	else if(a==12)
	printf("12:47p.m. 3:00p.m.");
	else if(a==1)
	  if(b<=24)
	  printf("12:47a.m. 3:00p.m.");
	  else
	  printf("2:00p.m. 4:08p.m.");
	else if(a==2)
	  if(b<=53)
	  printf("2:00p.m. 4:08p.m.");  
	else if(a==3||a==4)   
	printf("3:45p.m. 5:55p.m.");
 } 
*/

/* 
#include<stdio.h>//找最大值最小值 
int main()
{
	int a,b,c,d,e,f,g,h;
	scanf("%d %d %d %d",&a,&b,&c,&d);
	if(a>=b)
	  {
	  e=a;
	  g=b;
      }
      else
      {
      e=b;
      g=a;
	  }
	if(c>=d)
	  {  
	  f=d;
	  h=c;
      }
	  else
	  {
	  f=c;
	  h=d;	
	  } 
	if(e>h)
	  printf("max= %d\n",e);
	  else
	  printf("max= %d\n",h); 
	if(g>f)       
	  printf("min= %d\n",f);
	  else
	  printf("min= %d\n",g);
	return 0;    	  
}
*/

/* 
#include<stdio.h>//浮点数四舍五入，考虑正负数！！！ 
int main()
{
    float a,v;
    int b;
    scanf("%f",&a);
    if(a>=0)
	 {
	 b=int(a+0.5);
     printf("%d",b);
     }
    else
     {
     v=a-0.5;
     b=int(v);
	 printf("%d",b);
     }
    return 0;

}
*/

/* 
#include<stdio.h>
int main()
{
	int i,j;
	for(i=5,j=i-1;i>0,j>0;--i,j=i-1)//看上去似乎for循环是在第二组语句后进行输出 
	printf("%d,%d\n",i,j);
}
*/

/* 
#include<stdio.h>
int main()
{
	int i;
	for(i=0;i++<10;)//输出12345678910，此处若用前缀自增，则输出123456789 
	printf("%d\n",i);
}
*/ 

/*
#include<stdio.h>
int main()
{
	int i=1;
	for(;i<=128;i*=2)
	printf("%d\n",i);
}
*/

/*
#include<stdio.h>
int main()
{
    int i;
	for(i=9384;i>0;i/=10)
	printf("%d\n",i); 
}
*/	//注意与上上个代码中for后面有无；区分

/*
#include<stdio.h>
int main()
{
    int i;
	for(i=10;i>=1;i/=2)
	printf("%d\n",i++);
}
*/

/*
#include<stdio.h>
int main()
{
    int i=10;
    while(i>=1)
	{
    printf("%d\n",i++);
    i/=2;
    }   
}
*/ 

/*
#include<stdio.h>
int main()
{
	int sum=0,i;
	for(i=0;i<10;i++)
	{
		if(i%2)
		continue;
		sum+=i;
	}
	printf("%d\n",sum);
}
*/

/*
#include<stdio.h>
int main()
{
    int d,n;
    scanf("%d",n);
	for(d=2;d<n&&n%d*d!=0;d++)
	printf("%d\n",n);
}
*/

/*
#include<stdio.h>
int main()
{
	float a,b,c,d,e,f,g;
	
	printf("Enter a number\n");
	scanf("%f",&a);
	printf("\nEnter a number\n");
	scanf("%f",&b);
	printf("\nEnter a number\n");
	scanf("%f",&c);
	printf("\nEnter a number\n");
	scanf("%f",&d);
	if(a>=b)
	e=a;
	else 
	e=b;
	if(c>=d)
	f=c;
	else
	f=d;
	if(e>=f)
	printf("%f",e);
	else
	printf("%f",f);
}
*/

/* 
#include <stdio.h>//约瑟夫问题解答 ?????????????????不懂 
#define N 100
int main(void) 
{
    int n,m,k,i;
    int count;
    int a[N]={0};
    do{
        scanf("%d %d %d",&n,&k,&m);
    } while(k<1 || m<2 || n<m || n>100);//确保用户输入的数字满足题目要求 
    for(count=n;count>2;count--)//一直循环到只剩两个人没有被标记=1 
    {
        for(i=0;i<m;i++)
        {
            if(k+i>n)//确保剔除一人后开始下一个循环时不会数到多于现有的人的最大编号 
            {
                k=k-n;
            }
            if(a[k+i]==1)//确保已经被剔除的人不会再被数到 
            {
                k+=1;
                i-=1;//相当于数到了被剔除的人，要再来一遍for循环 
            }
        }///这个for循环的用处是：确保执行一次剔除时不会数到已经被剔除的，并且确定这次剔除后新的k 
        a[k+m-1]=1;//给被剔除的人做标记 
        if(a[k+m]==0)
        {
            k=k+m;//下一次剔除后新的k，用于再次进入最大for循环 
        }
        else{
            k=k+m+1;//避开已被剔除的 
        }
        for(i=0;;i++)//处理即将再次进入最大for循环的k 
        {
            if(k+i>n)
            {
                k=k-n;//
            }
            if(a[k+i]==0)
            {
                k=k+i;//确保即将再次进入循环的k不会对应到已被做了标记的人 
                break;///跳出for，break对于if-else不起作用 
            }
        }
    }    
    for(i=1;i<=n;i++)
    {
        if(a[i]==0)
        printf("%d ",i);//最终数组中只会剩下题目要求的人=0，其余被剔除的都已经被标记=1 
    }
    return 0;
}
*/

/* 
#include<stdio.h>//斐波那契数列 
#define N 40
int main()
{
	int a[N]={0};
	a[0]=0;
	a[1]=1;
	int i;
	for(i=2;i<N;i++)
	a[i]=a[i-1]+a[i-2];
	for(i=0;i<N;i++)
	printf("%d ",a[i]);
	
 }
*/


#include<stdio.h>
#define N 8 
int main()
{
	int i,j;
	//char 'B','R'; 
    int a[N][N]={{0},{0}};
    for(i=0;i<N;i++)
    {
	  for(j=0;j<N;j++)
     {
	 if((i+j)%2==0)
     a[i][j]=1;
     else
     a[i][j]=2;
     }
    }
    for(i=0,j=0;i<N,j<N;i++,j++)
    printf("%d ",a[i][j]); 
    
}
    
