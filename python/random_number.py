import random
def random_function(num):
	result = []
	list1 = [i for i in range(1, num + 1)]
	for i in range(0,num):
		rand_number = random.randint(0, len(list1) - 1)
		result.append(list1[rand_number])
		list1.pop(rand_number)
		count += 1
	return result

print(random_function(10))