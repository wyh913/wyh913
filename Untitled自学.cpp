/*
# include <stdio.h> //ָ�����c��׼���롢��������Ϣ 
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
 int main(void)//"int main() " previously defined here:�����ظ�����main���� 
 //[Error] ld returned 1 exit status ��������������ȷ��������ƴд���� 
 {
 
 	int length,width,height,volume,weight;//�����ȳ�ʼ���������� int length=10, height=8 
 	
 	height=6;
 	length=12;
 	width=8;
 	volume=length*width*height;
 	weight=(volume+165)/166;
 	
 	printf("���Ϊ�� %d\n",volume);
 	printf("��������� %d", weight);
 	return 0;
 }//expected unqualified-id before "{" token:����һ��main������ֻ��һ��{}����ͬ����������ͬʱִ����Ҫע��include��int main����ȥ��}{�͵�һ��return 0
 */
 
 /*
 #include <stdio.h>//�������� 
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
#include<stdio.h>//[Error] ld returned 1 exit status:���������������У��޷�����orһ����Ŀ���ж��xx.c�ļ���������xx.c�ļ��ĳ�ͷ�ļ�����or�к���ƴд���� 
#include<iostream>
#include<cmath>//���æ� 
int main()
  {
  	int r=0;
	float v=0;
  	printf("��İ뾶Ϊ��\n");
	  scanf("%d",&r);//���д����"%d ",&r,��ôscanf�������ظ���ȡ�հ��ַ�֪�����ַǿհ��ַ������˴�����¼������ǿհ��ַ���������ִ���쳣�� 
	v=r*r*r *(4.0f/3.0f)*acos(-1);
	printf("������Ϊ�� %.2f",v);
	return 0;  
   }
*/   

/*
#include<stdio.h>//����˰��� 
int main(void)
{
	float a,b;
	printf("����Ϊ�� ");
	scanf("%f",&a);
	b=a*1.05;
	printf("\n ˰��Ϊ�� %.2f",b);
	return 0; 
   }  
*/

/*
#include<stdio.h>//�����Ǯ������������ö�����20Ԫ5Ԫ1Ԫ����� 
int main()
{
	printf("��������������\n");
	int a,b,c,d,e,f,g;
	scanf("%d",&a);
	b=a/20;
	c=a-20*b;
	d=c/5;
	e=c-5*d;
       //	printf("���������ֱ�Ϊ��\n20: %d\n",b);
	        printf("5: %d\n",d);
            printf("1: %d",e);
	        return 0;  //����д�Ƚ��鷳
	printf("���ٵ������ֱ�Ϊ��\n 20: %d \n 5: %d \n 1: %d ", b,d,e);
	return 0;	  	
*/

/*
#include<stdio.h>//�û��������� 
int main()
{
	int a,b,c;
	printf("����������(��ʽ����/��/��)��\n");
	scanf("%d/%d/%d",&a,&b,&c);
	printf("�����������ڣ�%4d%2.2d%2.2d",c,b,a);
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
	printf("����������(��ʽ����/��/��)��\n");
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
	scanf("(%d)%d-%d",&a,&b,&c);//����ʱ������Ӣ�� 
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
#include<stdio.h>//������ 
int main()
{
	int a,b;
	scanf("%d",&a);
	b=a%5;
	printf("����Ϊ�� %d",b);
	return 0;
 }
*/

/*
#include<stdio.h>
int main()
{
	int i=1;
	printf("%d",++++++i);//+ֻ����˫�� 
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
	printf("������  \n");
	scanf("%d",&a);
	b=a/100;
	c=(a-b*100)/10;
	d=a-b*100-c*10;
	e=d*100+c*10+b;
	printf("������Ϊ�� %d",e);
	return 0;
}
*/

/*
#include<stdio.h>
int main()
{
	int a,b,c,d,e;
	printf("������  \n");
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
	printf("�������������м��ö��Ÿ���\n"); 
	scanf("%d,%d",&i,&j);
	if(i==j)//��ס��== 
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
	//printf("%d",(!i<j));//���д�ɣ�i<j����ζ0<j,����	 
    printf("%d",!(i<j));
}
*/

/* 
#include<stdio.h>
int main()
{
	int i=7,j=8,k=9;
	printf("%d\n",i-7&&j++<k);//�ȼ���i-7������=0����ô����&&����֮��ĳ��򶼲����Ķ���ִ���ˣ�ֱ�����0 
	printf("%d\n",j=j++);//��Ҫ��ôд �����������ִ�����������������棬���ְ�j=8������j����ס��9 
	printf("%d %d %d",i,j,k);
}
*/

/*
#include<stdio.h>
int main()
{
	int i=1,j=1,k=1;
	printf("%d\n",++i||++j&&++k);
	printf("%d %d %d",i,j,k);//������Ϊ2 1 1 
}
*/

/*
#include<stdio.h>
int main()
{
	int i,j;
	scanf("%d, %d",&i, &j);
	if (i==j)//!!!!!!!!==
	printf("һ����");
	else if (i>j)
	printf("i��");
	else if (i<j)
	printf("j��");
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
#include<stdio.h>//��24Сʱ��ת��Ϊ12Сʱ�� 
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
#include<stdio.h>//Ϊ�˿�Ѱ��ʱ������ĺ������ɺͽ���ʱ�� 
int main()
{
	int a,b,c,d,e,f;
	printf("������ʱ��"); 
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
#include<stdio.h>//�����ֵ��Сֵ 
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
#include<stdio.h>//�������������룬���������������� 
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
	for(i=5,j=i-1;i>0,j>0;--i,j=i-1)//����ȥ�ƺ�forѭ�����ڵڶ������������� 
	printf("%d,%d\n",i,j);
}
*/

/* 
#include<stdio.h>
int main()
{
	int i;
	for(i=0;i++<10;)//���12345678910���˴�����ǰ׺�����������123456789 
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
*/	//ע�������ϸ�������for�������ޣ�����

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
#include <stdio.h>//Լɪ�������� ?????????????????���� 
#define N 100
int main(void) 
{
    int n,m,k,i;
    int count;
    int a[N]={0};
    do{
        scanf("%d %d %d",&n,&k,&m);
    } while(k<1 || m<2 || n<m || n>100);//ȷ���û����������������ĿҪ�� 
    for(count=n;count>2;count--)//һֱѭ����ֻʣ������û�б����=1 
    {
        for(i=0;i<m;i++)
        {
            if(k+i>n)//ȷ���޳�һ�˺�ʼ��һ��ѭ��ʱ���������������е��˵������ 
            {
                k=k-n;
            }
            if(a[k+i]==1)//ȷ���Ѿ����޳����˲����ٱ����� 
            {
                k+=1;
                i-=1;//�൱�������˱��޳����ˣ�Ҫ����һ��forѭ�� 
            }
        }///���forѭ�����ô��ǣ�ȷ��ִ��һ���޳�ʱ���������Ѿ����޳��ģ�����ȷ������޳����µ�k 
        a[k+m-1]=1;//�����޳���������� 
        if(a[k+m]==0)
        {
            k=k+m;//��һ���޳����µ�k�������ٴν������forѭ�� 
        }
        else{
            k=k+m+1;//�ܿ��ѱ��޳��� 
        }
        for(i=0;;i++)//�������ٴν������forѭ����k 
        {
            if(k+i>n)
            {
                k=k-n;//
            }
            if(a[k+i]==0)
            {
                k=k+i;//ȷ�������ٴν���ѭ����k�����Ӧ���ѱ����˱�ǵ��� 
                break;///����for��break����if-else�������� 
            }
        }
    }    
    for(i=1;i<=n;i++)
    {
        if(a[i]==0)
        printf("%d ",i);//����������ֻ��ʣ����ĿҪ�����=0�����౻�޳��Ķ��Ѿ������=1 
    }
    return 0;
}
*/

/* 
#include<stdio.h>//쳲��������� 
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
    
