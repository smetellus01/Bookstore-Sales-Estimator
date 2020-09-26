/* ========================================================================== */
/* PROGRAM Book Store Sales Estimator
   AUTHOR: <Sebastian Metellus>
   FSU MAIL NAME: <SEM20D>
   RECITATION SECTION NUMBER: <7>
   RECITATION INSTRUCTOR NAME: <Faith>
   COP 3363 - Fall 2020 
   PROJECT NUMBER: 2 
   DUE DATE: Wednesday 9/23/2020
   PLATFORM: g++ / UNIX OS

SUMMARY

A college bookstore wants to estimate business for next term. The bookstore needs a 
program to estimate the profit for their books, which they buy for 80% of the original cost.
The bookstore realizes that different conditions and course requirements affect the selling
points of their inventory. The program will output the bookstores' profits based on the 
conditions outlined in the program and the respective size and cost of each individual order.

INPUT

The user is asked to enter a book ID number, cost per copy, volume on hand,
and expected enrollment. The user is also asked two-option questions with the choice 
of the book being required, 'R' or suggested, 'S'. The program also asks if the books
are new, 'N' or old, 'O'. 

OUTPUT

The output is the total number of books to order, id of the book, total cost of the respective order,
and the expected profit on books ordered.

ASSUMPTIONS

All input data is valid and correctly entered by the user.  
The number of books to order is equal to the enrollment times the category discount minus the book volume
ALl books ordered must be rounded upwards, even if it's below 0.5

/

/* ========================================================================== */
/* HEADER FILES */

#include <iostream>
#include <cmath>
using namespace std;

/* ========================================================================== */ 
/* MAIN FUNCTION */

int main()
{

// Introduction Message
cout<<"***********************************";
cout<<"WELCOME TO THE BOOKSTORE ORDER ESTIMATION PROGRAM!";
cout<<"***********************************";
cout<<"\n";

// Integers / Doubles / Char / Survey Questions
int id, // id of book
volume, // volume of book
enrollment; // total enrollment 


double 
cost, // cost of book
totalCost, // bookOrder times the cost
sellingPrice, // totalCost minus 80%
totalProfit, // sellingPrice minus totalCost
bookOrder, // enrollment times discount minus volume
orderCost; // cost times bookOrder

char 
requirement, // letter value input for R or S
condition; // letter value input for N or O

// reads input data from the keyboard
cout<<"Enter the book ID number -> ";
cin>>id;

cout<<"Enter the book's cost per copy -> ";
cin>>cost;

cout<<"Enter the current volume on hand -> ";
cin>>volume;

cout<<"Enter the expected class enrollment -> ";
cin>>enrollment;

// Coding for Condition and Requirement
cout<<"Is the book required or suggested? Enter 'R' or 'S' ->";
cin>>requirement;

cout<<"Is the book new (has been used before) or old (has not)? Enter 'N' or 'O' ->";
cin>>condition;

// If Statements

if (requirement == 'R' && condition == 'N'){ // book is new and required
    
bookOrder = ceil(enrollment * 0.9 - volume); // ceil rounds bookOrder up to next integer

} else if

(requirement == 'R' && condition == 'O'){ // book is old and required

bookOrder = ceil(enrollment * 0.65 - volume);
    
} else if

(requirement == 'S' && condition == 'N'){ // book is new and suggested

bookOrder = ceil(enrollment * 0.4 - volume);
    
} else if

(requirement == 'S' && condition == 'O'){ // book is suggested and old
    
bookOrder = ceil(enrollment * 0.2 - volume);

}

// Conditional statement to prevent negative numbers

if(bookOrder < 0){ 
    
bookOrder = 0;

}

// Calculate Total Order Cost / Profit on Order / Book Order

totalCost = bookOrder * cost;
sellingPrice = totalCost / 0.8;
totalProfit = sellingPrice - totalCost;
orderCost = cost * bookOrder;


// Closing Screen and Message

cout<<" BOOK ORDER ESTIMATION SUMMARY";
cout<<"\n";
cout<<" ----------------------------- ";
cout<<"\n";

cout<<"Information for book ID:#"<<id<<endl;
cout<<"Number of Books to Order:"<<bookOrder<<endl;

// Terminate the program early if no books are ordered

if (bookOrder > 0){
    
    orderCost = cost * bookOrder;
    totalProfit - sellingPrice - totalCost;
    
// Prints the remaining two lines    
    
    cout<<"Total Cost of Order:$"<<orderCost<<endl;
    cout<<"Expected Profit on Books Ordered:$"<<totalProfit<<endl;
}

cout<<"Bookstore program terminated."<<endl;

return 0;
}

/* ========================================================================== */ 
/*                      E N D   O F   P R O G R A M                           */
/* ========================================================================== */