from random import randint
import sys
win = 0
loss = 0
tie = 0
while 1:
	
	print("WIN , " , str(win) , " LOSS = " , str(loss) ," TIE = " , str(tie))
	playerTurn = input("Choose (r)ock, (p)aper, (s)cissors, (q)uit: ")
	computerTurn = randint(1,3)

	if(playerTurn == 'q'):
		sys.exit()
	elif(playerTurn == 'r'):
		playerTurn = int(1)
	elif(playerTurn == 'p'):
		playerTurn = int(2)
	elif(playerTurn == 's'):
		playerTurn = int(3)
	else:
		print("Wrong Input")
		continue
 
	if(playerTurn == computerTurn):
		print("It's a TIE")
		tie = tie + 1
		continue
	elif(((playerTurn == 3)and(computerTurn == 1))or((playerTurn == 1)and(computerTurn == 2))or((playerTurn == 2)and(computerTurn == 3))):
		print("You lose, Computer wins")
		loss = loss + 1
		continue
	elif(((playerTurn == 3)and(computerTurn == 2))or((playerTurn == 1)and(computerTurn == 3))or((playerTurn == 2)and(computerTurn == 1))):
		print("You win, Computer loses")
		win = win + 1
		continue
