Compute (Classify) Input GPIO Signal Frequency




HW1: write C code to toggle a GPIO pin as fast as possible. 
HW2: write C code to sample a GPIO pin and then compute the input GPIO signal frequency based on sample values.


Given: Input frequency range from 1Hz to 50MHz.
Goal: Do your best to cover as wide frequency range as possible.  
Hints: Need handle differently for low frequency and high frequency.


With a limited memory resource, how do you sample input GPIOs? How fast do you sample?
High Frequency: try sample as fast as possible.
Low Frequency: added sleep between samples.


How much sleep you need? How do you adjust sleep values between two GPIO reads?


Pseudocode
-----------------
Step 1: search for toggling signals  (optional;  you may hardcode one GPIO pin)
For each GPIO pin from PIN5 to PIN30
             scan for activities
             if a GPIO pin is toggling, then set activity mask.
                     activity_mask |=  (1 << pin);




Step 2: write c Code to sample the GPIO pin as fast as possible. Then compute the input GPIO frequency.
Method 1:  define a global array buffer.


#define BUFFER_SIZE 1024  
/* try to play around the size? What is the max buffer size in LPC1768 */
unsigned char buffer[BUFFER_SIZE];


/* collecting raw samples */
void buffer_sampling(volatile unsigned int * P)
{ 
    int i;
    for (i = 0; i< BUFFER_SIZE; i++) {
          buffer[i] = *P;
   }
}


/* or create 8 buffer arrays to check any difference */
void buffer_sampling(volatile unsigned int * P)
{ 
    int i;
    for (i = 0; i< BUFFER_SIZE; i++) {
          buffer1[i] = *P; buffer2[i] = *P;
          buffer3[i] = *P; buffer4[i] = *P;
          buffer5[i] = *P; buffer6[i] = *P;
          buffer7[i] = *P; buffer8[i] = *P;


   }
}






/* compute the frequency of the input signal */
int get_frequency(void)
{
    int freq = 0;
     //based buffer[] values 
    return freq;
}




Method 2: Try to force compiler to allocate 8 registers. 
https://github.com/Shengliang/e4357/blob/master/spring2015/hw2/main.c


/* collecting samples using register */
void register_sampling(volatile unsigned int *P)
{
register unsigned char d1, d2, d3, d4, d5,d6,d7,d8;
/* get samples */
d1 = *P;d2 = *P;d3 = *P;d4 = *P;
d5 = *P;d6 = *P;d7 = *P;d8 = *P;


/* copy to global buffer */
buffer[0] = d1;
buffer[1] = d2;
buffer[2] = d3;
buffer[3] = d4;
buffer[4] = d5;
buffer[5] = d6;
buffer[6] = d7;
buffer[7] = d8;
}




________________




Method 3: counting method for slow speed signals (optional)
Save samples using run-length encoding method.
reference: http://en.wikipedia.org/wiki/Run-length_encoding


Method 4: save samples in VCD format (optional for your final project)
You may extend this homework become your final project.  


Design and implement your own logic analyzer with LPC1768.
* Collect samples as fast as possible
* save samples to local flash
* upload samples to your computer


Refence: http://en.wikipedia.org/wiki/Value_change_dump
http://sigrok.org/wiki/Input_output_formats
Use waveform or sigrok viewer to view your sample data.