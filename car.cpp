/*----------------------------------------------------------
*				HTBLA-Leonding / Klasse: <your class>
* ---------------------------------------------------------
* Exercise Number: 08
* Title:			car.cpp
* Author:			Emina SLJIVIC
* Due Date:		Nov. 20 2018
* ----------------------------------------------------------
*/
#include "car.h"
#include <stdlib.h>

#define NUMBER_OF_CARS 6

struct CarData{
  enum CarType type;
  int max_speed;
  double fill_level;
  double acceleration_rate;
  int speed;
};

struct CarImplementation{
  enum Color color;
  struct CarData cardata;
  bool is_rented;
};

struct CarData aixam={AIXAM,45,16.0,0.0,0};
struct CarData fiat_multipla={FIAT_MULTIPLA,170,65.0,0.0,0};
struct CarData jeep={JEEP,196,80.0,0.0,0};

struct CarImplementation aixam1={RED,aixam,false};
struct CarImplementation fiat_multipla1={BLUE,fiat_multipla,false};
struct CarImplementation fiat_multipla2={BLUE,fiat_multipla,false};
struct CarImplementation fiat_multipla3={ORANGE,fiat_multipla,false};
struct CarImplementation jeep1={SILVER,jeep,false};
struct CarImplementation jeep2={BLACK,jeep,false};

Car cars[]={&aixam1,&fiat_multipla1,&fiat_multipla2,&fiat_multipla3,&jeep1,&jeep2,0};

Car get_car(enum CarType type)
{
  for (int i = 0; i<NUMBER_OF_CARS; i++) {
    if(cars[i]->cardata.type==type&&!cars[i]->is_rented)
    {
        cars[i]->is_rented=true;
        return cars[i];
    }
  }
  return 0;
}
CarType get_type(Car car)
{
  enum CarType type=FIAT_MULTIPLA;
  return type;
}
Color get_color(Car car)
{
  enum Color color=BLACK;
  return color;
}
double get_fill_level(Car car)
{
  return car->cardata.fill_level;
}
double get_acceleration_rate(Car car)
{
  return car->cardata.acceleration_rate;
}
int get_speed(Car car)
{
  return car->cardata.speed;
}
void init(){}
void set_acceleration_rate(Car car, double acceleration_rate){
}
void accelerate(Car car){
}
