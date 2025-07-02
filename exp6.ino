import time
import board
import adafruit_dht


sensor = adafruit_dht.DHT11(board.D4, use_pulseio=False)

while True:
    try:
        temperature_c = sensor.temperature
        temperature_f = temperature_c * (9 / 5) + 32
        humidity = sensor.humidity

        print(f"Temp={temperature_c:0.1f}C, Temp={temperature_f:0.1f}F, Humidity={humidity:0.1f}%")

    except Exception as error:
        print(f"Unhandled exception: {error}")
        sensor.exit()
        break 
    time.sleep(1)









  
sudo apt update && sudo apt upgrade
mkdir dht_test
cd dht_test
python3 -m venv venv
source venv/bin/activate
python3 -m pip install adafruit-circuitpython-dht
pip install RPi.GPIO
python3 file.py
