# task5
int divide(int divident,int divisor)
{
int n=divident,m=divisor,q=0,t=0;
n=abs(n);
m=abs(m);
for(i=31;i>0;--i)
{
if(t+(m<<i)<=n)
{
t=t+m<<i;
q=q|1<<i;
}
}
} 
