# Problem link : https://www.codechef.com/LTIME79B/problems/CHEALG

for _ in range(int(input())):
    s = input()
    string = ""
    stack1 = []
    stack2 = []
    i = 0
    while i < len(s):
        temp = s[i]
        count = 0
        stack1.append(temp)
        while s[i] == temp:
            count += 1
            i += 1
            if i == len(s):
                break
        stack2.append(count)
    for i in range(len(stack1)):
        string += (stack1[i] + str(stack2[i]))
    if len(string) < len(s):
        print ("YES")
    else:
        print ("NO")
