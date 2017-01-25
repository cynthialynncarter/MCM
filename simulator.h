///////////////////////////////////////////////
// Cooperate and navigate
// 
//
//          Authors: Team #71468
//          January 20th, 2017
//
//          simulator.h (header file)
//          
//          Purpose: Computer simulator for MCM 2017 math competion problem C.


#ifndef SIMULATOR_H
#define SIMULATOR_H
#include <cstdlib>  // Provides size_t

namespace simulator
{
  class simulator_class
  {
  public:
    
    // MODIFICATION MEMBER FUNCTIONS
    
    // Postcondition: resets the program values to 0.
    void reset( );

    // Postcondition: The simulator calculates the mean number of deaths
    //   on the highway using the stats from "Fatalities in Traffic Accidents" table.
    void accidents();

    // Precondition: There has to cars on the highway
    // Postcondition:the program takes into account the number of cars and 
    // the percentage of lanes and from there calculates the number of 
    // lanes need to successfully operate the highway at its current // capacity.
    void lanes( );
    
  // Precondition: There has to cars on the highway
  // Postcondition: the function calculates the number of cars on the road 
  //  at peak hours.
    void peak_hours( );
    
  };
}

#endif
