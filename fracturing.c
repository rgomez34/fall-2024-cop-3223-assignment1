#include <stdio.h>
#include <math.h>

//List of functions
double askForUserInput();
double calculateDistance();
double calculatePerimeter();
double calculateArea();
double calculateWidth();
double calculateHeight();


//main function
int main(int argc, char** argv){
    //Calling functions from main
    calculateDistance();
    calculatePerimeter();
    calculateArea();
    calculateWidth();
    calculateHeight();

    return 0;
}//end of main function

//OBJECTIVE: To ask for user input
double askForUserInput(){
    double pointValue;
    scanf("%lf", &pointValue);
    return pointValue;
}

//OBJECTIVE: To calculate the distance between two points (x,y)
double calculateDistance(){
    double x1, y1, x2, y2, distance;

    //Enter first point
    printf("Enter first point:\nx = ");
    x1 = askForUserInput();
    printf("y = ");
    y1 = askForUserInput();

    //Enter second point
    printf("Enter second point:\nx = ");
    x2 = askForUserInput();
    printf("y = ");
    y2 = askForUserInput();

    //calculate distance
    distance = sqrt((x2-x1)*(x2-x1) + (y2-y1)*(y2-y1));   

    //Print the following 3 lines
    printf("\nPoint #1 entered: (%.1lf,%.1lf) \n", x1, y1);
    printf("Point #2 entered: (%.1lf,%.1lf) \n", x2, y2);
    printf("The distance between the two points is %.2f\n", distance);

    return distance;
}//end of calculateDistance() function

//OBJECTIVE: To calculate the Perimiter
double calculatePerimeter(){
    
    
    return 0;
}

//OBJECTIVE: To calculate the Area
double calculateArea(){
    
    
    return 0;
}


//OBJECTIVE: To calculate the With
double calculateWidth(){
    
    
    return 0;
}


//OBJECTIVE: To calculate the Height
double calculateHeight(){
    
    
    return 0;
}

//to compile: gcc fracturing.c -lm && ./a.out