# postfix-evaluator
## Graeme Gengras

A simple postfix calculator. Compile with `make` and run with `./postfix`, clean the directory with `make clean`.

Sample output:

```
Graemes-MacBook-Pro:postfix-evaluator Graeme$ ./postfix
Enter expression to evaluate or q to quit
-> 4572+-*
Your expression evaluates to -16
Enter expression to evaluate or q to quit
-> 34+2*7/
Your expression evaluates to 2
Enter expression to evaluate or q to quit
-> 57+62-*
Your expression evaluates to 48
Enter expression to evaluate or q to quit
-> 42351-+*+
Your expression evaluates to 18
Enter expression to evaluate or q to quit
-> 42+351-*+
Your expression evaluates to 18
Enter expression to evaluate or q to quit
-> q
Graemes-MacBook-Pro:postfix-evaluator Graeme$
```

### Implementation
I implemented the postfix calculator using a single stack which in turn is implemented using a doubly linked list.  The user inputs a postfix expression and the numbers from it are pushed on to the stack as they are read.  When an operator is encountered, the top two numbers of the stack are popped and operated on and the result is pushed back on to the stack.  This continues until the end of the expression at which point there should be one number left which is the final result.


### Shortcomings
This isn't the most elegant code I've ever written and the program is still a bit finicky.  It doesn't handle whitespace well and could stand to be more robust to different input cases.  The modules (stack and linked list) could be more robust and the linked list in particular still needs a copy constructor and assignment operator which is bad form.  There are also some memory errors (but no leaks) that I don't quite understand.
