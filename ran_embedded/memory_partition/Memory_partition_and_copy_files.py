import subprocess
import tkinter as tk
#import tkinter
from tkinter import messagebox
import time
import win32api
import os
import time
import psutil
from tkinter import *






drives = win32api.GetLogicalDriveStrings()
drives = drives.split('\000')[:-1]
length = len(drives)

def btn_100():
	a=0
	j=0
	while(1):
		drives = win32api.GetLogicalDriveStrings()
		drives = drives.split('\000')[:-1]
		if ((len(drives)>length)and a==0):

			subprocess.call(os.path.abspath("batch_file100.bat"))
			a=1
		elif (len(drives)==length and a!=0):
			a=0
		else:
			time.sleep(0.1)
def btn_300():
	a=0
	j=0
	
	while(1):
		drives = win32api.GetLogicalDriveStrings()
		drives = drives.split('\000')[:-1]
		if ((len(drives)>length)and a==0):
			subprocess.call(os.path.abspath("batch_file300.bat"))
			a=1
		elif (len(drives)==length and a!=0):
			a=0
		else:
			time.sleep(0.1)



window = Tk()
window.title("select files")
window.geometry('200x150')

messagebox.showinfo("Information", "Remove all connected disks")

	
b=Button(window,text="100",padx=20,pady=10,command=btn_100)
b.place(relx=0.8,rely=0.3,anchor=CENTER)
#b.config(height=)
b1=Button(window,text="300",padx=20,pady=10,command=btn_300)
b1.place(relx=0.3,rely=0.3,anchor=CENTER)

#b1.pack()
window.mainloop()