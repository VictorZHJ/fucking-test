= 1 = 
#include <stdio.h>
int main()
{
 int amount, coin10, coin5, coin1;

 printf("請輸入要兌換的金額：");
 scanf("%d",&amount);
 coin10=amount/10;
 coin5=(amount%10)/5;
 coin1=((amount%10)%5)/1;
 printf("可兌換10元硬幣 %d 個\n",coin10);
 printf("可兌換5元硬幣 %d 個\n",coin5);
 printf("可兌換1元硬幣 %d 個\n",coin1);
 return 0;
}
考試版本
#include <stdio.h>
int main()
{
 int amount, coin10, coin5, coin1;

 scanf("%d",&amount);
 coin10=amount/10;
 coin5=(amount%10)/5;
 coin1=((amount%10)%5)/1;
 printf("%d\n",coin10);
 printf("%d\n",coin5);
 printf("%d\n",coin1);
 return 0;
}
= 2 =
#include <stdio.h>
#define PI 3.14159
int main()
{
 double r, volume, area;

 printf("請輸入半徑：");
 scanf("%lf",&r);
 volume=4.0/3.0*PI*r*r*r;
 area=4.0*PI*r*r;
 printf("球體體積為%.2f\n",volume);
 printf("表面積為%.2f\n",area);
 return 0;
}
考試版本
#include <stdio.h>
#define PI 3.14159
int main()
{
 double r, volume, area;

 scanf("%lf",&r);
 volume=4.0/3.0*PI*r*r*r;
 area=4.0*PI*r*r;
 printf("%.2f\n",volume);
 printf("%.2f\n",area);
 return 0;
}
= 3 =
#include <stdio.h>
#include <math.h>
int main()
{
 double x1, y1, x2, y2, distance, slope;

 printf("請輸入第 1 點座標(x1,y1):");
 scanf("%lf,%lf",&x1,&y1);
 printf("請輸入第 2 點座標(x2,y2):");
 scanf("%lf,%lf",&x2,&y2);
 distance=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
 slope=(y2-y1)/(x2-x1);
 printf("兩點的距離=%.2f\n",distance);
 printf("兩點的斜率=%.2f\n",slope);
 return 0;
}
考試版本
#include <stdio.h>
#include <math.h>
int main()
{
 double x1, y1, x2, y2, distance, slope;

 scanf("%lf,%lf",&x1,&y1);
 scanf("%lf,%lf",&x2,&y2);
 distance=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
 slope=(y2-y1)/(x2-x1);
 printf("%.2f\n",distance);
 printf("%.2f\n",slope);
 return 0;
}
= 4 =
#include <stdio.h>
#include <math.h>
int main()
{
 int a, b;
 double result;

 printf("請輸入數值 A:");
 scanf("%d",&a);
 printf("請輸入數值 B:");
 scanf("%d",&b);
 result=(double)a/(double)b*100;
 printf("A 是 B 的%.4f%%\n",result);
 return 0;
}
考試版本
#include <stdio.h>
#include <math.h>
int main()
{
 int a, b;
 double result;

 scanf("%d",&a);
 scanf("%d",&b);
 result=(double)a/(double)b*100;
 printf("%.4f%%\n",result);
 return 0;
}
= 5 =
#include <stdio.h>
int main()
{
 int x, y, a, b, r;
 printf("請輸入分式的分子及分母：");
 scanf("%d%d",&a,&b);
 if(b==0){
 printf("分母不可為 0");
 return 0;
 }
 x=a;
 y=b;
 while(y!=0)
 {
 r=x%y;
 x=y;
 y=r;
 }
 a=a/x;
 b=b/x;
 printf("化簡後的分式輸出為 %d %d\n",a,b);
 return 0;
}
考試版本
#include <stdio.h>
int main()
{
 int x, y, a, b, r;
 scanf("%d%d",&a,&b);
 if(b==0){
 printf("0");
 return 0;
 }
 x=a;
 y=b;
 while(y!=0)
 {
 r=x%y;
 x=y;
 y=r;
 }
 a=a/x;
 b=b/x;
 printf("%d %d\n",a,b);
 return 0;
}
= 6 =
#include<stdio.h>
int main()
{
 int i;
 for(i=40;i<128;i++){
 printf("ASCII:%d = %c \n",i,i);
 }
 return 0;
}
= 7 =
#include <stdio.h>
#include <math.h>
int main()
{
 int x, y;
 double z;

 printf("請輸入 x 值：");
 scanf("%d",&x);
 printf("請輸入 y 值：");
 scanf("%d",&y);
 z=(x*x*x*y-4*(x*x*y+y*y*y))/sqrt(x*y-1);
 printf("x=%d\n",x);
 printf("y=%d\n",y);
 printf("z=%f\n",z);
 return 0;
}
考試版本
#include <stdio.h>
#include <math.h>
int main()
{
 int x, y;
 double z;

 scanf("%d",&x);
 scanf("%d",&y);
 z=(x*x*x*y-4*(x*x*y+y*y*y))/sqrt(x*y-1);
 printf("%d\n",x);
 printf("%d\n",y);
 printf("%f\n",z);
 return 0;
}
= 8 =
#include <stdio.h>
#include <math.h>
int main()
{
 double kilometer, bill;

 printf("請輸入里程數：");
 scanf("%lf",&kilometer);
 if(kilometer<=2.0)
 bill=100;
 else
 bill=100+floor((kilometer-2.0)/0.5)*5;
 printf("計程車車費為%.0f 元\n",bill);
 return 0;
}
考試版本
#include <stdio.h>
#include <math.h>
int main()
{
 double kilometer, bill;

 scanf("%lf",&kilometer);
 if(kilometer<=2.0)
 bill=100;
 else
 bill=100+floor((kilometer-2.0)/0.5)*5;
 printf("%.0f\n",bill);
 return 0;
}
= 9 =
#include <stdio.h>
int main()
{
 int i,s=0, n;
 printf("請輸入 n 的值 : ");
 scanf("%d",&n);
 for(i=1;i<n;i++){
 s+=i;
 printf("%d+",i);
 }
 s+=n;
 printf("%d=%d",n,s);
 return 0;
}
考試版本
#include <stdio.h>
int main()
{
 int i,s=0, n;
 scanf("%d",&n);
 for(i=1;i<n;i++){
 s+=i;
 printf("%d+",i);
 }
 s+=n;
 printf("%d=%d",n,s);
 return 0;
}
= 10 =
#include <stdio.h>
int main()
{
 int i, j=1, s=0, n;
 do{
 printf("請輸入n值：");
 scanf("%d",&n);
 } while(n<0 || n%2==0);
 for(i=1; i<=n; i+=2)
 {
 s=s+(i*i)*j;
 j=j*-1;
 }
 printf("s= %d\n",s);
 return 0;
}
考試版本
#include <stdio.h>
int main()
{
 int i, j=1, s=0, n;
 do{
 scanf("%d",&n);
 } while(n<0 || n%2==0);
 for(i=1; i<=n; i+=2)
 {
 s=s+(i*i)*j;
 j=j*-1;
 }
 printf("%d\n",s);
 return 0;
}
= 11 =
#include <stdio.h>
#include <math.h>
double sum(int);
int main()
{
 int n;
 printf("請輸入一個整數n：");
 scanf("%d",&n);
 printf("多項式之結果=%f\n",sum(n));
 return 0;
}
double sum(int n)
{
 int i;
 double s=0;
 for(i=1; i<=n; i++)
 s=s+pow(-1,i+1)/(double)i;
 return s;
}
考試版本
#include <stdio.h>
#include <math.h>
double sum(int);
int main()
{
 int n;
 scanf("%d",&n);
 printf("%f\n",sum(n));
 return 0;
}
double sum(int n)
{
 int i;
 double s=0;
 for(i=1; i<=n; i++)
 s=s+pow(-1,i+1)/(double)i;
 return s;
}
= 12 =
#include <stdio.h>
int main()
{
int i, n, sum=0;
printf("輸入 n 值：");
scanf("%d", &n);
for(i=2; i<=n; i++)
 sum=sum+(i-1)*i;
 printf("1*2+2*3+3*4+...+(n-1)*n=%d", sum);
return 0;
}
考試版本
#include <stdio.h>
int main()
{
int i, n, sum=0;
scanf("%d", &n);
for(i=2; i<=n; i++)
 sum=sum+(i-1)*i;
 printf("%d", sum);
return 0;
}
= 13 =
#include <stdio.h>
int main()
{
 int n=0, s=0, k;
 printf("輸入k值：");
 scanf("%d",&k);
 while(s<=k)
 s+=++n;
 printf("n=%d\n",n);
 return 0;
}
考試版本
#include <stdio.h>
int main()
{
 int n=0, s=0, k;
 scanf("%d",&k);
 while(s<=k)
 s+=++n;
 printf("%d\n",n);
 return 0;
}
= 14 =
#include <stdio.h>
int main()
{
int i, n, data, sum=0;
float avg;
printf("請輸入n值：");
scanf("%d", &n);
for(i=1; i<=n; i++){
 printf("輸入第 %d 個整數：",i);
 scanf("%d", &data);
 sum = sum + data;
 }
avg=(float)sum/n;
printf("平均值為 %.2f ", avg);
return 0;
}
考試版本
#include <stdio.h>
int main()
{
int i, n, data, sum=0;
float avg;
scanf("%d", &n);
for(i=1; i<=n; i++){
 scanf("%d", &data);
 sum = sum + data;
 }
avg=(float)sum/n;
printf("%.2f ", avg);
return 0;
}
= 15 =
#include <stdio.h>
int main()
{
 int i, n;
 printf("請輸入一個正整數：");
 scanf("%d",&n);
 printf("其因數有 ");
 for(i=1; i<=n/2; i++)
 if(n%i==0)
 printf("%d\t",i);
 printf("%d\n",n);
 return 0;
}
考試版本
#include <stdio.h>
int main()
{
 int i, n;
 scanf("%d",&n);
 for(i=1; i<=n/2; i++)
 if(n%i==0)
 printf("%d\t",i);
 printf("%d\n",n);
 return 0;
}
= 16 =
#include <stdio.h>
int main()
{
int s,k;
 printf("輸入 1 個小於 100 的正整數：");
 scanf("%d",&k);
 while(k <= 0 || k >= 100){
 printf("請重新輸入小於 100 的正整數");
 scanf("%d",&k);
 }
 for(s=k ; s<=500 ; s+=k)
printf("%d ",s);
return 0;
}
考試版本
#include <stdio.h>
int main()
{
int s,k;
 scanf("%d",&k);
 while(k <= 0 || k >= 100){
 scanf("%d",&k);
 }
 for(s=k ; s<=500 ; s+=k)
printf("%d ",s);
return 0;
}
= 17 =
#include <stdio.h>
int main()
{
 int tsec, hour, minute, second;

 printf("請輸入準備轉換的秒數:");
 scanf("%d",&tsec);
 second=tsec%60;
 minute=(tsec/60)%60;
 hour=tsec/60/60;
 printf("hh:mm:ss = %02d:%02d:%02d\n",hour,minute,second);
 return 0;
}

考試版本
#include <stdio.h>
int main()
{
 int tsec, hour, minute, second;

 scanf("%d",&tsec);
 second=tsec%60;
 minute=(tsec/60)%60;
 hour=tsec/60/60;
 printf("%02d:%02d:%02d\n",hour,minute,second);
 return 0;
}
= 18 =
#include <stdio.h>
int main()
{
 int now_h, now_m, end_h, end_m, hour, minute;
 printf("目前時間：");
 scanf("%d:%d",&now_h,&now_m);
 printf("結束時間：");
 scanf("%d:%d",&end_h,&end_m);
 hour = end_h - now_h;
 minute = end_m - now_m;
 if(minute < 0){
 minute = minute + 60;
 hour = hour - 1;
 }
 if(hour < 0) hour = hour + 24;
 printf("剩下");
 if(hour != 0){
 printf("%d小時",hour);
 if(minute != 0)
 printf("%d分鐘",minute);
 }
 else
 printf("%d分鐘",minute);
 return 0;
}
考試版本
#include <stdio.h>
int main()
{
 int now_h, now_m, end_h, end_m, hour, minute;
 scanf("%d:%d",&now_h,&now_m);
 scanf("%d:%d",&end_h,&end_m);
 hour = end_h - now_h;
 minute = end_m - now_m;
 if(minute < 0){
 minute = minute + 60;
 hour = hour - 1;
 }
 if(hour < 0) hour = hour + 24;
 if(hour != 0){
 printf("%d ",hour);
 if(minute != 0)
 printf("%d ",minute);
 }
 else
 printf("%d ",minute);
 return 0;
}
= 19 =
#include <stdio.h>
int main()
{
 int time1_h, time1_m, time2_h, time2_m, day=0, hour, minute;
 printf("時間1：");
 scanf("%d:%d",&time1_h,&time1_m);
 printf("時間2：");
 scanf("%d:%d",&time2_h,&time2_m);
 hour=time1_h+time2_h;
 minute=time1_m+time2_m;
 if(minute >= 60){
 minute = minute - 60;
 hour = hour + 1;
 }
 if(hour >= 24){
 day = hour / 24;
 hour = hour % 24;
 }
 printf("相加時間為");
 if(day != 0) {
 printf("%d天", day);
 printf("%d小時", hour);
 }else if(hour != 0)
 printf("%d小時", hour);
 printf("%d分鐘", minute);
 return 0;
}
考試版本
#include <stdio.h>
int main()
{
 int time1_h, time1_m, time2_h, time2_m, day=0, hour, minute;
 scanf("%d:%d",&time1_h,&time1_m);
 scanf("%d:%d",&time2_h,&time2_m);
 hour=time1_h+time2_h;
 minute=time1_m+time2_m;
 if(minute >= 60){
 minute = minute - 60;
 hour = hour + 1;
 }
 if(hour >= 24){
 day = hour / 24;
 hour = hour % 24;
 }
 if(day != 0) {
 printf("%d ", day);
 printf("%d ", hour);
 }else if(hour != 0)
 printf("%d ", hour);
 printf("%d ", minute);
 return 0;
}
= 20 =
#include <stdio.h>
int main()
{
 int start,end,start_y,start_m,start_d,end_y,end_m,end_d;
 int months[]={0,31,59,90,120,151,181,212,243,273,304,334,365};
 int days,temp;
 printf("日期1：");
 scanf("%d",&start);
 printf("日期2：");
 scanf("%d",&end);
 if(start>end){
 temp=start;
 start=end;
 end=temp;
 }
 start_y=start/10000;
 start=start%10000;
 start_m=start/100;
 start_d=start%100;
 end_y=end/10000;
 end=end%10000;
 end_m=end/100;
 end_d=end%100;
 if(start_y==end_y){
 if(start_m==end_m){
 days=end_d-start_d;
 printf("相差%d天\n",days);
 }else{
 days=months[end_m-1]+end_d-months[start_m-1]-start_d;
 printf("相差%d天\n",days);
 }
 }else{
 days=(365-months[start_m-1]-start_d);
 days+=365*(end_y-start_y-1);
 days+=months[end_m-1]+end_d;
 printf("相差%d天\n",days);
 }
 return 0;
}
考試版本
#include <stdio.h>
int main()
{
 int start,end,start_y,start_m,start_d,end_y,end_m,end_d;
 int months[]={0,31,59,90,120,151,181,212,243,273,304,334,365};
 int days,temp;
 scanf("%d",&start);
 scanf("%d",&end);
 if(start>end){
 temp=start;
 start=end;
 end=temp;
 }
 start_y=start/10000;
 start=start%10000;
 start_m=start/100;
 start_d=start%100;
 end_y=end/10000;
 end=end%10000;
 end_m=end/100;
 end_d=end%100;
 if(start_y==end_y){
 if(start_m==end_m){
 days=end_d-start_d;
 printf("%d\n",days);
 }else{
 days=months[end_m-1]+end_d-months[start_m-1]-start_d;
 printf("%d\n",days);
 }
 }else{
 days=(365-months[start_m-1]-start_d);
 days+=365*(end_y-start_y-1);
 days+=months[end_m-1]+end_d;
 printf("%d\n",days);
 }
 return 0;
}
= 21 =
#include <stdio.h>
#include <string.h>
int main()
{
char str1[21], str2[21];
printf("請輸入字串 1：");
gets(str1);
printf("請輸入字串 2：");
gets(str2);
if(strcmp(str1,str2)==0)
printf("%d",strlen(str1));
else
printf("0");
return 0;
}

考試版本
#include <stdio.h>
#include <string.h>
int main()
{
char str1[21], str2[21];
gets(str1);
gets(str2);
if(strcmp(str1,str2)==0)
printf("%d",strlen(str1));
else
 printf("0");
return 0;
}
= 22 =
#include <stdio.h>
#include <math.h>
int main()
{
 double x1, x2, h, s;

 printf("請輸入 x1 值：");
 scanf("%lf",&x1);
 printf("請輸入 x2 值：");
 scanf("%lf",&x2);
 h=(x2-x1)/2.0;

s=h/3*(exp(x1)/(x1*x1+1)+4*exp(x1+h)/((x1+h)*(x1+h)+1)+exp(x2)/
(x2*x2+1));
 printf("S=%f\n",s);
 return 0;
}
考試版本
#include <stdio.h>
#include <math.h>
int main()
{
 double x1, x2, h, s;

 scanf("%lf",&x1);
 scanf("%lf",&x2);
 h=(x2-x1)/2.0;

s=h/3*(exp(x1)/(x1*x1+1)+4*exp(x1+h)/((x1+h)*(x1+h)+1)+exp(x2)/
(x2*x2+1));
 printf("%f\n",s);
 return 0;
}
= 23 =
#include <stdio.h>
#include <math.h>
double fun(double,double);
int main()
{
 double x;

 printf("請輸入x(x>0)值：");
 scanf("%lf",&x);
 printf("h=10^-1 , 微分值=%f\n",fun(x,pow(10,-1)));
 printf("h=10^-2 , 微分值=%f\n",fun(x,pow(10,-2)));
 printf("h=10^-3 , 微分值=%f\n",fun(x,pow(10,-3)));
 return 0;
}
double fun(double x, double h)
{
 return (log(x+h)-log(x))/h;
}
考試版本
#include <stdio.h>
#include <math.h>
double fun(double,double);
int main()
{
 double x;

 scanf("%lf",&x);
 printf("%f\n",fun(x,pow(10,-1)));
 printf("%f\n",fun(x,pow(10,-2)));
 printf("%f\n",fun(x,pow(10,-3)));
 return 0;
}
double fun(double x, double h)
{
 return (log(x+h)-log(x))/h;
}
= 24 =
#include <stdio.h>
#include <math.h>
int main()
{
 double a, b, c, perimeter, s, area;
 printf("請輸入三個數值：");
 scanf("%lf%lf%lf",&a,&b,&c);
 if((a>0 && b>0 && c>0) && (a+b>c && a+c>b && b+c>a))
 {
 perimeter=a+b+c;
 s=(a+b+c)/2;
 area=sqrt(s*(s-a)*(s-b)*(s-c));
 printf("三角形的周長=%f\n",perimeter);
 printf("三角形的面積=%f\n",area);
 }
 else
 printf("此三個數值無法構成三角形的三邊\n");
 return 0;
}
考試版本
#include <stdio.h>
#include <math.h>
int main()
{
 double a, b, c, perimeter, s, area;
 scanf("%lf%lf%lf",&a,&b,&c);
 if((a>0 && b>0 && c>0) && (a+b>c && a+c>b && b+c>a))
 {
 perimeter=a+b+c;
 s=(a+b+c)/2;
 area=sqrt(s*(s-a)*(s-b)*(s-c));
 printf("%f\n",perimeter);
 printf("%f\n",area);
 }
 else
 printf("0\n");
 return 0;
}
= 25 =
#include <stdio.h>
int main()
{
 int quantity, salary;

 printf("請輸入每月賣出產品的數量：");
 scanf("%d",&quantity);
 if(quantity<=20)
 salary=15000+quantity*380;
 else if(quantity<=40)
 salary=15000+quantity*420;
 else
 salary=15000+quantity*420+(quantity-40)/10*1500;
 printf("每月薪資為%d 元\n",salary);
 return 0;
}
考試版本
#include <stdio.h>
int main()
{
 int quantity, salary;

 scanf("%d",&quantity);
 if(quantity<=20)
 salary=15000+quantity*380;
 else if(quantity<=40)
 salary=15000+quantity*420;
 else
 salary=15000+quantity*420+(quantity-40)/10*1500;
 printf("%d\n",salary);
 return 0;
}
= 26 =
#include <stdio.h>
int main()
{
 int c=0, i=1, no, p;
 printf("請輸入一個正整數：");
 scanf("%d",&no);
 p=no;
 while(p-i>=0)
 {
 p=p-i;
 c++;
 i=i+2;
 }
 printf("%d 的平方根為 %d\n",no,c);
 return 0;
}
考試版本
#include <stdio.h>
int main()
{
 int c=0, i=1, no, p;
 scanf("%d",&no);
 p=no;
 while(p-i>=0)
 {
 p=p-i;
 c++;
 i=i+2;
 }
 printf("%d\n",c);
 return 0;
}
= 27 =
#include <stdio.h>
#include <math.h>
int main()
{
 int start_hour, start_min, end_hour, end_min;
 int total, fee;

 printf("停車開始時間：");
 scanf("%d:%d",&start_hour,&start_min);
 printf("停車結束時間：");
 scanf("%d:%d",&end_hour,&end_min);

total=(int)ceil(((end_hour*60+end_min)-(start_hour*60+start_min
))/30.0);
 if(total<=4)
 fee=total*30;
 else if(total<=8)
 fee=4*30+(total-4)*40;
 else
 fee=4*30+4*40+(total-8)*60;
 printf("需繳交的停車費為%d 元\n",fee);
 return 0;
}
考試版本
#include <stdio.h>
#include <math.h>
int main()
{
 int start_hour, start_min, end_hour, end_min;
 int total, fee;

 scanf("%d:%d",&start_hour,&start_min);
 scanf("%d:%d",&end_hour,&end_min);

total=(int)ceil(((end_hour*60+end_min)-(start_hour*60+start_min
))/30.0);
 if(total<=4)
 fee=total*30;
 else if(total<=8)
 fee=4*30+(total-4)*40;
 else
 fee=4*30+4*40+(total-8)*60;
 printf("%d\n",fee);
 return 0;
}
= 28 =
#include <stdio.h>
int main()
{
 int category, number, power;
 double bill;

 printf("請輸入用電類別(1~3)：");
 scanf("%d",&category);
 printf("請輸入使用度數：");
 scanf("%d",&number);
 switch(category)
 {
 case 1:
 if(number<=100)
 bill=number*2.4;
 else if(number<=300)
 bill=100*2.4+(number-100)*3.1;
 else
 bill=100*2.4+200*3.1+(number-300)*4.1;
 break;
 case 2:
 printf("請輸入契約馬力：");
 scanf("%d",&power);
 bill=power*138+number*1.83;
 break;
 case 3:
 if(number<=300)
 bill=number*5.9;
 else
 bill=300*5.9+(number-300)*6.7;
 }
 printf("電費=%f 元\n",bill);
 return 0;
}
考試版本
#include <stdio.h>
int main()
{
 int category, number, power;
 double bill;

 scanf("%d",&category);
 scanf("%d",&number);
 switch(category)
 {
 case 1:
 if(number<=100)
 bill=number*2.4;
 else if(number<=300)
 bill=100*2.4+(number-100)*3.1;
 else
 bill=100*2.4+200*3.1+(number-300)*4.1;
 break;
 case 2:
 scanf("%d",&power);
 bill=power*138+number*1.83;
 break;
 case 3:
 if(number<=300)
 bill=number*5.9;
 else
 bill=300*5.9+(number-300)*6.7;
 }
 printf("%f\n",bill);
 return 0;
}
= 29 =
#include <stdio.h>
int main()
{
int month;
printf("請輸入月份：");
scanf("%d",&month);
switch(month){
 case 3: case 4: case 5:
printf("春季\n"); break;
 case 6: case 7: case 8:
printf("夏季\n"); break;
 case 9: case 10: case 11:
printf("秋季\n"); break;
 case 12: case 1: case 2:
printf("冬季\n"); break;
 default:
printf("輸入錯誤\n");
}
 return 0;
}
考試版本
#include <stdio.h>
int main()
{
int month;
scanf("%d",&month);
switch(month){
 case 3: case 4: case 5:
printf("春季\n"); break;
 case 6: case 7: case 8:
printf("夏季\n"); break;
 case 9: case 10: case 11:
printf("秋季\n"); break;
 case 12: case 1: case 2:
printf("冬季\n"); break;
 default:
printf("輸入錯誤\n");
}
 return 0;
}
= 30 =
#include <stdio.h>
int main()
{
 int i;
 char string[1024], ch;
 printf("輸入字串：");
 scanf("%s", string);
 printf("編碼後為");
 i=0;
 while(string[i]!='\0'){
 ch=string[i];
 if(ch>='A' && ch<='Z')
 string[i]='A'+'Z'-ch;
 else
 string[i]='a'+'z'-ch;
 i++;
 }
 printf("%s", string);
 return 0;
}
考試版本
#include <stdio.h>
int main()
{
 int i;
 char string[1024], ch;
 scanf("%s", string);
 i=0;
 while(string[i]!='\0'){
 ch=string[i];
 if(ch>='A' && ch<='Z')
 string[i]='A'+'Z'-ch;
 else
 string[i]='a'+'z'-ch;
 i++;
 }
 printf("%s", string);
 return 0;
}



















