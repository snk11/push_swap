# INTRODUCTION
```
This is a console application which can sort a list with a minimum of operations.
The sort is realised by switching elements with only two list (list a an list b), in the beginning the list not sorted is stored in list a, the list b is empty.
At the end , after the computation, we will have the sorted list in the lis a, the list b must be empty.

the differents operations on the lists are:
pa : push the head element of list a to the list b in the head position.
pa : push the head element of list b to the list a in the head position.  
ra : put the head element of list a at the tail position in the same list.
rb : put the head element of list b at the tail position in the same list.
rra: put the tail element of list a at the head position in the same list.
rrb: put the tail element of list b at the head position in the same list.
sa:  switch the two first head elements of the list a (so the first element become the second element and the second become the first).
sb:  switch the two first head elements of the list b (so the first element become the second element and the second become the first).

```

# MAKEFILE
```
to make the exe file called push-swap:
make

to recomplile all:
make re

to clean .o files:
make clean

to clean .o files and exe file:
make fclean
```

# HOW IT WORKS
```
Put in argument the list of interger number as:

For example, the result of the command (with option -l)"./push-swap -l 8 9 1 3 5 10 " is:
ra
ra
pb
pb
pb
ra
pa
pa
pa
1 3 5 8 9 10

So we have a sort with a minimum of 9 operations.

```
