/* @JUDGE_ID:  841985  10195  C  "The Knights Of The Round Table" */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
double a, b, c, r, peremeter, p, area;

	while(scanf("%lf %lf %lf",&a,&b,&c) == 3) {

        if(a == 0 || b == 0 || c == 0)
        {
            r = 0.000;
        }
        else {
            peremeter = a+b+c;
            p = peremeter/2;
            area = sqrt(p*(p-a)*(p-b)*(p-c));
            r = 2*area/peremeter;
        }

		printf("The radius of the round table is: %0.3lf\n", r);

	}
	return 0;
}
