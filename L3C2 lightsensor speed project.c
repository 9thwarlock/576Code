#pragma config(Sensor, in3,    lightSensor,    sensorReflection)
#pragma config(Motor,  port1,           leftMotor,     tmotorVex393_HBridge, openLoop)
#pragma config(Motor,  port6,           clawMotor,     tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port7,           armMotor,      tmotorVex393_MC29, openLoop, reversed)
#pragma config(Motor,  port10,          rightMotor,    tmotorVex393_HBridge, openLoop, reversed)

task main()
{
	while (true)
	{
		int x = ((750 - SensorValue(lightSensor)) * 127)/750;
		motor[leftMotor] = x;
		motor[rightMotor] = x;
	}

wait1Msec(1000);


}
