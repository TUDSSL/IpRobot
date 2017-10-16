/*
 * ctrl_loop.h
 *
 *  Created on: 8 aug. 2017
 *      Author: Koen Schaper
 */

#ifndef CTRL_LOOP_H_
#define CTRL_LOOP_H_

#define SAMPLE_TIME 0.01 // 100Hz

#define STRAIGHT   0x01
#define TURN_LEFT  0x02
#define TURN_RIGHT 0x03

// Speed / Distance tuning parameters
#define SMAX    75
#define MOT_TRG 75
#define VEL_CAL 28
#define STEP_OFF 0

#define TOLERANCE_DEGREES 2.0


extern nv_var fram;
extern nv_var fram_wc;

void ctrl_init();
void move(uint8_t cmd, int16_t arg);

#endif /* CTRL_LOOP_H_ */
