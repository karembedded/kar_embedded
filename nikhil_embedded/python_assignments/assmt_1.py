import serial           # import the module
import io
import tkinter as tk
ComPort = serial.Serial('COM6') # open COM24
ComPort.baudrate = 230400 # set Baud rate to 9600
ComPort.bytesize = 8    # Number of data bits = 8
ComPort.parity   = 'N'  # No parity
ComPort.stopbits = 1    # Number of Stop bits = 1

def write_slogan():
   data = ComPort.write(b'AT+AB HostEvent E\x0A')
   string = ComPort.readline()
   data1=string.decode('utf-8')
   print(data1)
   data = ComPort.write(b'AT+AB config streamingserial=0\x0A')
   string = ComPort.readline()
   data1=string.decode('utf-8')
   print(data1)
   data = ComPort.write(b'AT+ab config var06 = 115200\x0A')
   string = ComPort.readline()
   data1=string.decode('utf-8')
   print(data1)
   data = ComPort.write(b'AT+AB config Devicename=BTP-3AA1968\x0A')
   string = ComPort.readline()
   data1=string.decode('utf-8')
   print(data1)
   data = ComPort.write(b'AT+AB HostEvent D\x0A')
   replace_in_file("bluetooth.txt",linen,"USED")
   


root = tk.Tk()
root.title("BTP_RENAME")
root.configure(width= 450,height=250,)
root.geometry("450x150")
frame = tk.Frame(root)
w = tk.Label(root,text="\x0A\x0ADO YOU WISH TO WRITE SERIAL NUMBER TO BTP_DEVICE?\x0A \x0A")
w.pack()
frame.pack()
button = tk.Button(frame, text="EXIT", fg="red",command=quit)
    


button.pack(side=tk.RIGHT)

slogan = tk.Button(frame,
                   text="YES",
                   command=write_slogan)
global linen
def replace_in_file(filename, key, new_value):
    f = open(filename, "r")
    lines = f.readlines()
    f.close()
    for i, line in enumerate(lines):
        if line.split('=')[0].strip(' \n') == key:
            lines[i] = key + ' = ' + new_value + '\n'
    f = open(filename, "w")
    f.write("".join(lines))
    f.close()

with open('bluetooth.txt', 'r') as f:

    liner = f.readlines()
    for i in range(0, len(liner)):
        lineo=liner[i]

        if lineo[7:11] != "USED":

            linen=lineo[0:4]
            print(linen)
            break
#replace_in_file("bluetooth.txt",linen,"USED")
slogan.pack(side=tk.LEFT)

root.mainloop()
