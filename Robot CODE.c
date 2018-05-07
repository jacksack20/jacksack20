#pragma config(Motor,  port1,           leftDrive,     tmotorVex393_HBridge, openLoop)
#pragma config(Motor,  port2,           rightJaw,      tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port3,           leftJaw,       tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port4,           rightClaw,     tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port5,           leftclaw,      tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port10,          rightDrive,    tmotorVex393_HBridge, openLoop)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

task main()
{

	while(true)
	{

		motor[leftDrive] = vexRT[Ch3]; //Make left motor move
		motor[rightDrive] = vexRT[Ch2]; //Make right motor move



	 if (vexRT[Btn6U] == 1){
			motor[rightClaw] = 127;//Claw up
			motor[leftclaw] = 127;
		}
		else if (vexRT[Btn6D] == 1){
    	motor[rightClaw] = -127;//Claw down
    	motor[leftclaw] = -127;
    }
    else{
    	motor(rightClaw) = 0 ;
    	motor(leftclaw) = 0 ;
  }


  	if (vexRT[Btn5U] == 1) {
  		motor[leftJaw] = 127;
  		motor[rightJaw] = 127;
  	}

  	else if (vexRT[Btn5D] == 1){
  		motor[leftJaw] = -127;
  		motor[rightJaw] = -127;
  	}

  	else{
  		motor(rightJaw) = 0 ;
  		motor(leftJaw) = 0;
  	}

  }
}
