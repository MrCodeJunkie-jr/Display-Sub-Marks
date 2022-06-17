#include<stdio.h>
int main(){
	int a[5],i;
	char sub[5][20]={"C","Fit","Fom","Maths","English"};
	for (i=0;i<5;i++){
		printf("Enter marks of %s: ",sub[i]);
		scanf("%d",&a[i]);	
		}
		printf("\n");
		for (i=0;i<5;i++){
			printf("Marks of %s is %d \n",sub[i],a[i]);
			}
	return 0;
}

