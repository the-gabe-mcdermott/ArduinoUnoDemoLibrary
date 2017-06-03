# Arduino Uno LED and Toggle Button Example Project



Intro
	This is a library containing a simple example project for the Arduino Uno
		
		This demo reads the status of a push button and toggles between powering one
		out of two LEDs. 

	This project is written in C, and was written in AtmelStudio 7 (Version 7.0.1417)
	This project uses the Arduino Uno R3, equiped with an Atmel Atmega328P

Contents:
	A) Including This Code In Your AtmelStudio Project
	B) Making Changes to This Code
	C) MIT LICENSE



A) Including This Code In Your AtmelStudio Project
	
	Steps:
		1) Download Fom Github
		2) Add the Folder as a Source Location in AtemlStudio
		3) Include into your project main
	
	1) Dowload From Github
		
	To get the source file on your computer, you can either download them from Github
	as a zip file, or clone the repository.
			
	Download ZIP:
			https://github.com/the-gabe-mcdermott/ArduinoUnoLEDandToggleButtonExample
			Click the "Clone or Download" button near the top left corner of the page.

	Clone Repo:
		You will want to Clone the repo into your AtmelStudio "src" folder.

		You can use any number of git tools for whatever OS you are using.
	
		If you have git installed as a command line tool, you can navigate to the "src" folder and call
				
			git clone https://github.com/the-gabe-mcdermott/ArduinoUnoLEDandToggleButtonExample.git


	2) Add the Folder as a Source Location in AtemlStudio
		Once you have the code on your machine, you will need to incude it into your 
		AtmelStudio project, and into your "main" file.
			
		Include into AtmelStudio
			At the top of the Solution Explorer pane, select "Show All Files" in the toolbar.
			
			All the files contained within the project directory should now be visible.
			
			Find the folder containing the Demo code
			
			Right click the folder and select "Include in Project"

	C)	Include into your project main
			You will need to update the project settings to add the new folder as a place the 
			compiler can find code.
			
			In the Solution Explorer right click on the project name and select "Properties"
			
			Select Toolchain->AVR/GNU C Compiler->Directories
			
			Select the "Add Item Button"
			
			You can type in the relative path to the folder, or use the file navigator provided 
			to select the folder.
			
			Close the properties pane
			
			You may now include any of the files in the demo you wish.
				
			Ex:
				#include "ButtonToggleLedDemo.h"
				
		The quickest way to start actually using the code is to checkout the functions found in:
			"ButtonToggleLedDemo."
		
		I recomend you also read/use the simple test framework found at:
			"Tests/TestButtonToggleLedDemo.h"
		It contains a few simple tests, and can be easily extended with your own.	


B) Making Changes to This Code

	If you would like to make changes to this code, you can fork this repository
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