#include<stdio.h>
#include<unistd.h>
int main(){
int n,sz;
printf("Enter the number of elements you want in your array\n");
scanf("%d",&sz);
int a[sz];
for(int i=0;i<sz;i++)
scanf("%d",&a[i]);
n=fork();
if(n>0){
printf("This is the parent process\n");
int sumo=0;
for(int i=0;i<sz;i++){
if(i%2!=0)
sumo+=a[i];
}
printf("The sum of odd position elements is %d\n\n",sumo);
}
else{
printf("This is the child process\n");
int sume=0;
for(int i=0;i<sz;i++){
if(i%2==0)
sume+=a[i];
}
printf("The sum of even position elements is %d\n",sume);
}
return 0;
}
