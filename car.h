/*----------------------------------------------------------
*				HTBLA-Leonding / Klasse: <your class>
* ---------------------------------------------------------
* Exercise Number: 08
* Title:			car.h
* Author:			Emina SLJIVIC
* Due Date:		Nov. 20 2018
* ----------------------------------------------------------
* Description:
* Car abstract data type demo.
* ----------------------------------------------------------
*/
#ifndef ___CAR_H
#define ___CAR_H

enum CarType{AIXAM,FIAT_MULTIPLA,JEEP};
enum Color{RED,GREEN,BLUE,ORANGE,SILVER,BLACK};

typedef struct CarImplementation* Car;

Car get_car(enum CarType type);
enum CarType get_type(Car car);
enum Color get_color(Car car);
double get_fill_level(Car car);
double get_acceleration_rate(Car car);
double get_speed(Car car);
void init();
void set_acceleration_rate(Car car, double acceleration_rate);
void accelerate(Car car);
#endif
