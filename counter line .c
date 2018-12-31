#include "p24FV32KA302.h"

#include "configBits.h"

#include "delay.h"

#include "stdio.h"




 #define SHORT_DELAY 100

 #define LONG_DELAY 2500z




void initTimer (void);
void delay (unsigned long milli);
void one(void);
void two(void);
void three (void);
void four (void);
void startTurnLeft (void);
void startStop (void);
void stop (void);
void turnLeft180(void);
void turnLeft90(void);
void turnRight180(void);
void turnRight90(void);
void startTurnRight(void);
void startTurn180(void);
void start(void);
void turnRight90No(void);
void lineCount(void);
void startGo(void);
void startCount(void);
void stop100(void);
void position1(void);
void position2(void);
void position3(void);
void position4(void);
void turnRightEff(void);
void turnLeftEff(void);
void turnRightEffNo(void);
void turnLeftEffNo(void);
int lineCounter=0;
int counterTwo=0;
int main (void)

{
    initTimer();
    TRISB=0;
    LATB=0;
    TRISA=0x0F;
    ANSA=0;

    while (1)
    {
        startCount();
        if (lineCounter==1)
        {
            position1();
        }
        else if (lineCounter==2)
        {
            position2();
        }
        else if(lineCounter==3)
        {
            position3();
        }
        else if(lineCounter==4)
        {
            position4();
        }
    }
}
void position1(void)
{
  LATBbits.LATB10 = 1;
        start();
        turnLeft90();
        start2();
        delay(500);
        turnRightEff();
        start3();
        delay(250);
        turnRightEff();
        start4();
        delay(300);
        turnRightEffNo();
        start5();
        delay(500);
        turnRightEff();
        start6();
        delay(500);
        turnLeftEff();
        stop100();
        start8();
      
}
void position2(void)
{
        LATBbits.LATB10 = 1;
        start();
        turnRight90();
        start2();
        delay(500);
        turnLeftEff();
        start3();
        delay(250);
        turnLeftEff();
        start4();
        delay(400);
        turnLeftEffNo();
        start5();
        delay(500);
        turnLeftEff();
        start6();
        delay(500);
        turnRightEff();
        stop100();
        start8();
}
void position3(void)
{
    LATBbits.LATB10 = 1;
        start();
        turnLeft90();
        start2();
        delay(500);
        turnRightEff();
        start3();
        delay(250);
        turnLeftEff();
        start4();
        delay(300);
        turnLeftEffNo();
        start5();
        delay(500);
        turnRightEff();
        start6();
        delay(500);
        turnLeftEff();
        stop100();
        start8();

}
void position4(void)
{
   LATBbits.LATB10 = 1;
        start();
        turnRight90();
        start2();
        delay(500);
        turnLeftEff();
        start3();
        delay(250);
        turnRightEff();
        start4();
        delay(690);
        turnRight180();
        start5();
        delay(500);
        turnLeftEff();
        start6();
        delay(500);
        turnRightEff();
        stop100();
        start8();
}
void lineCount(void)
{
    while (PORTAbits.RA0==0 && PORTAbits.RA1==0)
    {
        lineCounter=lineCounter+1;
    }
}
void start(void)
{
    while(1){
    if (PORTAbits.RA0==0 && PORTAbits.RA1==1)
            two();
        else if (PORTAbits.RA0==1 && PORTAbits.RA1==0)
            three();
        else if (PORTAbits.RA0==1 && PORTAbits.RA1==1)
            four();
         else if (PORTAbits.RA0==0 && PORTAbits.RA1==0)
             break;

}
}
void startCount(void)
{
    while(1)
    {
   if (PORTAbits.RA0==0 && PORTAbits.RA1==0)
    {
       delay(700);
       lineCounter=lineCounter+1;
    }
    LATBbits.LATB6=1;
    LATBbits.LATB7=0;
    LATBbits.LATB8=0;
    LATBbits.LATB9=1;
    delay(80);
    LATBbits.LATB6=0;
    LATBbits.LATB7=0;
    LATBbits.LATB8=0;
    LATBbits.LATB9=0;
    counterTwo=counterTwo+1;
    if(counterTwo==10)
    {
        break;

}
}
}

void start2(void)
{
    while(1){
    if (PORTAbits.RA0==0 && PORTAbits.RA1==1)
            two();
        else if (PORTAbits.RA0==1 && PORTAbits.RA1==0)
            three();
        else if (PORTAbits.RA0==1 && PORTAbits.RA1==1)
            four();
         else if (PORTAbits.RA0==0 && PORTAbits.RA1==0)
             break;

}
}
void start3(void)
{
    while(1){
    if (PORTAbits.RA0==0 && PORTAbits.RA1==1)
            two();
        else if (PORTAbits.RA0==1 && PORTAbits.RA1==0)
            three();
        else if (PORTAbits.RA0==1 && PORTAbits.RA1==1)
            four();
         else if (PORTAbits.RA0==0 && PORTAbits.RA1==0)
             break;

}
}
void start4(void)
{
    while(1){
    if (PORTAbits.RA0==0 && PORTAbits.RA1==1)
            two();
        else if (PORTAbits.RA0==1 && PORTAbits.RA1==0)
            three();
        else if (PORTAbits.RA0==1 && PORTAbits.RA1==1)
            four();
         else if (PORTAbits.RA0==0 && PORTAbits.RA1==0)
             break;

}
}
void start5(void)
{
    while(1){
    if (PORTAbits.RA0==0 && PORTAbits.RA1==1)
            two();
        else if (PORTAbits.RA0==1 && PORTAbits.RA1==0)
            three();
        else if (PORTAbits.RA0==1 && PORTAbits.RA1==1)
            four();
         else if (PORTAbits.RA0==0 && PORTAbits.RA1==0)
             break;

}
}
void start6(void)
{
    while(1){
    if (PORTAbits.RA0==0 && PORTAbits.RA1==1)
            two();
        else if (PORTAbits.RA0==1 && PORTAbits.RA1==0)
            three();
        else if (PORTAbits.RA0==1 && PORTAbits.RA1==1)
            four();
         else if (PORTAbits.RA0==0 && PORTAbits.RA1==0)
             break;

}
}
void start7(void)
{
    while(1){
    if (PORTAbits.RA0==0 && PORTAbits.RA1==1)
            two();
        else if (PORTAbits.RA0==1 && PORTAbits.RA1==0)
            three();
        else if (PORTAbits.RA0==1 && PORTAbits.RA1==1)
            four();
         else if (PORTAbits.RA0==0 && PORTAbits.RA1==0)
            four();

}
}
void start8(void)
{
   LATBbits.LATB6=1;
    LATBbits.LATB7=0;
    LATBbits.LATB8=0;
    LATBbits.LATB9=1;
    delay (1000);
    LATBbits.LATB6=0;
    LATBbits.LATB7=0;
    LATBbits.LATB8=0;
    LATBbits.LATB9=0;
    delay (5000);

}


void startStop (void)
{
      while (PORTAbits.RA0==0 && PORTAbits.RA1==0)
        {

    LATBbits.LATB6=1;
    LATBbits.LATB7=0;
    LATBbits.LATB8=0;
    LATBbits.LATB9=1;
    delay (1000);
    LATBbits.LATB6=0;
    LATBbits.LATB7=0;
    LATBbits.LATB8=0;
    LATBbits.LATB9=0;
    delay (5000);
    break;
    }
    }
    void two (void)
    {
        while (PORTAbits.RA0==0 && PORTAbits.RA1==1)
        {
    LATBbits.LATB6=0;
    LATBbits.LATB7=1;
    LATBbits.LATB8=0;
    LATBbits.LATB9=1;
        }
    }
    void three (void)
    {
    while (PORTAbits.RA0==1 && PORTAbits.RA1==0)
    {

     LATBbits.LATB6=1;
    LATBbits.LATB7=0;
    LATBbits.LATB8=1;
    LATBbits.LATB9=0;
    }
 }
    void four (void)
    {
    while (PORTAbits.RA0==1 && PORTAbits.RA1==1)
    {
   //4

     LATBbits.LATB6=1;
    LATBbits.LATB7=0;
    LATBbits.LATB8=0 ;
    LATBbits.LATB9=1;
    }
    }
    void turnLeft180(void)
    {
        while (PORTAbits.RA0==0 && PORTAbits.RA1==0)
        {

    LATBbits.LATB6=1;
    LATBbits.LATB7=0;
    LATBbits.LATB8=0;
    LATBbits.LATB9=1;
    delay (1400);
    LATBbits.LATB6=0;
    LATBbits.LATB7=1;
    LATBbits.LATB8=0;
    LATBbits.LATB9=1;
    delay (1400);
    break;
    }
    }
        void turnRight180(void)
        {
        while (PORTAbits.RA0==0 && PORTAbits.RA1==0)
        {
    LATBbits.LATB6=1;
    LATBbits.LATB7=0;
    LATBbits.LATB8=0;
    LATBbits.LATB9=1;
    delay (1400);
     LATBbits.LATB6=1;
    LATBbits.LATB7=0;
    LATBbits.LATB8=1;
    LATBbits.LATB9=0;
    delay(1400);
    break;
             }
        }
void turnLeft90(void)
    {
        while (PORTAbits.RA0==0 && PORTAbits.RA1==0)
        {
    LATBbits.LATB6=1;
    LATBbits.LATB7=0;
    LATBbits.LATB8=0;
    LATBbits.LATB9=1;
    delay (500);
     LATBbits.LATB6=0;
    LATBbits.LATB7=1;
    LATBbits.LATB8=0;
    LATBbits.LATB9=1;
    delay (500);
    break;
    }
    }
void turnRight90(void)
        {
         while(PORTAbits.RA0==0 && PORTAbits.RA1==0)
        {
    LATBbits.LATB6=1;
    LATBbits.LATB7=0;
    LATBbits.LATB8=0;
    LATBbits.LATB9=1;
    delay (500);
    LATBbits.LATB6=1;
    LATBbits.LATB7=0;
    LATBbits.LATB8=1;
    LATBbits.LATB9=0;
    delay(500);
    break;
             }
        }
    void stop (void)
    {

    LATBbits.LATB6=0;
    LATBbits.LATB7=0;
    LATBbits.LATB8=0;
    LATBbits.LATB9=0;
    delay (5000);

    }
void stop100 (void)
    {

    LATBbits.LATB6=0;
    LATBbits.LATB7=0;
    LATBbits.LATB8=0;
    LATBbits.LATB9=0;
    delay (100);

    }
void turnRightEff(void)
{
    LATBbits.LATB6=1;
    LATBbits.LATB7=0;
    LATBbits.LATB8=0;
    LATBbits.LATB9=1;
    delay (500);
    LATBbits.LATB6=1;
    LATBbits.LATB7=0;
    LATBbits.LATB8=1;
    LATBbits.LATB9=0;
    delay(500);
    while(PORTAbits.RA1==1)
    {
    LATBbits.LATB6=1;
    LATBbits.LATB7=0;
    LATBbits.LATB8=1;
    LATBbits.LATB9=0;
    }
}
void turnLeftEff(void)
{
    LATBbits.LATB6=1;
    LATBbits.LATB7=0;
    LATBbits.LATB8=0;
    LATBbits.LATB9=1;
    delay (500);
    LATBbits.LATB6=0;
    LATBbits.LATB7=1;
    LATBbits.LATB8=0;
    LATBbits.LATB9=1;
    delay(500);
    while(PORTAbits.RA0==1)
    {
    LATBbits.LATB6=0;
    LATBbits.LATB7=1;
    LATBbits.LATB8=0;
    LATBbits.LATB9=1;
    }
}
void turnLeftEffNo(void)
{
    LATBbits.LATB6=0;
    LATBbits.LATB7=1;
    LATBbits.LATB8=0;
    LATBbits.LATB9=1;
    delay(500);
    while(PORTAbits.RA0==1)
    {
    LATBbits.LATB6=0;
    LATBbits.LATB7=1;
    LATBbits.LATB8=0;
    LATBbits.LATB9=1;
    }
}
void turnRightEffNo(void)
{
    LATBbits.LATB6=1;
    LATBbits.LATB7=0;
    LATBbits.LATB8=1;
    LATBbits.LATB9=0;
    delay(500);
    while(PORTAbits.RA1==1)
    {
    LATBbits.LATB6=1;
    LATBbits.LATB7=0;
    LATBbits.LATB8=1;
    LATBbits.LATB9=0;
    }
}

