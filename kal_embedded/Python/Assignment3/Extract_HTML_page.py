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
    #csv1.writelines(lines[0])
    csv1.writelines(lines[1])
    csv1.writelines(lines[6])
    csv1.writelines(lines[8])
    csv1.writelines(lines[12])
    csv1.writelines(lines[16])
    csv1.writelines(lines[43])
    csv1.writelines(lines[49])
    csv1.writelines(lines[57])
    csv1.writelines(lines[59])
    csv1.writelines(lines[62])
    csv1.writelines(lines[64])

with open("out2.txt","w+") as csv1:
    f=open('xyz1.csv','r+')
    lines=f.readlines()
    csv1.writelines(lines[36])
    csv1.writelines(lines[41])
    csv1.writelines(lines[43])
    csv1.writelines(lines[53])
    csv1.writelines(lines[55])
    csv1.writelines(lines[80])
    csv1.writelines(lines[77])
    csv1.writelines(lines[87])
    csv1.writelines(lines[88])
    csv1.writelines(lines[93])
    csv1.writelines(lines[94])
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
