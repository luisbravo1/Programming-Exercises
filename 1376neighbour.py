#Asks for a number and changes it to a list
number = input()
newNumber = number
number = "".join(number)
biggerNum = 0
smallerNum = 0
numberLength = len(number)
flag = False



if int(number[-1]) > int(number[-2]):
	biggerNum = number[-1]
	smallerNum = number[-2]
	flag = True
else:
	biggerNum = number[-2]
	smallerNum = number[-1]

if flag == True:
	newNumber, result = newNumber[:-2], newNumber[-1]
	newNumber = newNumber + "".join(biggerNum) + "".join(smallerNum)

	print (newNumber)




#print (biggerNum)
#print (number[0], number[1])

