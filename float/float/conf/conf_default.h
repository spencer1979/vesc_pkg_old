// This file is autogenerated by VESC Tool

#ifndef CONF_DEFAULT_H_
#define CONF_DEFAULT_H_

// Angle P
#ifndef APPCONF_FLOAT_KP
#define APPCONF_FLOAT_KP 20
#endif

// Angle I
#ifndef APPCONF_FLOAT_KI
#define APPCONF_FLOAT_KI 0.005
#endif

// Rate P
#ifndef APPCONF_FLOAT_KP2
#define APPCONF_FLOAT_KP2 0.6
#endif

// Rate I
#ifndef APPCONF_FLOAT_KI2
#define APPCONF_FLOAT_KI2 0
#endif

// Loop Hertz
#ifndef APPCONF_FLOAT_HERTZ
#define APPCONF_FLOAT_HERTZ 832
#endif

// Pitch Axis Fault Cutoff
#ifndef APPCONF_FLOAT_FAULT_PITCH
#define APPCONF_FLOAT_FAULT_PITCH 90
#endif

// Roll Axis Fault Cutoff
#ifndef APPCONF_FLOAT_FAULT_ROLL
#define APPCONF_FLOAT_FAULT_ROLL 90
#endif

// ADC1 Switch Voltage
#ifndef APPCONF_FLOAT_FAULT_ADC1
#define APPCONF_FLOAT_FAULT_ADC1 3
#endif

// ADC2 Switch Voltage
#ifndef APPCONF_FLOAT_FAULT_ADC2
#define APPCONF_FLOAT_FAULT_ADC2 3
#endif

// Pitch Fault Delay
#ifndef APPCONF_FLOAT_FAULT_DELAY_PITCH
#define APPCONF_FLOAT_FAULT_DELAY_PITCH 1000
#endif

// Roll Fault Delay
#ifndef APPCONF_FLOAT_FAULT_DELAY_ROLL
#define APPCONF_FLOAT_FAULT_DELAY_ROLL 1000
#endif

// Half Switch Fault Delay
#ifndef APPCONF_FLOAT_FAULT_DELAY_SWITCH_HALF
#define APPCONF_FLOAT_FAULT_DELAY_SWITCH_HALF 250
#endif

// Full Switch Fault Delay
#ifndef APPCONF_FLOAT_FAULT_DELAY_SWITCH_FULL
#define APPCONF_FLOAT_FAULT_DELAY_SWITCH_FULL 250
#endif

// ADC Half State Fault ERPM
#ifndef APPCONF_FLOAT_FAULT_ADC_HALF_ERPM
#define APPCONF_FLOAT_FAULT_ADC_HALF_ERPM 300
#endif

// Treat Both Sensors as One
#ifndef APPCONF_FLOAT_FAULT_IS_DUAL_SWITCH
#define APPCONF_FLOAT_FAULT_IS_DUAL_SWITCH 0
#endif

// Enable Darkride
#ifndef APPCONF_FLOAT_FAULT_DARKRIDE_ENABLED
#define APPCONF_FLOAT_FAULT_DARKRIDE_ENABLED 0
#endif

// Enable Reverse Stop
#ifndef APPCONF_FLOAT_FAULT_REVERSESTOP_ENABLED
#define APPCONF_FLOAT_FAULT_REVERSESTOP_ENABLED 0
#endif

// Angle
#ifndef APPCONF_FLOAT_TILTBACK_DUTY_ANGLE
#define APPCONF_FLOAT_TILTBACK_DUTY_ANGLE 5
#endif

// Speed
#ifndef APPCONF_FLOAT_TILTBACK_DUTY_SPEED
#define APPCONF_FLOAT_TILTBACK_DUTY_SPEED 3
#endif

// Duty Cycle
#ifndef APPCONF_FLOAT_TILTBACK_DUTY
#define APPCONF_FLOAT_TILTBACK_DUTY 0.75
#endif

// Angle
#ifndef APPCONF_FLOAT_TILTBACK_HV_ANGLE
#define APPCONF_FLOAT_TILTBACK_HV_ANGLE 8
#endif

// Speed
#ifndef APPCONF_FLOAT_TILTBACK_HV_SPEED
#define APPCONF_FLOAT_TILTBACK_HV_SPEED 1
#endif

// High Voltage Threshold
#ifndef APPCONF_FLOAT_TILTBACK_HV
#define APPCONF_FLOAT_TILTBACK_HV 64
#endif

// Angle
#ifndef APPCONF_FLOAT_TILTBACK_LV_ANGLE
#define APPCONF_FLOAT_TILTBACK_LV_ANGLE 10
#endif

// Speed
#ifndef APPCONF_FLOAT_TILTBACK_LV_SPEED
#define APPCONF_FLOAT_TILTBACK_LV_SPEED 1
#endif

// Low Voltage Threshold
#ifndef APPCONF_FLOAT_TILTBACK_LV
#define APPCONF_FLOAT_TILTBACK_LV 45
#endif

// Return To Level Speed
#ifndef APPCONF_FLOAT_TILTBACK_RETURN_SPEED
#define APPCONF_FLOAT_TILTBACK_RETURN_SPEED 5
#endif

// Constant Tiltback
#ifndef APPCONF_FLOAT_TILTBACK_CONSTANT
#define APPCONF_FLOAT_TILTBACK_CONSTANT 0
#endif

// Constant Tiltback ERPM
#ifndef APPCONF_FLOAT_TILTBACK_CONSTANT_ERPM
#define APPCONF_FLOAT_TILTBACK_CONSTANT_ERPM 500
#endif

// Variable Tiltback
#ifndef APPCONF_FLOAT_TILTBACK_VARIABLE
#define APPCONF_FLOAT_TILTBACK_VARIABLE 0.1
#endif

// Variable Tiltback Maximum
#ifndef APPCONF_FLOAT_TILTBACK_VARIABLE_MAX
#define APPCONF_FLOAT_TILTBACK_VARIABLE_MAX 0
#endif

// Nose Angling Speed
#ifndef APPCONF_FLOAT_NOSEANGLING_SPEED
#define APPCONF_FLOAT_NOSEANGLING_SPEED 5
#endif

// Remote Type
#ifndef APPCONF_FLOAT_INPUTTILT_REMOTE_TYPE
#define APPCONF_FLOAT_INPUTTILT_REMOTE_TYPE 0
#endif

// Tiltback Angle Limit
#ifndef APPCONF_FLOAT_INPUTTILT_ANGLE_LIMIT
#define APPCONF_FLOAT_INPUTTILT_ANGLE_LIMIT 10
#endif

// Tiltback Speed
#ifndef APPCONF_FLOAT_INPUTTILT_SPEED
#define APPCONF_FLOAT_INPUTTILT_SPEED 20
#endif

// Invert Throttle
#ifndef APPCONF_FLOAT_INPUTTILT_INVERT_THROTTLE
#define APPCONF_FLOAT_INPUTTILT_INVERT_THROTTLE 1
#endif

// Startup Pitch Axis Angle Tolerance
#ifndef APPCONF_FLOAT_STARTUP_PITCH_TOLERANCE
#define APPCONF_FLOAT_STARTUP_PITCH_TOLERANCE 5
#endif

// Startup Roll Axis Angle Tolerance
#ifndef APPCONF_FLOAT_STARTUP_ROLL_TOLERANCE
#define APPCONF_FLOAT_STARTUP_ROLL_TOLERANCE 45
#endif

// Startup Centering Speed
#ifndef APPCONF_FLOAT_STARTUP_SPEED
#define APPCONF_FLOAT_STARTUP_SPEED 60
#endif

// Startup Click Current
#ifndef APPCONF_FLOAT_STARTUP_CLICK_CURRENT
#define APPCONF_FLOAT_STARTUP_CLICK_CURRENT 0
#endif

// Brake Current
#ifndef APPCONF_FLOAT_BRAKE_CURRENT
#define APPCONF_FLOAT_BRAKE_CURRENT 6
#endif

// I Term Limit
#ifndef APPCONF_FLOAT_KI_LIMIT
#define APPCONF_FLOAT_KI_LIMIT 30
#endif

// Start Angle
#ifndef APPCONF_FLOAT_BOOSTER_ANGLE
#define APPCONF_FLOAT_BOOSTER_ANGLE 10
#endif

// Ramp Up
#ifndef APPCONF_FLOAT_BOOSTER_RAMP
#define APPCONF_FLOAT_BOOSTER_RAMP 10
#endif

// Current Boost
#ifndef APPCONF_FLOAT_BOOSTER_CURRENT
#define APPCONF_FLOAT_BOOSTER_CURRENT 0
#endif

// Start Current Threshold
#ifndef APPCONF_FLOAT_TORQUETILT_START_CURRENT
#define APPCONF_FLOAT_TORQUETILT_START_CURRENT 15
#endif

// Tilitback Angle Limit
#ifndef APPCONF_FLOAT_TORQUETILT_ANGLE_LIMIT
#define APPCONF_FLOAT_TORQUETILT_ANGLE_LIMIT 8
#endif

// Max Tiltback Speed
#ifndef APPCONF_FLOAT_TORQUETILT_ON_SPEED
#define APPCONF_FLOAT_TORQUETILT_ON_SPEED 5
#endif

// Max Tiltback Release Speed
#ifndef APPCONF_FLOAT_TORQUETILT_OFF_SPEED
#define APPCONF_FLOAT_TORQUETILT_OFF_SPEED 3
#endif

// Strength
#ifndef APPCONF_FLOAT_TORQUETILT_STRENGTH
#define APPCONF_FLOAT_TORQUETILT_STRENGTH 0
#endif

// Current Filter
#ifndef APPCONF_FLOAT_TORQUETILT_FILTER
#define APPCONF_FLOAT_TORQUETILT_FILTER 5
#endif

// Turn Tiltback Mode
#ifndef APPCONF_FLOAT_TURNTILT_MODE
#define APPCONF_FLOAT_TURNTILT_MODE 1
#endif

// Strength
#ifndef APPCONF_FLOAT_TURNTILT_STRENGTH
#define APPCONF_FLOAT_TURNTILT_STRENGTH 6
#endif

// Tilitback Angle Limit
#ifndef APPCONF_FLOAT_TURNTILT_ANGLE_LIMIT
#define APPCONF_FLOAT_TURNTILT_ANGLE_LIMIT 3
#endif

// Turn Angle Threshold
#ifndef APPCONF_FLOAT_TURNTILT_START_ANGLE
#define APPCONF_FLOAT_TURNTILT_START_ANGLE 2
#endif

// ERPM Threshold
#ifndef APPCONF_FLOAT_TURNTILT_START_ERPM
#define APPCONF_FLOAT_TURNTILT_START_ERPM 1000
#endif

// Max Tiltback Speed
#ifndef APPCONF_FLOAT_TURNTILT_SPEED
#define APPCONF_FLOAT_TURNTILT_SPEED 5
#endif

// Speed Boost %
#ifndef APPCONF_FLOAT_TURNTILT_ERPM_BOOST
#define APPCONF_FLOAT_TURNTILT_ERPM_BOOST 200
#endif

// Speed Boost Max ERPM
#ifndef APPCONF_FLOAT_TURNTILT_ERPM_BOOST_END
#define APPCONF_FLOAT_TURNTILT_ERPM_BOOST_END 5000
#endif

// Yaw Aggregate Target
#ifndef APPCONF_FLOAT_TURNTILT_YAW_AGGREGATE
#define APPCONF_FLOAT_TURNTILT_YAW_AGGREGATE 90
#endif

// ATR Strength
#ifndef APPCONF_FLOAT_ATR_STRENGTH
#define APPCONF_FLOAT_ATR_STRENGTH 1.2
#endif

// Uphill Tilt Factor
#ifndef APPCONF_FLOAT_ATR_UPHILL_TILT
#define APPCONF_FLOAT_ATR_UPHILL_TILT 0.9
#endif

// Downhill Tilt Factor
#ifndef APPCONF_FLOAT_ATR_DOWNHILL_TILT
#define APPCONF_FLOAT_ATR_DOWNHILL_TILT 0.2
#endif

// Torque Offset
#ifndef APPCONF_FLOAT_ATR_TORQUE_OFFSET
#define APPCONF_FLOAT_ATR_TORQUE_OFFSET 7
#endif

// Speed Boost
#ifndef APPCONF_FLOAT_ATR_SPEED_BOOST
#define APPCONF_FLOAT_ATR_SPEED_BOOST 0.3
#endif

// Tilitback Angle Limit
#ifndef APPCONF_FLOAT_ATR_ANGLE_LIMIT
#define APPCONF_FLOAT_ATR_ANGLE_LIMIT 8
#endif

// Max Tiltback Speed
#ifndef APPCONF_FLOAT_ATR_ON_SPEED
#define APPCONF_FLOAT_ATR_ON_SPEED 4
#endif

// Max Tiltback Release Speed
#ifndef APPCONF_FLOAT_ATR_OFF_SPEED
#define APPCONF_FLOAT_ATR_OFF_SPEED 3
#endif

// Tiltback Response Boost
#ifndef APPCONF_FLOAT_ATR_RESPONSE_BOOST
#define APPCONF_FLOAT_ATR_RESPONSE_BOOST 1.5
#endif

// Tiltback Transition Boost
#ifndef APPCONF_FLOAT_ATR_TRANSITION_BOOST
#define APPCONF_FLOAT_ATR_TRANSITION_BOOST 3
#endif

// Current Filter
#ifndef APPCONF_FLOAT_ATR_FILTER
#define APPCONF_FLOAT_ATR_FILTER 5
#endif

// Amps to Acceleration Ratio
#ifndef APPCONF_FLOAT_ATR_AMPS_ACCEL_RATIO
#define APPCONF_FLOAT_ATR_AMPS_ACCEL_RATIO 12
#endif

// Amps to Deceleration Ratio
#ifndef APPCONF_FLOAT_ATR_AMPS_DECEL_RATIO
#define APPCONF_FLOAT_ATR_AMPS_DECEL_RATIO 10
#endif

// Brake Tilt Strength
#ifndef APPCONF_FLOAT_BRAKETILT_STRENGTH
#define APPCONF_FLOAT_BRAKETILT_STRENGTH 0
#endif

// Brake Tilt Lingering
#ifndef APPCONF_FLOAT_BRAKETILT_LINGERING
#define APPCONF_FLOAT_BRAKETILT_LINGERING 2
#endif

// CONF_DEFAULT_H_
#endif

