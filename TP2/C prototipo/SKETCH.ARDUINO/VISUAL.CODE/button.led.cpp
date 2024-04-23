#include <Arduino.h>
#define button_pin = 0
#define led_pin = 2


button = pin(button_pin, pin.in, pin.pull_up)
led = pin(led_pin, pin.out)


while true:
if button value()== 0: 
 led.on()
else:
 led.off()
 time.sleep(0.1)
 