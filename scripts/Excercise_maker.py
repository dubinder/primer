f = open("Excercise.md", 'w')

for x in range(1, 50):
	f.write("* __%d:__\n" % x)