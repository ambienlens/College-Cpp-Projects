# C++ Laboratory Assignment

- Define a class Travel in C++ with the description given below:
Private Members: 
T_Code of type string 
No_of_Adults of type integer 
No_of_Children of type integer 
Distance of type integer 
TotalFare of type float 

Public Members: 
A constructor to assign initial values as follows: 
T_Codewith the NULL 
No_of_Adults as 0 
No_of_Children as 0 
Distance as 0 
TotalFare as 0 

A parameterized constructor to assign values of: T_Code, No_of_Adults, No_of_Children,  Distance. 
A function AssignFare() which calculates and assigns the value of the data member TotalFare  as follows: 
For each Adult: 
Fare (Rs) 
For Distance (KM)
500 
>=1000
300 
<1000 & >=500
200 
<500


For each Child the above fare will be 50% of the Fare mentioned in the above table. For example: 
If Distance is 750, No_of_Adults = 3 and No_of_Children =2 
The TotalFare should be calculated as No_of_Adults*300 + No_of_Children*150 A function ShowTravel() which displays the content of all the data members for Travel. 

- Define a class Account in C++ with the description given below: 
Private Members: 
AC_No of type integer 
Name of type string 
Type of type char (S – savings, C- current, etc.) 
Interest_Rate of type float 
Balance of type float 
Minimum_Balance of type float 
Counter of type integer (static to generate AC_No) 
Public Members: 
A constructor to assign initial values as follows: AC_No , Name,Type, Interest_Rate, Balance,  Minimum_Balance. 
A parameterized constructor to assign values of: AC_No, Name, Type, Interest_Rate, Balance,  Minimum_Balance. 
A function deposit(float) which add amount with the Balance. 
A function withdraw(float) which subtract amount from the Balance by maintaining minimum  balance. 
A function showAccountDetails() which show all details of an Account. 
A function getAC_No() to get the account number from the main().
Now create Array of object of Account type and design a menu driven program to perform the  following operations: 
a. Opening new account 
b. Deposit amount to a particular account number 
c. Withdraw amount from a particular account number. 
d. Show account details of a particular account number.

