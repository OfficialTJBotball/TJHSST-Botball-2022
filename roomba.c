#include <kipr/wombat.h>

int main()
{
    // analog 0 is right color sensor
    // analog 1 is the left color sensor
    create_connect(); // establishes the connection
    int threshold = 1500;
    enable_servos();
    set_servo_position(0, 1800);
        
   	while(digital(0) == 0) { // while either of the sensors read black
    	create_drive_straight(-250); // go forward (stays for 250 ms)  
        if(analog(0) < threshold && analog(1) > threshold)
        {// if the right sees white
            msleep(100);
            create_spin_CW(50);// turn a little bit to the left *if its veering off path prob decrease the 100*
        	printf("turning left\n");
        }
        if(analog(0) > threshold && analog(1) < threshold)
        {
           	msleep(100);
            create_spin_CCW(50);// turn a little bit to the right *if its veering off path prob decrease the 100*
        	printf("turning right\n");
        }
    }   
    
    create_spin_CCW(300);
    set_servo_position(0, 750);
    
    while(1) { // while either of the sensors read black
    	create_drive_straight(250); // go forward (stays for 250 ms)  
        if(analog(0) < threshold && analog(1) > threshold)
        {// if the right sees white
            msleep(100);
            create_spin_CCW(200);// turn a little bit to the left *if its veering off path prob decrease the 100*
        	printf("turning left\n");
        }
        if(analog(0) > threshold && analog(1) < threshold)
        {
           	msleep(100);
            create_spin_CW(200);// turn a little bit to the right *if its veering off path prob decrease the 100*
        	printf("turning right\n");
        }
    }
    
    set_servo_position(0, 1620);
    
    disable_servos();

    return 0; // exits the program !!
    
}
