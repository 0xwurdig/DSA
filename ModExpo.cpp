int modexponent(int x,int y,int M)
{
if(y==0)
return 1;
else if(y%2==0)
return modexponent((x*x)%M,y/2,M);
else
return (x*modexponent((x*x)%M,(y-1)/2,M))%M;
}
