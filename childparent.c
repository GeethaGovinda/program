#include<stdio.h>
#include<unistd.h>

int main() {
   int pipefds[2];
   int returnstatus;
   int pid;
   char writemessages[1][20]={"Hello"};
   char readmessage[20];
   returnstatus = pipe(pipefds);
   if (returnstatus == -1) {
      printf("Unable to create pipe\n");
      return 1;
   }
   returnstatus = pipe(pipefds);
   if (returnstatus == -1) {
      printf("Unable to create pipe\n");
      return 1;
   }
   pid = fork();
   
   // Child process
   if (pid == 0) {
	   printf("Parent Process sent meassage to child process %s\n", writemessages[0]);
      write(pipefds[1], writemessages[0], sizeof(writemessages[0]));
      
      
   } else { //Parent process
      read(pipefds[0], readmessage, sizeof(readmessage));
      printf("parent Process Reading from pipe Message is %s\n", readmessage);
      
      
   }
   return 0;
}
