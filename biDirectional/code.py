import serial
import time

ser =serial.Serial('/dev/ttyACM0',115200,timeout=1.0)
time.sleep(3)
ser.reset_input_buffer()
print("serial ok")

try:
    while True:
        time.sleep(1)
        print("send msg to arduino")
        ser.write("hello from raspbery pi\n".encode('utf-8'))
        while(ser.in_waiting<=0):
            time.sleep(0.01)
        response=ser.readline().decode('utf-8').rstrip()
        print(response)
except KeyboardInterrupt:
    print("closed serial communication")
    ser.close()