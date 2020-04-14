# Problem link : https://www.codechef.com/FOLG2020/problems/BEGEVY

s = "helloworld"
count_s = [0] * 26
for i in s:
    count_s[ord(i) - ord('a')] += 1
    
for _ in range(int(input())):
    s = input()
    count = [0] * 26
    for i in s:
        count[ord(i) - ord('a')] += 1
    if count == count_s:
        print ("Yes")
    else:
        print ("No")
