#include<unistd.h>
#include<string.h>
#include<stdio.h>
#include<sys/syscall.h>
#include<sys/types.h>
#include<stdlib.h>
int main()
{
  FILE *fptr;
  long int tid , pid;
char environment[100];
fptr=fopen("tid.txt","w");
pid=getpid();
fprintf(fptr,"Process id is: ");
fprintf(fptr,"%ld",pid);
tid=gettid();
fprintf(fptr,"Thread is : ");
fprintf(fptr ,"%ld",tid);
strcpy(environment ,getenv("USER"));
fprintf(fptr , "Environment Variable(user) is : ");
fprintf(fptr ," %c",environment);
return 0;
}



