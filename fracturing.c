#include <stdio.h>
#include <math.h>

//List of functions
double calculateDistance();
double calculatePerimeter();
double calculateArea();
double calculateWith();


//main function
int main(int argc, char** argv){
    double myDistance = calculateDistance();


    return 0;
}//end of main function


//OBJECTIVE: To calculate the distance between two points (x,y)
double calculateDistance(){
    double x1 = 0.0;
    double y1 = 0.0;
    double x2 = 0.0;
    double y2 = 0.0;
    double distance = 0.0;

    //Enter first point
    printf("Enter first point:\n");
    printf("x = ");
    scanf("%lf",&x1);
    printf("y = ");
    scanf("%lf", &y1);

    //Enter second point
    printf("Enter second point:\n");
    printf("x = ");
    scanf("%lf",&x2);
    printf("y = ");
    scanf("%lf", &y2);

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
double calculateWith(){
    
    
    return 0;
}

//to compile: gcc fracturing.c -lm && ./a.out