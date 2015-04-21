void toggle_gpio(void)
{
register unsigned char mask_value;      /* register to hold the pin mask value */
volatile unsigned char *gpio_direction; /* a pointer to a GPIO direction register */
volatile unsigned char *gpio_set;       /* a pointer to a GPIO set register */
volatile unsigned char *gpio_clr;       /* a pointer to a GPIO clear register */

uint32_t *p = (uint32_t *) 0x9FC0_0040
while(1) {
  *p = 1;
  *p = 0;
  }
}
int main(void)
{
  toggle_gpio();
}

