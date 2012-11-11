/* 
 * File:   thermostat.h
 * Author: Jeremy
 *
 * Created on November 8, 2012, 8:23 PM
 */

#ifndef __THERMOSTAT_H
#define	__THERMOSTAT_H

#define ADC_TEMP_PIN 46


extern void safetyOverrideCheck();
extern void setTemperature(int millivolts);
extern _Bool processRequest();




#endif	/* THERMOSTAT_H */

