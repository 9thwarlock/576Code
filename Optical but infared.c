#pragma config(Sensor, dgtl1,  rightEncoder,   sensorQuadEncoder)
#pragma config(Sensor, dgtl3,  leftEncoder,    sensorQuadEncoder)
#pragma config(Sensor, dgtl8,  sonarSensor,    sensorSONAR_inch)
#pragma config(Motor,  port1,           leftMotor,     tmotorVex393_HBridge, openLoop)
#pragma config(Motor,  port6,           clawMotor,     tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port7,           armMotor,      tmotorVex393_MC29, openLoop, reversed)
#pragma config(Motor,  port10,          rightMotor,    tmotorVex393_HBridge, openLoop, reversed)

task main()
{
	while(1 == 1)
	{
		if(vexRT[Btn6U] == 1)
		{
			int distance = 50;
			int actualDistance = 0;
			int moveDistance = 0;
			int stopDistance = 0;

			motor[clawMotor] = -64;
			wait1Msec(800);
			motor[clawMotor] = 0;

			motor[armMotor] = 64;
			wait1Msec(800);
			motor[armMotor] = 10;

			while(SensorValue(sonarSensor) > stopDistance || SensorValue(sonarSensor) == -1)
		  {
		  	motor[rightMotor] = 50;
		  	motor[leftMotor] = -50;

		  	actualDistance = SensorValue(sonarSensor);
		  	if (actualDistance <= distance)
		  	{
		  		motor[rightMotor] = 0;
		  		motor[leftMotor] = 0;
		  		distance = actualDistance;




		  		moveDistance = actualDistance - stopDistance;
		  		if (actualDistance <= 10)
		  			moveDistance = 0;



		  moveDistance = ( movedistance * 360)/13;

		  SensorValue[rightEncoder] = 0;
		  while(SensorValue[rightEncoder] <= moveDistance)
		  {

		  			motor[rightMotor] = 30;
		  			motor[leftMotor] = 30;

		  	}
		}
}
motor[rightMotor] = 0;
motor[leftMotor] = 0;

motor[clawMotor] = -64;
wait1Msec(800);
motor[clawMotor] = 0;

motor[armMotor] = -64;
wait1Msec(500);
motor[armMotor] = 0;

SensorValue[rightEncoder] = 0;
while(SensorValue[rightEncoder] <= 180)
{
	motor[rightMotor]= 30;
	motor[leftMotor] = 30;
}

motor[clawMotor] = 64;
wait1Msec(800);
motor[armMotor];

	}
	}
}
