for _ in range(int(input())):
    s = input()
    count = 0
    for i in s:
        if i == "1":
            count += 1
    if count % 2 == 0:
        print ("LOSE")
    else:
        print ("WIN")
