///////////////////////////////////////////////
// Cooperate and navigate
// 
//
//          Authors: Team #71468
//          January 20th, 2017
//
//          simulator.cpp (main file)

// Standard headers
#include <iostream>
#include <assert.h>
#include <stdlib.h> 
#include "simulator.h"
#include <stdexcept>
#include <stdio.h>  
#include <stdlib.h> 

 // Postcondition: resets the program to 0.
void reset( ) {
    int lane_data_ = 0;
    int traffic_volume = 0;
}

// Postcondition: The simulator calculates the mean number of deaths
//   on the highway using the stats from "Fatalities in Traffic Accidents" table.
void accidents() {
    // 6.522 is the adverage number of deaths per 100,000. It's the average of 
    //  each counties death per 100,000.
    float accidents_per_100t_ = 6.522;
    float driver_input_;
    
    std::cout << "Please enter the number of drivers currently on the road. \n" <<
    "**your number MUST be more that 100,000.**" << std::endl;
    std::cin >> driver_input_;
    
    float total_accidents = (driver_input_ /100000) * accidents_per_100t_;
    std::cout << " \nThe total number of accidents for "<< driver_input_ << " is: \n" << total_accidents << std::endl;
}


// Precondition: there has to cars on the highway
// Postcondition: the program takes into acount the number of cars and 
// the persentage of lanes and from there calculates the numebr of Lanes
void lanes(){
    float driver_input_l;
    
    std::cout << "___________________________________________ \n" << "Please enter the total number of drivers. (0% self drivering cars)" 
    << std::endl;
    
    std::cin >> driver_input_l;
    float cars_per_day = driver_input_l / 8760;
    float lane_total = cars_per_day / 700;
    
    std::cout << "Number of lanes needed: \n"<< lane_total << std::endl;
}

// Precondition: there has to cars on the highway
// Postcondition: the function calculates the number of cars on the road 
//  at peak hours.
void peak_hours( ) {

    std::cout << "___________________________________________ \n" << "Please enter the total number of drivers. (0% self drivering cars)" 
    << std::endl;
    
    float cars_on_road;
    
    std::cin >> cars_on_road;
    
    float answer_cars_per_day = cars_on_road * 24;
    float answer_cars_8 = answer_cars_per_day * .08;
    float answer = answer_cars_8 / 1.5;
    
    std::cout << "The number of total cars during peak hours at " << cars_on_road << " is \n" << answer << " which is a "<< 
    cars_on_road - answer << "difference"<< std::endl;
    
}

int main () {
    std::cout << "***CALCULATING EXPECTED NUMBER OF ACCIDENTS***" << std::endl;
    accidents();
    
    std::cout << "___________________________________________ \n" << std::endl;
    std::cout << "***CALCULATING EXPECTED NUMBER OF LANES*** " << std::endl;
    lanes();
    
    std::cout << "___________________________________________ \n" << std::endl;
    std::cout << "***CALCULATING EXPECTED CARS DURING PEAK HOURS*** " << std::endl;
    peak_hours();
}