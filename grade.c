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
void grade_letter_and_point();
void sgpa_grade_point();
float credit_hour();

int eng_102();
int math_147();
int csc_183();
int phy_111();
int art_204();


//main fuction
int main()
{
    int sgpa;
    printf("MAT 147 Marks = ");
    scanf("%d", &marks);
    math_147(marks);

    printf("\nENG 102 Marks = ");
    scanf("%d", &marks);
    eng_102(marks);

    printf("\nCSC 183(including Lab) Marks = ");
    scanf("%d", &marks);
    csc_183(marks);

    printf("\nART 204 Marks = ");
    scanf("%d", &marks);
    csc_183(marks);

    printf("\nPHY 111(including Lab) Marks = ");
    scanf("%d", &marks);
    csc_183(marks);

    

    return 0;
}

//function definition
//subject wise function definition
int eng_102()
{
    grade_letter_and_point(marks);

    return 0;
}

int math_147()
{
    grade_letter_and_point(marks);

    return 0;
}

int csc_183()
{
    grade_letter_and_point(marks);

    return 0;
}

int phy_111()
{
    grade_letter_and_point(marks);

    return 0;
}

int art_204()
{
    grade_letter_and_point(marks);

    return 0;
}

int sgpa_csc_183()
{
    int total_grade;
   

    return 0;
}

//grade letter and grade point to print
void grade_letter_and_point()
{
    if (marks > 100)
    {
        printf("Invalid Marks & Invalid Grade");
    }
    
    else if(marks>=80 && marks<=100)
    {
        printf("Grade Letter: A+ & Grade point: 4.0");
    }
    else if (marks>=75 && marks<=79)
    {
        printf("Grade Letter: A & Grade point: 3.75");
    }
    else if (marks>=70 && marks<=74)
    {
        printf("Grade Letter: A- & Grade point: 3.50");
    }
    else if (marks>=65 && marks<=69)
    {
        printf("Grade Letter: B+ & Grade point: 3.25");
    }
    else if (marks>=60 && marks<=64)
    {
        printf("Grade Letter: B & Grade point: 3.0");
    }
    else if (marks>=55 && marks<=59)
    {
        printf("Grade Letter: B- & Grade point: 2.75");
    }
    else if (marks>=50 && marks<=54)
    {
        printf("Grade Letter: C+ & Grade point: 2.50");
    }
    else if (marks>=45 && marks<=49)
    {
        printf("Grade Letter: C & Grade point: 2.25");
    }
    else if (marks>=40 && marks<=44)
    {
        printf("Grade Letter: D & Grade point: 2.0");
    }
    else
    {
        printf("Grade Letter: F & Grade point: 0.0");
    }
}


//grade point to calculate sgpa
void sgpa_grade_point()
{
    if(marks>=80 && marks<=100)
    {
        float grade = 4.0;
    }
    else if (marks>=75 && marks<=79)
    {
        float grade = 3.75;
    }
    else if (marks>=70 && marks<=74)
    {
        float grade = 3.50;
    }
    else if (marks>=65 && marks<=69)
    {
        float grade = 3.25;
    }
    else if (marks>=60 && marks<=64)
    {
        float grade = 3.0;
    }
    else if (marks>=55 && marks<=59)
    {
        float grade = 2.75;
    }
    else if (marks>=50 && marks<=54)
    {
        float grade = 2.50;
    }
    else if (marks>=45 && marks<=49)
    {
        float grade = 2.25;
    }
    else if (marks>=40 && marks<=44)
    {
        float grade = 2.00;
    }
    else
    {
        float grade = 0.0;
    }
}

//credit hour to calculat sgpa
float credit_hour()
{
    int credit, credit_csc_183, credit_art_204, credit_eng_102, credit_mat_147, credit_phy_111;

    if (credit_csc_183)
    {
        int credit = 4;
    }
    else if (credit_art_204)
    {
        int credit = 2;
    }
    else if (credit_eng_102)
    {
        int credit = 3;
    }
    else if (credit_mat_147)
   {
        int credit = 3;
    }
    else if (credit_phy_111)
    {
        int credit = 4;
    }
    
    return 0;
}