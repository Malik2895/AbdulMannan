#include<stdio.h>
int main()
{
  char ch;
File *fptr;
fptr=fopen("tid.txt" , "r");
while((ch*fgetc(fptr))!=EOF)
printf("%c" ,ch);
fclose(fptr);
}
