import time
import RPi.GPIO as GPIO
pir_pin = 12  
led_pin = 11   

GPIO.setmode(GPIO.BOARD)
GPIO.setup(pir_pin, GPIO.IN)
GPIO.setup(led_pin, GPIO.OUT)

try:
    print("PIR Sensor Test (CTRL+C to exit)")
    time.sleep(2) 
    print("Ready")
   
    while True:
        if GPIO.input(pir_pin): 
            print("Motion detected")
            GPIO.output(led_pin, GPIO.HIGH)     
        else:
            print("No motion detected")
            GPIO.output(led_pin, GPIO.LOW)
        time.sleep(1)
except KeyboardInterrupt:
    print("Exiting...")
finally:
    GPIO.cleanup()
