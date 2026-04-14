#include <iostream>
#include <cmath>
#include <numbers>
using namespace std;

int main() {
  //PI//
  const double PI = 3.14159265359;
  //acceleration due to gravity//
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
  cout << "Horizontal Velocity: " << horizontal_velocity << " ft/s." << endl;
  

  //vertical velocity//
  double vertical_velocity = double (bike_velocity * sin(angle_of_bike * PI/180));

  //The time the bike stays in the air//

  double squared_vert_velocity = pow(vertical_velocity, 2);
  double two_times_gravity_height = (2 * GRAVITY * ramp_height);
  double air_ish_time = vertical_velocity + (sqrt(squared_vert_velocity + two_times_gravity_height));
  double time = air_ish_time/GRAVITY;
  cout << "Air Time: " << time << " seconds." << endl;
  
  //The maximum height reached during the jump//
  double max_height = ramp_height + (squared_vert_velocity/(2*GRAVITY));
  cout << "Maximum Height: " << max_height << " feet." << endl;

  //The horizontal distance traveled before landing//
  double horizontal_distance = horizontal_velocity *time;
  cout << "Jump Distance: " << horizontal_distance << " feet." << endl;
  
  //The speed of the bike at landing//
  double squared_horiz_velocity = pow(horizontal_velocity, 2);
  double almost_ish_speed =(squared_horiz_velocity + (squared_vert_velocity + two_times_gravity_height));
  double landing_speed = sqrt(almost_ish_speed);
  cout << "Landing Speed: " << landing_speed << " ft/s." << endl;
}