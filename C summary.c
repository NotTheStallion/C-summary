// I would like to point out that this is only for my personal use and it is the proprety of Mike Dane
// https://www.mikedane.com/programming-languages/c/in-one-video/
// However i did add some notes and commands here and there.


// Dans le shell.
# Pour compiler example-01.c en example-01
cc -std=c99 -Wall -o example-01 example-01.c
# Pour executer
./example-01

__________________________________________________________________ Imported Functions __________________________________________________

#include <string.h>
unsigned int strlen(char* str);   // Longuer d'une chaine de char  printf("%zu",strlen(str))
int strcmp(char* s1, char* s2);   // comparer deux char , Retourne: <0 plus petit, 0 pareil, >0 plus grand
char *strcpy(char *dst, char *src); // Copier une chaine de char

#include <stdlib.h>
int atoi(char* str);     // Convertir chaine de char en entier
float atof(char* str);   // Convert string chain to float
     
     
________________________________________________________________________ Printing ___________________________________________________________________________________

printf("Hello\n");
printf("World");
printf("!\n");

printf("mot1\tmot2\tmot3");
printf("val1\tval2\tval3");
//Creates a tables by adjusting the spaces and putting the mot1 in the same column.
___________________________________________________________________ Variables and Data Types ________________________________________________________________________


/*
Names are case-sensitive and may begin with:
     letters, _
After, may include
     letters, numbers, _
Convention says
     Start with a lowercase word, then additional words are capitalized
     ex. myFirstVariable
*/
// Char can not be returned in a function
char testGrade = 'A';    // single 8-bit character.
char name[] = "Mike";    // array of characters (string)

// you can make them unsigned by adding "unsigned" prefix
short age0 = 10;         // atleast 16-bits signed integer
int age1 = 20;           // atleast 16-bits signed integer (not smaller than short)
long age2 = 30;          // atleast 32-bits signed integer
long long age3 = 40;     // atleast 64-bits signed integer
// 30=30 deicmale
// 0x42=66 hexadécimales
// 042=34 octales
int ord = 'A'; //le nombre du truc qui resemble à 'A'
printf("%d %c",ord ,ord);


float gpa0 = 2.5;       // single percision floating point
double gpa1 = 3.5;       // double-precision floating point
long double gpa2 = 3.5;  // extended-precision floating point

int isTall;             // 0 if false, non-zero if true
isTall = 1;

testGrade = 'F';

printf("%s, your grade is %c \n", name, testGrade);
/*
%c	character
%d	integer number (base 10)
%e	exponential floating-point number
%f	floating-point number
%g   the most compatible float representation. (float or exponential)
%i	integer (base 10)
%o	octal number (base 8)
%s	a string of characters
%u	unsigned decimal (integer) number
%x	number in hexadecimal (base 16)
%%	print a percent sign
\%	print a percent sign
*/

double f = 1.0 / 3.0;
printf("%5.2lf\n", f);
// Nombre caractères minimum
// .
// Nombre maximum de décimales

int i = 1;
printf("%5.2d\n", i);
// .
// Nombre minimum de chiffres

________________________________________________________________ Casting and Converting __________________________________________________________________________


printf("%d \n", (int)3.14);
printf("%f \n", (double)3 / 2);


_______________________________________________________________________ Pointers _________________________________________________________________________________


int num = 10;
printf("%p \n", &num);

int *pNum = &num;
printf("%p \n", pNum);
printf("%d \n", *pNum);


________________________________________________________________________ Numbers ___________________________________________________________________________


printf("%d \n", 2 * 3);       // Basic Arithmetic: +, -, /, *
printf("%d \n", 10 % 3);      // Modulus Op. : returns remainder of 10/3
printf("%d \n", 1 + 2 * 3);   // order of operations
printf("%f \n", 10 / 3.0);    // int's and doubles


int num = 10;
num += 100;                   //t +=, -=, /=, *=
printf("%d \n",num);

num++;
printf("%d \n", num);

printf("%f \n", pow(2, 3));
printf("%f \n", sqrt(144));
printf("%f \n", round(2.7));


______________________________________________________________________ User Input _______________________________________________________________________________


char name[10];
printf("Enter your name: ");
fgets(name, 10, stdin);
printf("Hello %s! \n", name);

int age;
printf("Enter your age: ");
scanf("%d", &age);
printf("You are %d \n", age);

char grade;
printf("Enter your grade: ");
scanf("%c", &grade);
printf("You got an %c on the test \n", grade);

double gpa;
printf("Enter your gpa: ");
scanf("%lf", &gpa);
printf("Your gpa is %f \n", gpa);

// In shell : ./file.c word1 word2
// argc: number of arguments [3]
// argv: tableau of arguments (the first arg is the name of the file) [file.c , word1 ,word2]




_________________________________________________________________________ Arrays _______________________________________________________________________________


// int luckyNumbers[6];
int luckyNumbers[] = {4, 8, 15, 16, 23, 42};
//        indexes:    0  1  2   3   4   5
luckyNumbers[0] = 90;
printf("%d \n", luckyNumbers[0]);
printf("%d \n", luckyNumbers[1]);

__________________________________________________________________ 2 Dimensional Arrays ________________________________________________________________________


// int  numberGrid[2][3];
int numberGrid[2][3] = { {1, 2, 3}, {4, 5, 6} };
numberGrid[0][1] = 99;

printf("%d \n", numberGrid[0][0]);
printf("%d \n", numberGrid[0][1]);

________________________________________________________________________ Functions _____________________________________________________________________________


int addNumbers(int num1, int num2);

int main(){
     int sum = addNumbers(4, 60);
     printf("%d \n", sum);

     return 0;
}

int addNumbers(int num1, int num2){
     return num1 + num2;
}
// The firts word of the definition of the function is the type it returns , can be void (returns nothing) etc

return function(args) ? val1 : val2 ; // Means if function(args) trues return val1 else return val2.
_______________________________________________________________________ If Statements ___________________________________________________________________________


int isStudent = 0;
int isSmart = 0;

if(isStudent != 0 && isSmart != 0){
     printf("You are a student\n");
} else if(isStudent != 0 && isSmart == 0){
     printf("You are not a smart student\n");
} else {
     printf("You are not a student and not smart\n");
}

// >, <, >=, <=, !=, ==
if(1 > 3){
     printf("number omparison was true\n");
}

if('a' > 'b'){
     printf("character comparison was true\n");
}


_____________________________________________________________________ Switch Statements _________________________________________________________________________

//The condition section only  accepts integrers
     //in this example we call the code ASCII of the letters
     
char myGrade = 'A';
switch(myGrade){
     case 'A': // we only put cases for the variable myGrade (! no conditions)
          printf("You Pass\n");
          break;
     case 'F':
     case 'f':                         // if myGrade is F OR f
          printf("You fail\n");
          break;
     default:
          printf("Invalid grade\n");
}


 _______________________________________________________________________ While Loops __________________________________________________________________________
 
 
int index = 1;
while(index <= 5){
     printf("%d \n", index);
     index++;
}

index = 1;
do{
     printf("%d \n", index);
     index++;
}while(index <= 5);


__________________________________________________________________________ For Loops _________________________________________________________________________


for(int i = 0; i < 5; i++){
     printf("%d \n", i);
}


___________________________________________________________________________ Structs ___________________________________________________________________________


struct Book{
     char title[100];
     char author[100];
};

typedef struct{
     char title[100];
     char author[100];
} _Book; 


int main(){

     struct Book book1;  // _Book book1;
     book1.numPages = 600;
     strcpy( book1.title, "Harry Potter" );
     strcpy( book1.author, "JK Rowling");

     printf("%s \n", book1.title);

     return 0;
}

// _Book* ptr_book;
// ptr_book->title  (similar to) (*ptr_book).title
// If * is next to type it means the variable is a pointer to a memory box holding that type. Ex: Float** ptr (means ptr is a pointer [because * next to type Float*] to a Float*)
// If * is next to variable it removes a pointer (follows pointer path one time) 

___________________________________________________________________
     
     
enum color {
     black,
     blue,
     red
};

typedef enum {
     black,
     blue,
     red
} _color;

enum color c = blue +1
//la nouvelle valeur de C est "red"

// if _color is defined a type of enum (typedef enum) it no longer necessary to specify it is an enum at every occurance
_color color1 = black;
