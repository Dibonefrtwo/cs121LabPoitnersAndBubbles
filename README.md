# cs120LabBubblesAndPointers
BSU CS 120 course: lab 2

## OVERVIEW

The goal of this lab is to get a better understanding of the values and pointers of variables, when to use them and how to use them. The program will test our own written print function, swap function, and finally print out the steps of a bubble sort algorithm one line at a time. 

## FUNCTIONS TO BE BUILT 

The functions will be building on our own are, a print array function, sort intergers function, and a swap varaibles function. 

## FUNCTION ALGORITHMS

- Print Array Function
  - Define the Print Array Function, with the only argument being an array 
  - print the first half of the brackets
  - For I in MAX do 
   - Get the address of Array then add I assign this to a new temp variable 
   - Print value at temp variable commma and space 
  - after loop is done print the end of the bracket with the new line command

- Swap Function 
  - Define the Swap Function, with two arguments being two variable pointers
  - Create a new temp variable and it gets the value at varaible pointer number one
  - Variable pointer number one gets the value at variable pointer number two 
  - Variable pointer number two gets the value at the temp variable 

- Sort Function 
  - Define the sort function, with one argument being the array
  - Create integer varaibles i and j 
  - for I from zero to MAX -1 do 
   - for J from zero to MAX -1 do 
    - if array[i] is greater than array[j] 
    - swap function with array j and array i 
    - print array       
