#include <stdio.h>
int main(){
	int a,b = 0,c = 0;
	float d;
	
	while(1){
        printf("enter a number : ");
		scanf("%d",&a);
		if(a <= 0){
		    break;
		}
		
		b+=a;
		c++;
	}
    d = (float)b/c;
    printf("Sum : %d Avg : %.2f\n",b,d);
    return 0;
}

