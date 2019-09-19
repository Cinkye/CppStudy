import matplotlib.pyplot as plt
import random
import math
import operator
def generateData(lines):	# Generate random data
	file = open("data.txt","w+")
	for i in range(lines):
		a = random.randint(0,100)
		b = random.randint(0,100)
		t = (a,b)
		file.write(str(t) + "\n")
	print("Generated " + str(lines) + " data lines.")
	file.close()

def generateData2(lines):	# Generate random data in sub-zones
	file = open("data.txt","w+")
	for i in range(lines):
		a = random.randint(20,40)
		b = random.randint(20,40)
		t = (a,b)
		file.write(str(t) + "\n")
		a = random.randint(20,40)
		b = random.randint(70,90)
		t = (a,b)
		file.write(str(t) + "\n")
		a = random.randint(70,90)
		b = random.randint(20,40)
		t = (a,b)
		file.write(str(t) + "\n")
		a = random.randint(70,90)
		b = random.randint(70,90)
		t = (a,b)
		file.write(str(t) + "\n")
	print("Generated " + str(lines*4) + " data lines.")
	file.close()

def readDataFromFile():		# Read data from data.txt
	file = open("data.txt","r")
	data = []
	line = file.readline()
	while line:
		data.append(eval(line))
		line = file.readline()
	return data;	# Returns a list of tuples

def kmeans(num):	# cluster number as parameter
	data = readDataFromFile()
	length = len(data)		# Get data length
	classifier = []	# Classifiers of the points
	seeds = []
	for i in range(num):	# generate random seeds
		a = random.randint(0,100)
		b = random.randint(0,100)
		t = (a,b)
		seeds.append(t)
	print(seeds)
	for i in range(length):
		classifier.append(-1)	# Fill the classifiers with -1

	iteration = 0
	while True:	# Loop until the classifiers don't change
		iteration = iteration + 1
		# Update classifiers
		newclassifier = []	# Updated classifiers
		for i in range(length):	# Calculate new classifiers
			mindist = math.sqrt((data[i][0]-seeds[0][0])**2+(data[i][1]-seeds[0][1])**2)
			newclassifier.append(0)
			for j in range(1,num):
				dist = math.sqrt((data[i][0]-seeds[j][0])**2+(data[i][1]-seeds[j][1])**2)
				if(dist < mindist):	# Find nearest seed
					mindist = dist
					newclassifier[i]=j
		if(operator.eq(newclassifier,classifier) == 1):	# Break if the classifiers don't change
			result = open("result.txt","w+")	# Write the result to the file
			for i in range(length):
				result.write(str(data[i])[:-1] + ", " + str(newclassifier[i]) + ")\n")	# Format: (x,y,classifier)
			result.close()
			print("Finished in iteration " + str(iteration))
			break
		else:
			classifier = newclassifier	# Update the classifier if changed
			print("In iteration " + str(iteration))

		# Update seeds	
		newseeds = [] # Updated seeds
		nums = []	# number of points in a cluster
		for i in range(num):	# Fill the newseeds with [0,0]
			newseeds.append([])
			newseeds[i].append(0)
			newseeds[i].append(0)
		for i in range(num):	# Fill the nums with 0
			nums.append(0)
		for i in range(length): # Calculate new seeds by adding xs and ys of the points in the same cluster
			newseeds[classifier[i]][0] += data[i][0]
			newseeds[classifier[i]][1] += data[i][1]
			nums[classifier[i]] = nums[classifier[i]] + 1	# Counter incremented 
		for i in range(num):
			if nums[i] != 0:	# Calculate mean values
				newseeds[i][0] /= nums[i]
				newseeds[i][1] /= nums[i]
		print(newseeds)
		seeds = newseeds

def generateGraph():	# Generated a graph
	result = open("result.txt","r")	# Read data from file line by line
	line = result.readline()
	colors = ['b','c','g','k','m','r','#a61b29','y','#2775b6','#ff9900']
	while line:
		data = eval(line)
		line = result.readline()
		plt.scatter(data[0],data[1],10,colors[data[2]])
	plt.show()


generateData2(30)
kmeans(4)
generateGraph()
