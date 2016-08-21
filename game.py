import time 




def house():

	print ("After you moved to Miami for your new job, you watch the news and find out that there is a zombie apocalpyse, you also find out that zombies tend to come out during the night!")

	time.sleep(2)

	print ("Do you go to your new Ferrari you just stole or get your trusty baseball bat and helmet in the basement?")

	answer = input("Type car or bat 'Enter'.").lower()

	if answer == "car" or answer == "ferrari":

		print ("You go outside, unfortantely you forgot to close the garage door and you see zombies roaming free all over the place!")

		time.sleep(2)

		print ("Do you run towards the car and hope the zombies don't attack you or just go on foot and run outside from your backdoor")

		answer_two=input("Type ditch or car 'Enter'.").lower()

		if answer_two == "ditch":

			print ("you run into your backyard and keep on runing through the streets you come across a pack of zombies")

			time.sleep(2)

			print ("what do you do do you try to kill them or sneek around them?")

			answer_3=input("Type kill or sneak").lower()

			if answer_3 == "kill":

				print ("How the heck do you think you can kill zombies with you're bare fist, you're not a karate master. You die from zombies devouring you alive and you become one of them.")

			elif answer_3 != "sneak":

				print ("You sneak past the zombies just fine as you keep going you see a garage that you think you could lift open with your masculine body")

				answer_4=input("lift or go")

				if answer_4 == "go":

					print ("you have no idea what to do because you have no plan, but you remeber that you need supplies to survive, do you go to 7-11 or to the hospital.")
					
					answer_5=input("7-11 or hospital")
					
					if answer_5 == "7-11":
							
						print ("As you enter you here a scream, do you investigate or ignore it")
							
					elif answer_5 == "hospital":
								
							print ("you walk to the hospital, when you go inside you noticed that all the useful things are already taken but keep on going hoping to find something ")
								
							print ("as you keep on going you hear growling and see a zombie ahead, do you try wrestling with it or run past it")
								
							answer_6=input("wrestle or run")
							
							if 
						
						   

				elif answer == 'lift':
					
					print ("You go towards the garage abd attempt to lift up the door fortunately you left it up and you see a radio and a phone")

		elif answer_two == "car":

			print ("Are you dumb? There're zombies in your frickin garage. You die from all those zombies that swarm towards you as you go to your car. I hope you're smarter in your next try") 

	elif answer == "bat" or answer == "g":

		print ("As you walk down stairs you hear growling all around your house, you continue going until you hear a loud thump and you hear more loud growling")

		time.sleep(2)

		print (" Do you decide to continue getting your bat(risking the chnace of you getting trapped) or do you want to go back upstairs")

		time.sleep(2)

		answer_3=input("Type bat or upstairs").lower()

		if answer_3 == "bat":

			print ("As you continue to go towards where you have you're baseball equipment, you hear loud growling, so loud that you think that there are zombies next to you, you continue going but at a faster speed to get your bat")

			time.sleep(2)

			print ("You think it might not be to late to go back. Are you 100% sure you want to continue?")

			answer_4=input("type yes or no").lower()

			if answer_4 == "yes":

				print ("You turn on your closet light where you baseball equipment is in and get your trusty baseball bat and helmet, but sadly the light attracts a zombie. You kill the zombie but the scent of blood attracts more zombies and soon your overwhelmed and get eaten alive, tough luck. ")   

			elif anwser_4 == "no":

				print("You make a break for it and dash into a door connected to your garage and through the back door, and then you run to into the woods with just a small scratch from the zombies. No big promblem, right? ")

		elif answer_3 == "upstairs":

			print ("You go upstairs right into the zombies stomachs, nice going!")

			

			

	else:

		print ("You didn't pick anything, you die from a heart attack")

		

		




house()