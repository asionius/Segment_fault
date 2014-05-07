#include<stdio.h>
#include<stdlib.h>
struct student{
	char *name;
	int age;
};
void exc_esc(){
	int i;
	int *p = (int *)malloc(10*sizeof(int));
	for(i = 0; i < 10; i ++)
	  p++;
	*p = 10;
	printf("%d\n",*p);
}
void Noinit(){
	int a[5],i,s = 0;
	for(i = 0; i < 5; i++){
		a[i++] = i;
	}
	for(i = 0; i < 5; i ++)
		s += a[i];
	printf("%d\n",s);
}
void refreeAreuse(){
	int *p = (int *)malloc(10);
	int *pt =p;
	free(p);
	*pt = 10;
	printf("%d\n",*pt);
	free(pt);
}
int preventp(){
	struct student *asion;
	asion = (struct student *)malloc(sizeof(struct student));
	asion -> age = 22;
	free(asion);
	return asion -> age;
}
int main(){
	exc_esc();
	Noinit();
	refreeAreuse();
	printf("%d\n",preventp());
	return 0;
}
