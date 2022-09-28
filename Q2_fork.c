#include<stdio.h>
#include<unistd.h>
#include<sys/wait.h>
int main(){
	int a,b,c,pid;
	printf("Before Child Process\n");
	pid = fork();
	if(pid==0){
		printf("Child process id : %d\n", getpid());
		printf("Enter the number : ");
		scanf("%d", &a);
		if(a&1){
			printf("%d is odd\n",a);
		}

		else{
			printf("%d is even\n",a);		
		}
	}
	else{
		wait(NULL);
		printf("Parent process id : %d\n",getpid());
		printf("Enter two numbers : ");
		scanf("%d%d",&b,&c);
		if(b>c){
			printf("b=%d is greater \n",b);
		}
		else{
			printf("c=%d is greater \n",c);
		}
	}
	return 0;
}
