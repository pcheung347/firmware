void toggle_gpio(void)
{
#define FIO2DIR0 (*(volatile unsigned char *) (0x2009C040)) /* a pointer to a GPIO direction register */
#define FIO2PIN0 (*(volatile unsigned char *) (0x2009C054)) 
FIO2DIR0 = 0xFF;  // SET PORT 2 TO OUTPUT
while(1) {
  FIO2PIN0 = 0x10;
  FIO2PIN0 = 0x00;
  }
}
int main(void)
{
  toggle_gpio();
}

