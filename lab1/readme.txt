///////////////////////////////////////////////////////////////////////////////


assignment description
-------------------------------------------------------------------------------

The lab is a model of an inclass exercise.

the exerciese is that you have a ring of students
each with a table between them.

the instructor will place a stack of cards next to a student

the students job is to look at the table to the left and to the right.
compare the two. and distribute the cards so that they are equal
on both sides. EX: if you have 4 cards to your left and 2 to the right
redistribute the cards so you have 3 on the left and 3 on the right

if the cards do not redistribute evenly you are to place the remainder
on your right side EX: left = 3 and right = 2 --> left = 2 and right = 3
or left = 1 and right = 0 --> left = 0 and right = 1

each student will make a turn going from left to right 

after every student makes a turn a cycle is complete

continue for so many cycles or until the cards stop moving

///////////////////////////////////////////////////////////////////////////////


explination of why I chose to do things the way I did
-------------------------------------------------------------------------------

to me I saw the students as a function being run on a set of cards

to model the cards I will use an array. each index will represent a desk and
the "students" will fit inbetween the desks. this means that there will be one
more desk than students.

I created a pointer to access the array due to the fact that it had to be
created dynamially on the heap

because I am just running the same function over and over the program will live
in a for loop where I will run the function and update the array of cards

///////////////////////////////////////////////////////////////////////////////


description of variables and functions
-------------------------------------------------------------------------------

deskPtr
"""""""
    this pointer looks at an array created on the heap that holds intergers
    and is of size numOfStudents + 1
...............................................................................

int numOfCards and int numOfstudents
""""""""""""""""""""""""""""""""""""
    these are used to determine the size of the array used to store the number
    of cards in the simulation and the number of "desks" or items in the array
...............................................................................

int numOfCycles
"""""""""""""""
    this determines the maximum ammount of times to run the series of 
    funcitons that move the cards around
...............................................................................

bool distributeCards(int &left, int &right)
"""""""""""""""""""""""""""""""""""""""""""

takes two pointers to two intergers. compares the numbers and redistributes
them changing the left and right values.

the funciton wants both sides to be equal

if both sides are equal the function does nothing 

if it is not the function takes the sum of both sides and puts half
in left and half in right

in the event that an odd number of cards is presented the remaining extra card
will be on the rigth side

if an odd number of cards is already evenly split with the remainder on the right side 
the funciton does nothing

the function returns true if it doesnt have to do anyhting
and false if it has to change the left and right variables to be equal

...............................................................................

void printDesks(int* desks,int size)
""""""""""""""""""""""""""""""""""""

takes in an int pointer and an int size

these are used to print an array of values on the heap

it will itterate through the array and cout your array as a comma-seperated
list of values, fitting ten values on each line

EX. 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 
    11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 
    21

///////////////////////////////////////////////////////////////////////////////




