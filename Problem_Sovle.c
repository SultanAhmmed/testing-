#include<stdio.h>
#include<math.h>
int main(){
    int a,b,c;
    double s,area;

    scanf("%d%d%d",&a,&b,&c);

    s = (float)(a+b+c)/2;
    area = sqrt(s*(s-a)*(s-b)*(s-c));
    printf("%.3lf\n",area);
}
