# ArduinoUnoPinControlDemo

Intro
	This is a demo project for configuration, reading, and writing to the header pins on the Arduino Uno
		This project is written in C, and was written in AtmelStudio 7 (Version 7.0.1417)
		This project uses the Arduino Uno R3, equiped with an Atmel Atmega328P

Contents:
	1) LICENSE
	2) Including This Code In Your AtmelStudio Project
	3) Making Changes to This Code

1) LICENSE
	
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


2) Including This Code In Your AtmelStudio Project
	
	A) Dowload From Github
		
		To get the source file on your computer, you can either download them from Github
		in a zip file, or clone the repository.
			
		Download ZIP:
				https://github.com/the-gabe-mcdermott/ArduinoUnoPinControlDemo		
				Click the "Clone or Download" button near the top left corner of the page.

		Clone Repo:
			You will want to Clone the repo into your AtmelStudio "src" folder.

			You can use any number of git tools for whatever OS you are using.
	
			If you have git installed as a command line tool, you can navigate to the "src" folder and call
				
				git clone https://github.com/the-gabe-mcdermott/ArduinoUnoPinControlDemo.git



	B) Include Code in Atmel Studio Project
			Once you have the code on your machine, you will need to incude it into your AtmelStudio project, and into your "main" file.
			
			Include into AtmelStudio
				At the top of the Solution Explorer pane, select "Show All Files" in the toolbar.
				All the files contained within the project directory should now be visible.
				Find the folder containing the Demo code
				Right click the folder and select "Include in Project"

			Include into your main
				You will need to update the project settings to add the new folder as a place the compiler can find code.
				In the Solution Explorer right click on the project name and select "Properties"
				Select Toolchain->AVR/GNU C Compiler->Directories
				Select the "Add Item Button"
				You can type in the relative path to the folder, or use the file navigator provided to select the folder.
				Close the properties pane
				You may now include the demo files like you would any other files.
				
				Ex:
					#include "PinDefinitions.h"


	C) Error Recovery?

3) Making Changes to This Code

	If you would like to make changes to this code, you can fork this repository
	and save your changes in the new repo. 

	When you are done with your changes, you can submit a pull request on this repo
	and I will review your contribution and potentially add it to the project.



Happy coding!

