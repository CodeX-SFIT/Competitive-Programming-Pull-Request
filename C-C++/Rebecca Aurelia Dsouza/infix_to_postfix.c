/*Conversion from infix to postfix - Rebecca Aurelia Dsouza*/

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
/*#include"charstack.h"*/
#define size 50

char stack[size];
int top = -1;

void conversion(char * , char * );
int getprecedence( char o);
void push(char s)
  {
      if(top== size-1)
	    {
		   printf("\n Stack is FULL!!! Insertion is not possible!");
	    }
	  else
	    {
		    top++;
		    stack[top] = s;
		}
  }

char pop()
  {
      if( top == -1)
	    {
		   printf("\n Stack is EMPTY!!! Deletion is not possible!");
			stack[top] = ' ';
		}
	  else
	    {
		    top--;
		}
	  return stack[top+1];
  }
  
char peep()
  {
      if( top == -1)
	    {
		    printf("\n Stack is EMPTY!!!");
			stack[top] = ' ';
		}
	 
	  return stack[top];
  }
		    
int main()
  {
      char infix[50];
	  char postfix[50];
	  	    
	  printf("\n Enter the infix expression: \n ");
	  gets(infix);
	  
	  conversion(infix,postfix);
	  
	  printf("\n The postfix expression is: \n ");
	  puts(postfix);  
	  
	  return 0;
  } 
  
void conversion( char infix[50], char postfix[50])
  {
      int length;
	  int i=0;
	  int j=0;
	  int op;
	  
	  length = strlen(infix);
	  infix[length] = ')';
	  infix[length + 1] = '\0';
	  
	  push('(');
	  
	  while(infix[i] != '\0')
	    {
		    if(infix[i] == '(')
			  {
			      push(infix[i]);
			  }
			else if( isalpha(infix[i]) || isdigit(infix[i]) )
			  {
			      postfix[j] = infix[i];
				  j++;
			  }
			else if(infix[i] == ')')
			  {
			      while(peep() != '(')
				    {
					    op = pop();
						postfix[j] = op;
						j++;
					}
				  pop();
			  }
		    else
			  {   
			      if( peep() == '(')
				    {
					    push(infix[i]);
					}
				  else
				    {
	                    if( getprecedence(peep()) >= getprecedence(infix[i]) ) 
				          {
					          op = pop();
						      postfix[j] = op;
						      j++;
					      }
				        push(infix[i]);
					}
			  }
			i++;
		}
		
		postfix[j] = '\0';
  }

int getprecedence( char o)
  {
      if( o == '/' || o == '*')
	    {
		    return 2;
		}
	 
	  if( o == '+' || o == '-')
	    {
		    return 1;
		} 
  } 
  

  

  

			
	  

					    
					    
			
	  
      

    

