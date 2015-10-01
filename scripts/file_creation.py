for x in range(1, 43):
    if (x < 10):
        path = "2.0%d.cpp" %x 
    else:
        path = "2.%d.cpp" %x

    f = open(path, 'w')
    f.close()

    
#to do make it accept range, and dir to make files. 
