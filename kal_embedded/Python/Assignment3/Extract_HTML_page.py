import pandas as pd
url = 'C:\Assignment 3\Buy Huawei Ascend P1 Online at Best Prices In India  Flipkart_com.mht'
url1='C:\Assignment 3\Big_india.mht'
for i, df in enumerate(pd.read_html(url)):
    df.to_csv('xyz.csv',index = False, header = False, mode='a')
for i, df in enumerate(pd.read_html(url1)):
    df.to_csv('xyz1.csv',index = False, header = False, mode='a')

with open("out1.txt","w+") as csv1:
    f=open('xyz.csv','r+')
    lines=f.readlines()
    for i in [1,6,8,12,16,43,49,57,59,62,64]:
        csv1.writelines(lines[i])

with open("out2.txt","w+") as csv1:
    f=open('xyz1.csv','r+')
    lines=f.readlines()
    for i in [36,41,43,53,55,80,77,87,88,93,94]:
        csv1.writelines(lines[i])
f.close()
csv1.close()
import csv
def read_cell(x, y):
    with open('out2.txt', 'r+') as f:
        reader = csv.reader(f)
        y_count = 0
        for n in reader:
            if y_count == y:
                cell = n[x]
                return cell
            y_count += 1
f=open("out3.txt",'w+')
for i in range(0,9):
    rd=read_cell(1,i)
    f.write(rd)
    f.write("\n")
f.close()

f1=open('out1.txt','r+')
f2=open('out3.txt','r+')
f3=open('out3.csv','w')
lines1=f1.readline()
lines2=f2.readline()
f1.seek(0, 0)
f2.seek(0, 0)
for item1 in f1:
    for item2 in f2:
        st2=str(item2).replace(",","")
        st = [item1].__add__([st2])
        st[-2] = st[-2].strip()
        f3.write(st[0])
        f3.write(",")
        f3.write(st[1])
        break
    continue
print("Data Extract successfully...!")
