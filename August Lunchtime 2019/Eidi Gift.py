for _ in range(int(input())):
    a1, a2, a3, c1, c2, c3 = map(int, input().split())
    l = [(a1, c1), (a2, c2), (a3, c3)]
    l.sort()
    flag = 1
    for i in range(2):
        if l[i][0] < l[i + 1][0] and l[i][1] < l[i + 1][1]:
            continue
        elif l[i][0] == l[i + 1][0] and l[i][1] == l[i + 1][1]:
            continue
        else:
            flag = 0
            break
    if flag:
        print ("FAIR")
    else:
        print ("NOT FAIR")
