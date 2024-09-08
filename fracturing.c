/*
Name: Rodney Gomez Ramos
UCFID: 5411180
*/

#include <stdio.h>
#include <math.h>

#define PI 3.14159

//List of functions
double askForUserInput();
double calculateDistance();
double calculatePerimeter();
double calculateArea();
double calculateWidth();
double calculateHeight();


//main function
int main(int argc, char** argv){

    //calculateDistance();
    printf("Calcuate Distance (Diameter)\n");
    double distance = calculateDistance();
    printf("The distance between the two points is %.2lf\n\n", distance);
    
    //calculatePerimeter
    printf("Calcuate Perimeter (PI x Diameter)\n");
    calculatePerimeter();
  

    //calculateArea
    printf("Calcuate Area (PI x radius^2)\n");
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

    //Print points entered
    printf("\nPoint #1 entered: (%.1lf,%.1lf) \n", x1, y1);
    printf("Point #2 entered: (%.1lf,%.1lf) \n", x2, y2);
    
    return distance;
}//end of calculateDistance() function

//OBJECTIVE: To calculate the Perimiter
double calculatePerimeter(){
    //get diameter 
    double diameter = calculateDistance();
    //calculate perimeter
    double perimeter = PI*diameter;

    printf("The perimeter of the city encompassed by your request is %.2lf\n\n", perimeter);
    
    //my perceived difficulty
    return 3.5;
}

//OBJECTIVE: To calculate the Area
double calculateArea(){
    //get diameter
    double diameter = calculateDistance();
    //find the radius r first
    double radius = diameter/2;
    //calculate area
    double area = PI * pow(radius,2);
    
    printf("The area of the city encompassed by your request is %.2lf\n\n", area);
    
    //my perceived difficulty
    return 3.8;
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