//c program for automated grading system
/*
author: ajmain fayek
id: 23303417
section: h
date: 28-01-2024
*/
#include<stdio.h>

//global varibales
int marks;

//fuction declaration
void grade_letter();
void grade_point();

int eng_102();
int math_147();
int csc_183();


//main fuction
int main()
{
    printf("MAT 147 Marks = ");
    scanf("%d", &marks);
    math_147(marks);

    printf("\nENG 102 Marks = ");
    scanf("%d", &marks);
    eng_102(marks);

    printf("\nCSC 183 Marks = ");
    scanf("%d", &marks);
    csc_183(marks);

    return 0;
}

//function definition
int eng_102()
{
    printf("Grade = ");
    grade_letter(marks);
    grade_point(marks);

    return 0;
}

int math_147()
{
    printf("Grade = ");
    grade_letter(marks);
    grade_point(marks);

    return 0;
}

int csc_183()
{
    printf("Grade = ");
    grade_letter(marks);
    grade_point(marks);

    return 0;
}

void grade_letter()
{
    if(marks>=80 && marks<=100)
    {
        printf("A+ ");
    }
    else if (marks>=75 && marks<=79)
    {
        printf("A ");
    }
    else if (marks>=70 && marks<=74)
    {
        printf("A- ");
    }
    else if (marks>=65 && marks<=69)
    {
        printf("B+ ");
    }
    else if (marks>=60 && marks<=64)
    {
        printf("B ");
    }
    else if (marks>=55 && marks<=59)
    {
        printf("B- ");
    }
    else if (marks>=50 && marks<=54)
    {
        printf("C+ ");
    }
    else if (marks>=45 && marks<=49)
    {
        printf("C ");
    }
    else if (marks>=40 && marks<=44)
    {
        printf("C- ");
    }
    else if (marks>=0 && marks<=39)
    {
        printf("F ");
    }
}

void grade_point()
{
    if(marks>=80 && marks<=100)
    {
        printf("4.0");
    }
    else if (marks>=75 && marks<=79)
    {
        printf("3.75");
    }
    else if (marks>=70 && marks<=74)
    {
        printf("3.50");
    }
    else if (marks>=65 && marks<=69)
    {
        printf("3.25");
    }
    else if (marks>=60 && marks<=64)
    {
        printf("3.00");
    }
    else if (marks>=55 && marks<=59)
    {
        printf("2.75");
    }
    else if (marks>=50 && marks<=54)
    {
        printf("2.50");
    }
    else if (marks>=45 && marks<=49)
    {
        printf("2.25");
    }
    else if (marks>=40 && marks<=44)
    {
        printf("2.00");
    }
    else if (marks>=0 && marks<=39)
    {
        printf("0.0");
    }
}
