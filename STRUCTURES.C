#include <stdio.h>
#include <string.h>
struct student{
    int rollno;
    char name[22];
    float age;
    char gender;
};
int main() {
    struct student s1;
    printf("Size of student structure is %d", sizeof(s1));
    s1.rollno = 2024202609;
    strcpy(s1.name,"jhutika");
    s1.age = 20;
    s1.gender = 'F';
    
    printf("\nRoll no: %d",s1.rollno);
    printf("\nName: %s",s1.name);
    printf("\nAge: %f",s1.age);
    printf("\nGender: %c",s1.gender);
    return 0;
}

/*Size of student structure is 36
Roll no: 2024202609
Name: jhutika
Age: 20.000000
Gender: F

=== Code Execution Successful ===*/
