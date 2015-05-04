Homework 4 assignment:

Debug with CMSISDAP
  What is CMSIS-DAP?
  CMSISDAP provides a standardized way to access the Coresight Debug Access Port (DAP)
  of an ARM Cortex microcontroller via USB. CMSISDAP is generally implemented as an
  onboard interface chip, providing direct USB connection from a development board to a
  debugger running on a host computer on one side, and over JTAG (Joint Test Action Group)
  or SWD (Serial Wire Debug) to the target device to access the Coresight DAP on the other.

  ref: http://developer.mbed.org/handbook/CMSISDAP

  Goal: Pick one method to debug your mbed program.
  https://github.com/Shengliang/e4357/blob/master/fall2014/quiz/Q4.txt
  (Hint: use debugger to find out the quiz.4.question.5 answers.)

  Method 1: Keil MDK
  http://developer.mbed.org/handbook/CMSISDAPMDK
  http://www.keil.com/appnotes/files/apnt207.pdf

  Method 2: pyOCD
  https://github.com/mbedmicro/pyOCD

  Reading: An Embedded Software Primer Chapter 5
  http://en.wikibooks.org/wiki/Embedded_Systems


Total Hours that I spent:  6 hours


Mistakes that I made: not able to download file from mbed.org.

Things that I learned: should post for help sooner, since classmate have succedded.


Activity Log:

   - Picked method 1, wanted to get familiar with Keil since it is a popular tool 
     among Firmware guys. 
   - Downloaded Keil mdk514 package and installed on desktop pc.
   - Follow CMSISDAPMDK link to update interface firmware and install serial port driver.
   - Got a previously saved copy of xxx_141212.if file, so didn't have much problem.
   - Big problem when trying to download serial port driver from mbed.org site. The 
     downloaded file was too small and always got the same error when run. Googled around
     to search for answers for 1.5 hours and finally gave up. Got up early next day and 
     post classmate for help.
   - Got a working copy from Cliff.
   - Compiled and downloaded the mbed_blinky code to mbed and working.
   - Ran debug and able to single step program.

