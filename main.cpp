#include <iostream>
#include <cmath>
#include <numbers>
using namespace std;

int main() {

  const double PI = 3.14159265359;
  //below is the acceleration due to gravity//
  const double GRAVITY = 32.17405;

  //INPUT//
  int ramp_height = 12;
  cout << "Ramp height: " << ramp_height << " feet" << endl;

  int bike_velocity = 55;
  cout << "Bike Velocity: " << bike_velocity << " feet per second" << endl;

  int angle_of_bike = 20;
  cout << "Bike Angle: " << angle_of_bike <<  " degrees" << endl;

  //OUTPUT//
  //The horizontal speed of the bike when it leaves the ramp//
  double horizontal_velocity = double (bike_velocity * cos(angle_of_bike * PI/180));
  cout << "Horizontal Velocity: " << horizontal_velocity << endl;
  

  //vertical velocity//
  double vertical_velocity = double (bike_velocity * sin(angle_of_bike * PI/180));

  //The time the bike stays in the air//
  
  std::pow(vertical_velocity, 2) + (2 * GRAVITY * ramp_height);


  //cout << "Air Time: " << time_in_air << endl;

  //The maximum height reached during the jump//
  //The horizontal distance traveled before landing//
  //The speed of the bike at landing//

  //const double ACCELERATION_DUE_TO_GRAVITY = 32.17405;//


}












// parameters like: "doubleIT(int x)"" DO NOT use cin or cout!! they use "return!"//
