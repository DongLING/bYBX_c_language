#include <stdio.h>
#include <math.h>

int main(){
    double a,b,c,tmp,x1,x2;
/*define three input numbers (a,b,c); a temporary varible tmp and two function's results x1,x2.*/
    printf("\nPlease input three numbers (a,b,c):");
    scanf("%f,%f,%f",&a,&b,&c);
    tmp=(double)sqrt(b*b-(4*a*c));
    printf("%f",tmp);
    /*if(tmp>0)
       {x1=(-b+tmp)/(2*a);
	x2=(-b-tmp)/(2*a);
	printf("There are two results x1=%f,x2=%f\n",x1,x2);}
    else if (tmp==0)
	{x1=x2=-b/(2*a);
	 printf("There is only result x1=x2=%f\n",x1);}
	 else printf("No result for the function\n");*/
    return 0;
}
