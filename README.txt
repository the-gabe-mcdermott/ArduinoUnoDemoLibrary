# Arduino Uno LED and Toggle Button Example Project



Intro
	This is a library containing a simple example project for the Arduino Uno
		
		This demo reads the status of a push button and toggles between powering one
		out of two LEDs. 

	This project is written in C, and was written in AtmelStudio 7 (Version 7.0.1417) 

	This project uses the Arduino Uno R3, equiped with an Atmel ATmega328P

Contents:
	A) Including This Code In Your AtmelStudio Project
	B) Making Changes to This Code
	C) MIT LICENSE



A) Including This Code In Your AtmelStudio Project
	
	/*****************************************************************************
	* Steps:
	*
	*	0) Setup Atmel Studio IDE and Create a New Arduino Uno Project
	*		(Windows 10 instructions)
	*	
	*	1) Download Code From Github
	*	
	*	2) Add the Folder as a Source Location in AtmelStudio
	*	
	*	3) Include into your project main
	*
	*****************************************************************************/	
	
	0) Setup Atmel Studio IDE and Create a New Arduino Uno Project
		/**************************************************************************
		* Steps:
		*	I) 		Install Atmel Studio IDE
		*	II) 	Setup the Arduino Uno USB Programmer "avrdude.exe"
		*	III) 	Create a New Project for the Arduino Uno
		*	IV) 	Sanity Check
		*******************************************************************************/	
			Note these setup instructions are written for Windows 10 systems. 
			
			
			
		I) Install Atemel Studio IDE
			You can download the Ateml Studio 7 Integrated Development Environment here:
				http://www.atmel.com/microsite/atmel-studio/
			
			Follow the Installer Instructions
			
			
		
		II) Setup the Arduino Uno USB Programmer "avrdude.exe"
			/***********************************************************************
			* Steps:
			*	a)Find "avrdude.exe"
			*	b)Determine your COM port 
			*	c)Add avrdude.exe to Atmel Studio
			***********************************************************************/
				You will need to show Atmel Studio where the Arduino Uno USB Programer 
				(called "avrdude.exe) is on your computer. 
		
				You will also need to specify which COM port arvdude.exe should use to 
				program the Arduino Uno
				
				
			a)Find "avrdude.exe"
					
				On most installs "avrdude.exe" can be found on your computer at:
					C:\Program Files (x86)\Arduino\hardware\tools\avr\bin\avrdude.exe
					
				Once found, save the path somewhere. You will need it for "c)Add avrdude.exe to Atmel Studio" 
					
		
			b)Determine your COM port 
					
				Plug your Arduino Uno into your computer with a USB cable.
					
				Open the Windows Device Manager
					
				In the list of device types select the drop down button for "Ports(COM & LPT)"
				
				In the list of Ports you should see listed:
					"Arduino Uno (COM#)"
				Where the "#" is the serial port number your computer has assigned
				the Arduino Uno
					
					Ex:
						Arduino Uno (COM4)
				
				Save the COM number somewhere. You will need it for "c)Add avrdude.exe to Atmel Studio"
		
			c)Add avrdude.exe to Atmel Studio
					
				In Atmel Studio select:
					Tools -> "External Tools"
			
				Press the "Add" button.
		
				For the new tool, fill out the feilds as follows:
			
					Title: Send to the Arduino Uno
					Command: <put the full path to avrdude.exe here>
					Arguments: -C "C:\Program Files (x86)\Arduino\hardware\tools\avr\etc\avrdude.conf" -p atmega328p -c arduino -P <put your COM port here> -b 115200 -U flash:w:"$(ProjectDir)Debug\$(TargetName).hex":i

					Ex:
						Title: Send to the Arduino Uno
						Command: C:\Program Files (x86)\Arduino\hardware\tools\avr\bin\avrdude.exe
						Arguments: -C "C:\Program Files (x86)\Arduino\hardware\tools\avr\etc\avrdude.conf" -p atmega328p -c arduino -P COM5 -b 115200 -U flash:w:"$(ProjectDir)Debug\$(TargetName).hex":i						
				
				Press "Apply" and then "OK".
			
				You should now see the "Send to Arduino Uno" option under to "Tools" menu."
				You will use this to program the Arduino Uno with your code.
					
					
		III) Create a New Project for the Arduino Uno
			Once Atmel Studio is Installed, create a new project for the Arduino Uno
 				Select: 
					File->New Project
				
				You will see a list of project types you can use.
				
				Select a "GCC C ASF Board Project" 
				
				Name the project whatever you would like,
				and update the "Location" feild to wherever
				you want the project to live on your computer.
					
				Select "OK"

				You will see a long list of different microcontrolers.
				
				Select the "Atmega328P"
					You can use the Search tool in the top right hand corner
					"ATmega328P"
				
				The bottom pane will update to display
					"Atmega328P Xplained MINI - Atmega328p" and
					"User Board template - megaAVR"
					
				Select "User Board template - megaAVR" and press "OK".
				
				You should see a starter project. On the right hand side
				will be the Solution Explorer Pane. The Solution Explorer
				Pane will show a "src" directory, inside of which will be
				the project "main.c"
	
	
	
	
		IV)Sanity Check
			Ooof. Alright. If you did all of that correctly, 
			you should be able to build the new project without errors
			And send the built code to the Arduino Uno to run. 
			
			a) Build the new Project
				In Atmel Studio select the Build toolbar
				
				Select "Build Solution"
					
				An output window should open. It will display either 
					"Build Succeeded" or a list of errors.
					
			b) Send the Built Code to the Arduino Uno
				Double check your Arduino is plugged into your computer.
					
				In Atmel Studio select the Tools toolbar.
				
				Select "Send to the Arduino Uno"
					
				An output window should open. If successful, it will display
				a list of status messages, the last of which will be:
					"avrdude.exe done.  Thank you."

				If not sucessfull, it will display some error message like:
					"avrdude.exe: ser_open(): can't open device "\\.\COM5": Access is denied."
					
		
		
		
		
	1) Dowload From Github
		
		To get the source files on your computer, you can either download them from Github
		as a zip file, or clone the repository.
				
		Download ZIP:
			https://github.com/the-gabe-mcdermott/ArduinoUnoLEDandToggleButtonExample
			Click the "Clone or Download" button near the top left corner of the page.

		Clone Repo:
			You will want to Clone the repo into your AtmelStudio "src" folder.

			You can use any number of git tools for whatever OS you are using. 
	
			If you have git installed as a command line tool, navigate to the "src" folder and call			
				git clone https://github.com/the-gabe-mcdermott/ArduinoUnoLEDandToggleButtonExample.git
	

	2) Add the Folder as a Source Location in AtemlStudio
	
		Show Folder in AtemelStudio Solution sindow
			At the top of the Solution Explorer window, select "Show All Files" in the toolbar.
			
			All the files contained within the project directory should now be visible.
			
			Find the folder containing the Demo code
			
			Right click the folder and select "Include in Project"

		Add Folder as A Project Source Directory 
			You will need to update the project settings to add the new folder as a place the 
			compiler can find code.
			
			In the Solution Explorer right click on the project name and select "Properties"
			
			Select Toolchain->AVR/GNU C Compiler->Directories
			
			Select the "Add Item Button"
			
			You can type in the relative path to the folder, or use the file navigator provided 
			to select the folder.
			
			Close the properties window
			
	3)	Include into your project main
			The quickest way to start actually using the code is to use the functions found in:
				"ButtonToggleLedDemo."
		
			I recomend you also read/use the simple test framework found at:
				"Tests/TestButtonToggleLedDemo.h"
			It contains a few simple tests, and can be easily extended with your own.	


B) Making Changes to This Code

	If you would like to contribute to this code, you can fork this repository
	and save your changes in the new repo. 

	When you are done with your changes, submit a pull request on this repo and I'll
	take a look at your contribution!

	Future work I am planning for this demo can be found in: 
		"TODO.txt"

	I can be reached at
		 the.gabe.mcdermott@gmail.com 



C) MIT LICENSE
	
	This software is released under the MIT License
	
	Copyright 2017 Gabriel McDermott

	Permission is hereby granted, free of charge, to any person obtaining a copy
	of this software and associated documentation files (the "Software"), to deal
	in the Software without restriction, including without limitation the rights 
	to use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies 
	of the Software, and to permit persons to whom the Software is furnished to do so,
	subject to the following conditions:

	The above copyright notice and this permission notice shall be included in all copies
	or substantial portions of the Software.

	THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, 
	INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A 
	PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT
	HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION 
	OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE 
	SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.