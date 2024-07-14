In this lecture : Learnt about the increments (post and pre) and how to execute the code blocks in for loop.in for loop there
the synatx is for(intialization,condition,update). 

#include<iostream>
using namespace std;
int main(){
	for(int i=0; i<=100;i++){ //here by using the for loop print 100 numbers
		cout<<i<<endl;
	}
	return 0;
}



Understanding Prefix and Postfix:

Prefix (++): This operator increments/decrements the variable's value before it's used in an expression.

Postfix (--): This operator increments/decrements the variable's value after it's used in an expression.
  
Types of Increment/Decrement:
      Pre-increment ( ++a ): Increases the value of a by 1 and then uses the new value.
      Post-increment ( a++ ): Uses the current value of a in the expression and then increases a by 1.
      Pre-decrement ( --a ): Decreases the value of a by 1 and then uses the new value.
      Post-decrement ( a-- ): Uses the current value of a in the expression and then decreases a by 1.
