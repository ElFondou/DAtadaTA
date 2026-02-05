#include <stdio.h>
#include <stdlib.h>

void HeapMemory(){
	int Size;
	scanf("%d", &Size);
	int *T;
	T = (int *)malloc(Size * sizeof(int));
	int i=0;
	while(i<Size){
		T[i]=i;
		printf("%d,%d\n",i,T[i]);
		if(i==Size){
			break;
		}
		i++;
	}
	
	free(T);
}

int main(){
	HeapMemory();
	return 0;      
}


/*


void StackMemory(){
	int T = 20;
	char Name[30]="Test run on Stack";
	
	printf("Number = %d\n", T);
	printf("Words = %s\n", Name);
}

int main(){
	StackMemory();
	return 0;      
}


*/



