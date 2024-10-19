#include<stdio.h>
#include <math.h>

int main()
{
    printf("Programs for Physics Calculations : \n\n");
    
    printf("Problem 1 : Calculate the force using Newton's Second Law\n\n");
    
    float mass = 50.0;  //  mass in kilograms
    float acceleration = 10.0;   //  acceleration in meters per second squared (m/s^2)
    float force;
    
    force = mass * acceleration;
    
    printf("Value of mass is : %.2f \nValue of acceleration is : %.2f\n", mass,acceleration);
    printf("By using Newton's Second Law, The calculated Force is : %.2f N\n\n", force); // N for Newton
    
    printf("Problem 2 : Find the Kinetic Energy of an object\n\n");
    
    float Mass = 50.0;  // mass in kilograms
    float velocity = 10.0;  // velocity in meters per second (m/s)
    float kinetic_energy;

    kinetic_energy = 0.5 * Mass * velocity * velocity;

    printf("Value of mass is : %.2f \nValue of velocity is : %.2f\n", Mass,velocity);
    printf("The calculated Kinetic Energy is : %.2f Joules", kinetic_energy);  // Joules (J) for energy
    
    return 0;   
}
