#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <math.h>
#include "dynamicArray.h"

struct DynArr
{
	TYPE *data;		/* pointer to the data array */
	int size;		/* Number of elements in the array */
	int capacity;	/* capacity ofthe array */
};

/* param: s the string
   param: num a pointer to double
   returns: true (1) if s is a number else 0 or false.
   postcondition: if it is a number, num will hold
   the value of the number
*/
int isNumber(char *s, double *num)
{
	char *end;
	double returnNum;

	if(strcmp(s, "0") == 0)
	{
		*num = 0;
		return 1;
	}
	else 
	{
		returnNum = strtod(s, &end);
		/* If there's anythin in end, it's bad */
		if((returnNum != 0.0) && (strcmp(end, "") == 0))
		{
			*num = returnNum;
			return 1;
		}
	}
	return 0;  //if got here, it was not a number
}

/*	param: stack the stack being manipulated
	pre: the stack contains at least two elements
	post: the top two elements are popped and 
	their sum is pushed back onto the stack.
*/
void add (struct DynArr *stack)
{
	//stack = malloc(sizeof(struct DynArr));
	if(stack->size < 2){
		printf("\nnot enough operands for this\n");
		exit(1);
	}
		
	TYPE sum = 0.0;
	sum = stack->data[stack->size - 2] + stack->data[stack->size - 1];
	popDynArr(stack);
	popDynArr(stack);
	pushDynArr(stack,sum);

	/* FIXME: You will write this function */
}

/*	param: stack the stack being manipulated
	pre: the stack contains at least two elements
	post: the top two elements are popped and 
	their difference is pushed back onto the stack.
*/
void subtract(struct DynArr *stack)
{
	if(stack->size < 2){
		printf("not enough operands for this\n");
		exit(1);
	}
	TYPE difference = 0.0;
	difference = stack->data[stack->size -2] - stack->data[stack->size - 1];
	popDynArr(stack);
	popDynArr(stack);
	pushDynArr(stack,difference);
	
	/* FIXME: You will write this function */
}

/*	param: stack the stack being manipulated
	pre: the stack contains at least two elements
	post: the top two elements are popped and 
	their quotient is pushed back onto the stack.
*/
void divide(struct DynArr *stack)
{
	if(stack->size < 2){
		printf("not enough operands for this\n");
		exit(1);
	}
TYPE quotient = 0.0;
	quotient = stack->data[stack->size - 2] / stack->data[stack->size - 1];
	popDynArr(stack);
	popDynArr(stack);
	pushDynArr(stack,quotient);
   
	/* FIXME: You will write this function */
}
/*	param: stack the stack being manipulated
	pre: the stack contains at least two elements
	post: the top two elements are popped and 
	their product is pushed back onto the stack.
*/
void multiply(struct DynArr *stack)
{
	if(stack->size < 2){
		printf("not enough operands for this\n");
		exit(1);
	}
TYPE product = 0.0;
	product = stack->data[stack->size - 2] * stack->data[stack->size - 1];
	popDynArr(stack);
	popDynArr(stack);
	pushDynArr(stack,product);

	/* FIXME: You will write this function */
}
/*	param: stack the stack being manipulated
	pre: the stack contains at least two elements
	post: the top two elements are popped and 
	the power of the first to the second is pushed back onto the stack.
*/
void power_of(struct DynArr *stack)
{
	if(stack->size < 2){
		printf("not enough operands for this\n");
		exit(1);
	}
TYPE exp = 0.0;
	exp = pow(stack->data[stack->size - 2], stack->data[stack->size - 1]);
	popDynArr(stack);
	popDynArr(stack);
	pushDynArr(stack,exp);

	
}
/*	param: stack the stack being manipulated
	pre: the stack contains at least one element
	post: the top element is popped and 
	its square is pushed back onto the stack.
*/
void square(struct DynArr *stack)
{
TYPE sq1 = 0.0;
	sq1 = pow(stack->data[stack->size - 1], 2);
	popDynArr(stack);
	pushDynArr(stack,sq1);

	
}
/*	param: stack the stack being manipulated
	pre: the stack contains at least one element
	post: the top element is popped and 
	its cube is pushed back onto the stack.
*/
void cube(struct DynArr *stack)
{
TYPE cu1 = 0.0;
	cu1 = pow(stack->data[stack->size - 1], 3);
	popDynArr(stack);
	pushDynArr(stack,cu1);
  	
	
}
/*	param: stack the stack being manipulated
	pre: the stack contains at least one element
	post: the top element is popped and 
	its absolute value is pushed back onto the stack.
*/
void absolute_value(struct DynArr *stack)
{
TYPE abs = 0.0;
    if(stack->data[stack->size - 1] < 0)
	abs =stack->data[stack->size -1] * -1;
     else
     abs = stack->data[stack->size - 1];
	popDynArr(stack);
	pushDynArr(stack,abs);


	
}
/*	param: stack the stack being manipulated
	pre: the stack contains at least one element
	post: the top element is popped and 
	its square root is pushed back onto the stack.
*/
void square_root(struct DynArr *stack)
{
TYPE sqrt1 = 0.0;
	sqrt1 = pow(stack->data[stack->size - 1], .5);
	popDynArr(stack);
	pushDynArr(stack,sqrt1);

	
}
/*	param: stack the stack being manipulated
	pre: the stack contains at least one element
	post: the top element is popped and 
	e to its power is pushed back onto the stack.
*/
void exponentiate(struct DynArr *stack)
{
TYPE exp1 = 0.0;
	exp1 = pow(2.7182818,stack->data[stack->size - 1]);
	popDynArr(stack);
	pushDynArr(stack,exp1);

	
}
/*	param: stack the stack being manipulated
	pre: the stack contains at least one element
	post: the top element is popped and 
	its natural log is pushed back onto the stack.
*/
void natural_log(struct DynArr *stack)
{
TYPE ln1 = 0.0;
	ln1 = log(stack->data[stack->size - 1]);
	popDynArr(stack);
	pushDynArr(stack,ln1);
    	
	
}
/*	param: stack the stack being manipulated
	pre: the stack contains at least one element
	post: the top element is popped and 
	its log of base 10 is pushed back onto the stack.
*/
void log_ten(struct DynArr *stack)
{
TYPE log1 = 0.0;
	log1 = log10(stack->data[stack->size - 1]);
	popDynArr(stack);
	pushDynArr(stack,log1);

	
}
/*	param: stack the command line data
	pre: the stack contains at least one elements
	post: the calculator performs the correct operations on the numbers in the stack
*/
double calculate(int numInputTokens, char **inputString)
{
	int i;
	double * push_num = malloc(sizeof(double));
	double result = 0.0;
	char *s;
	struct DynArr *stack;

	//set up the stack
	stack = createDynArr(20);

	// start at 1 to skip the name of the calculator calc
	for(i=1;i < numInputTokens;i++) 
	{
		s = inputString[i];

		// Hint: General algorithm:
		// (1) Check if the string s is in the list of operators.
		//   (1a) If it is, perform corresponding operations.
		//   (1b) Otherwise, check if s is a number.
		//     (1b - I) If s is not a number, produce an error.
		//     (1b - II) If s is a number, push it onto the stack

		if(strcmp(s, "+") == 0)
			add(stack);
		else if(strcmp(s,"-") == 0)
			subtract(stack);
		else if(strcmp(s, "/") == 0)
			divide(stack);
		else if(strcmp(s, "x") == 0)
			multiply(stack);
			/* FIXME: replace printf with your own function */
			//printf("Multiplying\n");
		else if(strcmp(s, "^") == 0)
			power_of(stack);
			/* FIXME: replace printf with your own function */
			//printf("Power\n");
		else if(strcmp(s, "^2") == 0)
			square(stack);
			/* FIXME: replace printf with your own function */
			//printf("Squaring\n");
		else if(strcmp(s, "^3") == 0)
			cube(stack);
			/* FIXME: replace printf with your own function */
			//printf("Cubing\n");
		else if(strcmp(s, "abs") == 0)
			absolute_value(stack);
			/* FIXME: replace printf with your own function */
		//	printf("Absolute value\n");
		else if(strcmp(s, "sqrt") == 0)
			square_root(stack);
			/* FIXME: replace printf with your own function */
		//	printf("Square root\n");
		else if(strcmp(s, "exp") == 0)
			exponentiate(stack);
			/* FIXME: replace printf with your own function */
		//	printf("Exponential\n");
		else if(strcmp(s, "ln") == 0)
			natural_log(stack);
			/* FIXME: replace printf with your own function */
		//	printf("Natural Log\n");
		else if(strcmp(s, "log") == 0)
			log_ten(stack);
			/* FIXME: replace printf with your own function */
		//	printf("Log\n");
		else 
		{
					//printf("hi");
			
			if(strcmp(s,"pi") == 0)
				s = "3.14159265";
			else if(strcmp(s,"e") == 0)
				s = "2.7182818";
		    if(isNumber(s,push_num)){
				pushDynArr(stack, *push_num);
			}
			else
			{printf("that is not a valid input.\n");
			return 0.0;}

			// FIXME: You need to develop the code here (when s is not an operator)
			// Remember to deal with special values ("pi" and "e")
			
		}
	}	//end for 
	if(stack -> size > 1){
		printf("\nYou used a wrong number of operands\n");
		return 0.0;
	}
	else{
		result = stack->data[0];
	printf("%f", result);
	}
	/* FIXME: You will write this part of the function (2 steps below) 
	 * (1) Check if everything looks OK and produce an error if needed.
	 * (2) Store the final value in result and print it out.
	 */
	
	return result;
}

int main(int argc , char** argv)
{

	// assume each argument is contained in the argv array
	// argc-1 determines the number of operands + operators
	if (argc == 1)
		return 0;

	calculate(argc,argv);
	return 0;
}
