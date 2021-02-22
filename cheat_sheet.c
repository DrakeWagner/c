#include <stdio.h> //standard io
#include <stdlib.h>  //standard lib (headers)

int addNumbers(int numb1, int numb2){
    return numb1 + numb2;
}

struct Student{
    int age;
    double gpa;
    char grade;
};

// anything inside main() will run as part of the code
int main() {

    // V_A_R_I_A_B_L_E_S

    char test_grade = 'A'; // single 8-bit character
    char name[] = "Drake"; // array of characters (string)

    // integers:
    short var0 = 10;        // atLeast 16-bits signed int
    int var1 = 20;          // atLeast 16-bits signed int
    long var2 = 30;         // atLeast 32-bits signed int
    long long var3 = 40;    // atLeast 64-bits signed int

    // floats:
    float var4 = 2.5;       // single precision floating point
    double var5 = 3.5;      // double precision floating point
    long double var6 = 5.5; // extended-precision floating point

    // boolean
    int isTall;              // 0 for false, non-zero for true
    isTall = 1;
    //const int IS_OLD;        // constants cannot be modified
  
    test_grade = 'D';


    // P_R_I_N_T_I_N_G

    printf("%s, your grade is %c \n", name, test_grade);
    /*

    %c  character
    %d  int number (base 10)
    %e  exponential float
    %f  float
    %i  int (base 10)
    %o  octal number (base 8)
    %s  string
    %u  unsigned decimal int number
    %x  hexadecimal number (base 16)
    %%  print a percent sign

    */


    // T_Y_P_E__C_A_S_T

    printf("%d \n", (int)3.11);
    printf("%f \n", (double)3 / 2);


    // P_O_I_N_T_E_R_S
    // memory address
    int num = 10;
    printf("%p \n", &num);  // ampersand tells c to print mem address

    int *pNum = &num;       // assigning pointer to a variable
    printf("%p \n", pNum);
    printf("%d \n\n", *pNum); // dereferences pointer (gives value)


    // N_U_M_B_E_R_S
    
    printf("%d \n", 2 * 3);
    printf("%d \n", 10 % 3);     // remainder of 10/3 (modulus operator)
    printf("%d \n", 4 + 1 * 3); 
    printf("%f \n", 10/3.11);

    int numm = 10;
    numm += 100;              // +=, -=, /=, *=
    printf("%d \n", numm);

    numm++;                   // increments operator (goes up by one)
    printf("%d \n", numm);
    numm--;
    printf("%d \n", numm);


    // U_S_E_R__I_N_P_U_T
    char namee[10];
    printf("Enter your name: ");
    fgets(namee, 10, stdin);     // fgets for input from user
    /* takes 3 things: 1) variable to store input with,
    2) buffer limit (amount user can enter,
    3) stdin = get info from terminal) */
    printf("Hello, %s \n", namee);

    int agee;
    printf("Enter your age: ");
    scanf("%d", &agee);          // scanf for integers
    printf("You are %d \n", agee);

    char letterGrade;
    printf("Enter your grade: ");
    scanf("%c", &letterGrade);        // scanf for character
    printf("Your grade is %c \n", letterGrade);

    double gpa;
    printf("Enter your gpa: ");
    scanf("%lf", &gpa);
    printf("Your gpa is %f \n", gpa);


    // A_R_R_A_Y_S
    int luckyNumbers[] = {4, 8, 15, 17, 23, 42};
    luckyNumbers[0] = 90;  //modifies element
    printf("%d \n", luckyNumbers[0]);
    printf("%d \n", luckyNumbers[1]);

    // N dimensional arrays

    int numberGrid[2][3] = { {1, 2, 3}, {4, 5, 6} };
    numberGrid[0][1] = 99;

    printf("%d \n", numberGrid[0][0]);
    printf("%d \n", numberGrid[0][1]);


    // F_U_N_C_T_I_O_N_S
    
    int sum = addNumbers(311, 109);
    printf("%d \n", sum);


    // I_F__E_L_S_E__S_T_A_T_E_M_E_N_T_S

    int isStudent = 0;
    int isSmart = 0;

    if(isStudent != 0 && isSmart != 0){ // && = and, || = or
        printf("You are a student!\n");
    } else if(isStudent != 0 && isSmart == 0){
        printf("You are not a smart student\n");
    } else {
        printf("You are a not a student and are not smart.\n");
    }


    // S_W_I_T_C_H__S_T_A_T_E_M_E_N_T_S

    char myGrade = 'A';
    switch(myGrade){
        case 'A':
            printf("You pass\n");
            break;
        case 'F':
            printf("You fail\n");
            break;
        default:
            printf("Invalid grade\n");
    }


    // W_H_I_L_E__L_O_O_P_S

    int index = 1;
    while(index <= 5){
        printf("%d \n", index);
        index++;
    }


    // do{
    //     printf("%d \n", index);
    //     index++;
    // }while(index <= 7);   // condition checked after the loop runs


    // F_O_R__L_O_O_P_S
    for(int i = 0; i < 5; i++){
        printf("%d \n", i);
    }


    // S_T_R_U_C_T_S
    struct Student student1;
    student1.age = 19;
    student1.gpa = 3.4;
    student1.grade = 'B';

    printf("%d \n", student1.age);

    return 0;
}