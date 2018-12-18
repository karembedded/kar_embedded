import pandas as pd
import easygui
myvar = easygui.enterbox("PLease enter the url")
url = myvar

for i, df in enumerate(pd.read_html(url)):
    df.to_csv('abc.csv',index = False, header = False, mode='a')

myvar2 = easygui.ynbox('do you wish to another url to compare phones?', 'HTML_DATA_PARSER', ('Yes', 'No'))
print(myvar2)
if myvar :
	myvar = easygui.enterbox("PLease enter the url")
	url = myvar

	for i, df in enumerate(pd.read_html(url)):
		df.to_csv('pqr.csv',index = False, header = False, mode='a')

		df1 = pd.read_csv("abc.csv")
		df2 = pd.read_csv("pqr.csv")
		
		#concatination of two csv files using concat function of dataframe.
		df3 = pd.concat([df2, df1], axis=1)
		df3.to_csv('xyz.csv', index=False)

		"""
		#transpose of dataframe for a better view of csv file
		df4=pd.read_csv('xyz.csv',header=None)
		df4.T.rename(columns={1:'Index',2:'Value'})
		df4.to_csv('xyz.csv',index=False)
		"""
		
else:
		exit()