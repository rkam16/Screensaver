/*
  Screensaver.pde
 
 Example file using the The Meggy Jr Simplified Library (MJSL)
  from the Meggy Jr RGB library for Arduino
   
   Causes the screen to be divided into 16 different functions that
   each blinks in a different random pattern with eight different
   colors. The whole screenis lit up with different colors that
   strobe every (50). Each function is a line that forms the side of
   scaling squares.
   
   
 
 Version 1.25 - 12/2/2008
 Copyright (c) 2008 Windell H. Oskay.  All right reserved.
 http://www.evilmadscientist.com/
 
 This library is free software: you can redistribute it and/or modify
 it under the terms of the GNU General Public License as published by
 the Free Software Foundation, either version 3 of the License, or
 (at your option) any later version.
 
 This library is distributed in the hope that it will be useful,
 but WITHOUT ANY WARRANTY; without even the implied warranty of
 MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 GNU General Public License for more details.
 
 You should have received a copy of the GNU General Public License
 along with this library.  If not, see <http://www.gnu.org/licenses/>.
 	  
 */

 
 
 
 

/*
 * Adapted from "Blink,"  The basic Arduino example.  
 * http://www.arduino.cc/en/Tutorial/Blink
 */
#include <MeggyJrSimple.h>

void setup()
{
  MeggyJrSimpleSetup();
  
}

void loop() //Repeats this pattern forever.
{
//The code bellow allows 9 color variables to each have 8 random colors blink in a different patter
// In other words there are nine different customcolor patterns. Each one uses eight colors in a random order random.
// Every dot in a designated line will change to the same color at the same time.
random(8);              
int x=random(8);        
int y=random(8);
int a=random(8);
int b=random(8);
int c=random(8);
int d=random(8);
int e=random(8);
int f=random(8);
int g=random(8);

for (int i=0; i<7; i++)
for (int j=0; j<1; j++)


{
DrawPx(i,j,x);
DisplaySlate();
}

for (int i=0; i<1; i++)  // Each on of these makes a specific line of dots light up.  
for (int j=1; j<8; j++)


{
DrawPx(i,j,y);   //Each code allows for the previously assigned line to have a specific custom color pattern.
DisplaySlate(); //Eight colors are cycled at random through all the dots in the line.
}


for (int i=1; i<8; i++)
for (int j=7; j<8; j++)


{
DrawPx(i,j,f);
DisplaySlate();
}
for (int i=7; i<8; i++)
for (int j=0; j<7; j++)


{
DrawPx(i,j,e);
DisplaySlate();
}
for (int i=1; i<6; i++)
for (int j=1; j<2; j++)


{
DrawPx(i,j,a);
DisplaySlate();
}

for (int i=1; i<2; i++)
for (int j=2; j<7; j++)


{
DrawPx(i,j,c);
DisplaySlate();
}


for (int i=2; i<7; i++)
for (int j=6; j<7; j++)


{
DrawPx(i,j,d);
DisplaySlate();
}
for (int i=6; i<7; i++)
for (int j=1; j<6; j++)


{
DrawPx(i,j,b);
DisplaySlate();
}

for (int i=2; i<5; i++)
for (int j=2; j<3; j++)


{
DrawPx(i,j,y);
DisplaySlate();
}

for (int i=2; i<3; i++)
for (int j=3; j<6; j++)


{
DrawPx(i,j,e);
DisplaySlate();
}


for (int i=3; i<6; i++)
for (int j=5; j<6; j++)


{
DrawPx(i,j,x);
DisplaySlate();
}
for (int i=5; i<6; i++)
for (int j=2; j<5; j++)


{
DrawPx(i,j,f); //A specific dot in the center, not a line but holds the same functions 
DisplaySlate(); //Will blink a random of eight colors based on its color variable.
}
{
DrawPx(3,3,c);
DisplaySlate();
}
{
DrawPx(3,4,f);
DisplaySlate();
}
{
DrawPx(4,4,d);
DisplaySlate();
}
{
DrawPx(4,3,g);
DisplaySlate();

delay(50); //Controls the rate in which the colors switch between their eight random possibilites.
}
}

