----------------------------------- Q7)Write a C Program to copy elements from stack to queue --------------------



#include <stdio.h>
int stack[5], top = -1, choice = 0, size = 5, element;

int f = 0, r = -1, size1 = 6;

int queue[6];
void enqueue();
void print();
int
main () 
{
  
    //int stack[5]={1,2,3,4}; // Cannot be done like this
    
 
while (choice != 5)
    
    {
      
menu ();
      
scanf ("%d", &choice);
      
switch (choice)
	
	{
	
case 1:
	  
if (top == size - 1)
	    
	    {
	      
printf ("\n Stack Full Cannot Push ");
	      
break;
	    
}
	  
	  else
	    
	    {
	      
push ();
	    
}
	  
break;
	
 
case 2:
	  enqueue ();
	  
break;
	
 
case 3:
	  printS ();
	  break;
	
 
case 4:
	  print ();
	  break;
	
 
case 5:
	  choice = 5;
	  break;
	
default:
	  printf ("\n Wrong choice");
	  
break;
	
}
    
 
 
}
  
 
 
 
 
return 0;

}


void
menu () 
{
  
printf ("Enter your choice\n");
  
printf
    ("1.Push \n 2. copy from stack to queue \n 3. Print stack \n 4.Print queue \n 5.exit\n");
  
return;

}


void push () 
{
  
printf ("Enter element to push");
  
scanf ("%d", &element);
  
++top;
  
stack[top] = element;
  
printf ("Pushed %d", element);
  
return;

}


 
void printS () 
{
  
printf ("-------Stack is ------- \n");
  
for (int i = top; i >= 0; i--)
    {
      
printf ("\n %d \n", stack[i]);
    
} 
}
 
void enqueue () 
  {
    
 
if ((r == size - 1))
      
    {
	
        printf ("queue full");
	
        return;
      
    }
    
 
for (int i = top; i >= 0; i--)
      
     {
    	
    ++r;
    	
    queue[r] = stack[i];
          
    } 
 
printf ("Queued Data\n");
  
 
} 
void print ()
  {
    
 
 
for (int i = f; i <= r; i++)
    {
	
printf ("%d \t ", queue[i]);
	
    } 
} 
