#include<stdio.h>
int main()
{

 File * fptr;
fptr = fopen("Process.txt","w");
if(fptr==NULL)
{
  printf("Error:");
exit(1);
}
printf("Process id :%d \n",getpid());
printf("Thread is: %d \n", gettid());
  fprintf(fptr,"%d");
   fclose(fptr);
return 0;
}

