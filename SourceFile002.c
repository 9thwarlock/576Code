#pragma config(Motor,  port1,           leftMotor,     tmotorVex393_HBridge, openLoop)
#pragma config(Motor,  port6,           clawMotor,     tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port7,           armMotor,      tmotorVex393_MC29, openLoop, reversed)
#pragma config(Motor,  port10,          rightMotor,    tmotorVex393_HBridge, openLoop, reversed)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

task main()
{
	while(1==1)
	{
		motor[leftMotor] = vexRT[Ch2]/1.5;
		motor[rightMotor] = vexRT[ch3]/1.5;

		if(vexRT[Btn6U]==1)
		{
			motor[leftMotor] = 42;
			motor[rightMotor] = 42;
			wait1Msec(4040);
				break;
		}

}

}
