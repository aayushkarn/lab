# Outputs (Lab 1 to 7)

#### Lab 1 [STACK]
- [array implementation of stack (1_1.c)](#11)
- [convert infix expression to postfix expression (1_2.c)](#12)
- [evaluate postfix expression (1_3.c)](#13)

#### Lab 2 [RECURSION]
- [find the factorial of a given number (2_1.c)](#21)
- [find the sum of n natural numbers (2_2.c)](#22)
- [generate Fibonacci sequence (2_3.c)](#23)
- [find the GCD of two numbers (2_4.c)](#24)
- [perform the multiplication of two natural numbers (2_5.c)](#25)
- [perform ab where a and b are natural numbers (2_6.c)](#26)
- [implement Tower Of Hanoi (2_7.c)](#27)

#### Lab 3 [QUEUE]
- [implement linear queue (3_1.c)](#31)
- [implement circular queue(3_2.c)](#32)

#### Lab 4 [LINKED LIST]
- [ implement linear linked list and doubly linked list to perform the following task (4_1a.c & 4_1b.c)](#41-minor-bugs)
- [implement stack using linked list (4_2.c)](#42)
- [implement queue using linked list (4_3.c)](#43)

#### Lab 5 [SORTING ALGORITHM]
- [implement merge sort and quick sort (5_1a.c & 5_1b.c) ](#51)

#### Lab 6 [SEARCHING ALGORITHM]
- [perform binary search using recursion (6_1.c)](#61)

#### Lab 7 [TREE]
- [implement binary search tree (BST) (7_1.c)](#71)

## Lab 1 [Stack]
### 1.1
WAP to perform array implementation of stack
```bash
1.Push
2.Pop
3.Top
4.Display
5.Exit
1
Enter Element: 5
Added 5 to Stack
1.Push
2.Pop
3.Top
4.Display
5.Exit
1
Enter Element: 6
Added 6 to Stack
1.Push
2.Pop
3.Top
4.Display
5.Exit
3
Top Element is 6
1.Push
2.Pop
3.Top
4.Display
5.Exit
4
Stack: 
5->6->
1.Push
2.Pop
3.Top
4.Display
5.Exit
2
Deleted item 6
1.Push
2.Pop
3.Top
4.Display
5.Exit
5
```
### 1.2
WAP to convert infix expression to postfix expression
``` bash 
Enter Expression a+b/(c-d)
a b c d - /+
```

### 1.3
WAP to evaluate postfix expression
```bash
Enter Expression: 456*+
Result: 34
```

## Lab 2 [RECURSION]
### 2.1
WAP to find the factorial of a given number
```bash
Enter n 5
Factorial of 5 is 120
```
### 2.2
WAP to find the sum of n natural numbers 
```bash
Enter number 4
Sum is 10
```

### 2.3
WAP to generate Fibonacci sequence
```bash
Enter number 5
Fibonacci Sequance: 
0
1
1
2
3
```

### 2.4
WAP to find the GCD of two numbers.
```bash
Enter x 20
Enter y 15
GCD 5
```

### 2.5
WAP to perform the multiplication to two natural numbers
```bash
Enter x, y 3 4
Product 12
```

### 2.6
WAP to perform a^b where a and b are natural numbers
```bash
Enter a, b 2 4
Result: 16
```

### 2.7
WAP to implement Tower Of Hanoi.
```bash 
Enter n Disk 3
Move disk 1 from A to B
move disk 2 from A to C
Move disk 1 from B to C
move disk 3 from A to B
Move disk 1 from C to A
move disk 2 from C to B
Move disk 1 from A to B
```

## Lab 3[QUEUE]
### 3.1
WAP to implement linear queue
```bash
1.Enqueue
2.DeQueue
3.Display
4.Exit
1
Enter Item 5
1.Enqueue
2.DeQueue
3.Display
4.Exit
1
Enter Item 3
1.Enqueue
2.DeQueue
3.Display
4.Exit
3
5->3->
1.Enqueue
2.DeQueue
3.Display
4.Exit
2
Deleted 5 
1.Enqueue
2.DeQueue
3.Display
4.Exit
3
3->
1.Enqueue
2.DeQueue
3.Display
4.Exit
4
```

### 3.2
WAP to implement circular queue
```bash
1.Enqueue
2.DeQueue
3.Display
4.Exit
1
Enter Item 3
Enqueued 3
1.Enqueue
2.DeQueue
3.Display
4.Exit
1
Enter Item 6
Enqueued 6
1.Enqueue
2.DeQueue
3.Display
4.Exit
2
Deleted 3
1.Enqueue
2.DeQueue
3.Display
4.Exit
3
Queue: 
6->
1.Enqueue
2.DeQueue
3.Display
4.Exit
4
```

## LAB 4[LINKED LIST]
### 4.1 (MINOR BUGS)
WAP to implement linear linked list and doubly linked list to perform the following task:
#### Linear Lined List
```bash
1.Insert node at beginning
2.Insert node at end
3.Insert node at specified position
4.Delete node at beginning
5.Delete node at end
6.Delete node at specified position
7.Display Data
8.Search element
9.Exit
Choice: 1
Enter Data 3
1.Insert node at beginning
2.Insert node at end
3.Insert node at specified position
4.Delete node at beginning
5.Delete node at end
6.Delete node at specified position
7.Display Data
8.Search element
9.Exit
Choice: 2
Enter Data 4
1.Insert node at beginning
2.Insert node at end
3.Insert node at specified position
4.Delete node at beginning
5.Delete node at end
6.Delete node at specified position
7.Display Data
8.Search element
9.Exit
Choice: 3
Enter Data 2
Enter Specified position 2
1.Insert node at beginning
2.Insert node at end
3.Insert node at specified position
4.Delete node at beginning
5.Delete node at end
6.Delete node at specified position
7.Display Data
8.Search element
9.Exit
Choice: 7
Linked List
3->4->2->NULL
Total node 3
1.Insert node at beginning
2.Insert node at end
3.Insert node at specified position
4.Delete node at beginning
5.Delete node at end
6.Delete node at specified position
7.Display Data
8.Search element
9.Exit
Choice: 6
Enter The Postion of the Node to be Deleted 1
1.Insert node at beginning
2.Insert node at end
3.Insert node at specified position
4.Delete node at beginning
5.Delete node at end
6.Delete node at specified position
7.Display Data
8.Search element
9.Exit
Choice: 7
Linked List
3->2->NULL
Total node 2
1.Insert node at beginning
2.Insert node at end
3.Insert node at specified position
4.Delete node at beginning
5.Delete node at end
6.Delete node at specified position
7.Display Data
8.Search element
9.Exit
Choice: 9
```
#### Doubly Linked List
```bash
1.Insert node at beginning
2.Insert node at end
3.Insert node at specified position
4.Delete node at beginning
5.Delete node at end
6.Delete node at specified position
7.Forward Display
8.Backward Display
9.Search element
10.Exit
Choice: 1
Enter element 5
1.Insert node at beginning
2.Insert node at end
3.Insert node at specified position
4.Delete node at beginning
5.Delete node at end
6.Delete node at specified position
7.Forward Display
8.Backward Display
9.Search element
10.Exit
Choice: 2
Enter element 6
1.Insert node at beginning
2.Insert node at end
3.Insert node at specified position
4.Delete node at beginning
5.Delete node at end
6.Delete node at specified position
7.Forward Display
8.Backward Display
9.Search element
10.Exit
Choice: 7
5->6->NULL
1.Insert node at beginning
2.Insert node at end
3.Insert node at specified position
4.Delete node at beginning
5.Delete node at end
6.Delete node at specified position
7.Forward Display
8.Backward Display
9.Search element
10.Exit
Choice: 8
6->5->NULL
```

### 4.2
WAP to implement stack using linked list
```bash
MENU
1.Push
2.Pop
3.Top
4.Display
5.Exit
1
Enter the element
2
MENU
1.Push
2.Pop
3.Top
4.Display
5.Exit
4
2

MENU
1.Push
2.Pop
3.Top
4.Display
5.Exit
5
```
### 4.3
WAP to implement queue using linked list
```bash
MENU
1.Insert
2.Delete
3.Display
4.Exit
1
Enter the element
4
MENU
1.Insert
2.Delete
3.Display
4.Exit
3
4

MENU
1.Insert
2.Delete
3.Display
4.Exit
2
The Item Removed is 4
MENU
1.Insert
2.Delete
3.Display
4.Exit
3


EMPTY QUEUE

MENU
1.Insert
2.Delete
3.Display
4.Exit
4
```
## Lab 5[SORTING ALGORITHM]
### 5.1
WAP to implement merge sort and quick sort
#### Merge Sort 
```bash
Enter Size of array 7
Enter Element 12
Enter Element 31
Enter Element 25
Enter Element 8
Enter Element 32
Enter Element 17
Enter Element 40
8 | 12 | 17 | 25 | 31 | 32 | 40 | 
```
#### Quick Sort
```bash
Enter Size of array 9
Enter Element 40
Enter Element 20
Enter Element 10
Enter Element 30
Enter Element 60
Enter Element 50
Enter Element 7
Enter Element 80
Enter Element 100
40 | 20 | 10 | 30 | 60 | 50 | 7 | 80 | 100 | 
7 | 10 | 20 | 30 | 40 | 50 | 60 | 80 | 100 | 
```
## Lab 6 [SEARCHING ALGORITHM]
### 6.1
WAP to perform binary search using recursion
```bash
Enter Size of array 3
Enter Element 2
Enter Element 1
2Enter Element 3
Enter Key to search 3
3 at index 2
```

## Lab 7 [Tree]
### 7.1
WAP to implement binary search tree (BST)
```bash
Preorder Traversal
50 30 20 40 70 60 80 
Inorder Traversal
20 30 40 50 60 70 80 
Postorder Traversal
20 40 30 60 80 70 50 
Search element 80
Found
```
