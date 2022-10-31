#include<stdio.h>
#include <stdlib.h>
#include <string.h>
//
struct single {

  char dname[10],fcnt,fname[10][10];
  }dir;
  
 void main(){
 dir.fcnt=0;
 int ch;
 printf("Enter the name of the directory\n");
 scanf("%s",dir.dname);
 while(1){
 
 printf("Enter your choice 1.Create 2.display 3.search 4.delete 5.exit\n");
 
 scanf("%d",&ch);
 switch(ch){
 
 case 1: printf("Enter the name of the file\n");
         scanf("%s",dir.fname[dir.fcnt]);
         dir.fcnt++;
         printf("File created\n");
         break;
 
          

 case 2: printf("files in directory are\n");
 printf("%s\n",dir.dname);
         for(int i=0;i<dir.fcnt;i++)
         {
          printf("%s",dir.fname[i]);
         }
         break;       
 
 case 3 :printf("enter the file name to be searched\n");
         char fname[10];
         int flag=0;
         scanf("%s",fname);
         for(int i=0;i<dir.fcnt;i++)
         {
          if(!strcmp(dir.fname[i],fname))
          { flag=1;
          printf("file found\n");
          break;
          }}
          if(flag==0)
          printf("file not found\n");
          break;
          
 case 4: printf("enter the file name to be deleted\n");
         
         flag=0;
         scanf("%s",fname);
         int i;
         for( i=0;i<dir.fcnt;i++)
         {
          if(!strcmp(dir.fname[i],fname))
          {
          flag=1;
          printf("file deleted\n");
          break;
         
          }}
          if(flag==0)
          printf("file not found\n");
          
          else {strcpy(dir.fname[i],dir.fname[dir.fcnt-1]);
            dir.fcnt--;  } 
          break;    
                 
 case 5: exit(0);
         
 }
 }        
 }
