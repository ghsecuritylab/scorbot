/*
 * motor.h
 *
 *  Created on: Jan 12, 2018
 *      Author: jay
 */

#ifndef MOTOR_H_
#define MOTOR_H_

#include <stdint.h>
#include "stm32f4xx_hal.h"

typedef enum motor_mode {
	MOTOR_MODE_OFF,
	MOTOR_MODE_BUSY,
	MOTOR_MODE_RUNNING,
	MOTOR_MODE_HOMING
} motor_mode_t;

#define NUM_MOTORS 7

void motor_init();
void motor_control_loop();
void motor_set_position(int number, int position);
void motor_home(int number, uint8_t withLimitSwitches);
int16_t motor_get_position(int motor);
#endif /* MOTOR_H_ */
