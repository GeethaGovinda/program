#include<stdio.h>
#include<stdlib.h>

struct node{
int data;
struct node *link;
};
typedef struct node ll;
int main()
{
FILE *fp;
ll l1,l2,l3;
l1.data=100;
l2.data=200;
l3.data=800;

l1.link=&l2;
l2.link=&l3;
l3.link=NULL;

fp = fopen("data", "wb");
  
fwrite(fp,"%d    ,%u  \n",l1.data,l1.link);
fwrite(fp,"%d    ,%u  \n",l2.data,l2.link);
fprintf(fp,"%d    ,%u  \n",l3.data,l3.link);
printf("Done writing to file ");
fclose(fp);

}
