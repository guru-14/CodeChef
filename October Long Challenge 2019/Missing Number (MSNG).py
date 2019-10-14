MAX = 10 ** 12

def toDecimal(s, base):
    p = 0
    num = 0
    for i in range(len(s) - 1, -1, -1):
        if s[i] >= "0" and s[i] <= "9":
            num += (base ** p) * (ord(s[i]) - ord("0"))
        else:
            num += (base ** p) * ((ord(s[i]) - ord("A")) + 10)
        p += 1
        if num > MAX:
            num = -1
            break
    return num

def findBase(s):
    base = max(s)
    if base >= "0" and base <= "9":
        base = (ord(base) - ord("0")) + 1
    else:
        base = (ord(base) - ord("A")) + 11
    if base == 1:
        base = 2
    return base

for _ in range(int(input())):
    ans = -1
    n = int(input())
    b = []
    y = []
    ind = -1
    for i in range(n):
        b1, y1 = map(str, input().split())
        if ind == -1 and int(b1) != -1:
            ind = i
        b.append(int(b1))
        y.append(y1)
    if n == 1:
        if b[0] != -1:
            base = b[0]
            p = 0
            ans = toDecimal(y[0], base)
            print(ans)
            continue
        else:
            base = findBase(y[0])
            p = 0
            ans = toDecimal(y[0], base)
            print(ans)
            continue
    else:
        if ind != -1:
            base = b[ind]
            p = 0
            ans = toDecimal(y[ind], base)
            if ans == -1:
                print (ans)
                continue
            else:
                for i in range(n):
                    if i != ind:
                        if b[i] != -1:
                            base = b[i]
                            temp = toDecimal(y[i], base)
                            if temp != ans:
                                ans = -1
                                break
                            else:
                                continue
                        base = findBase(y[i])
                        temp = -1
                        for j in range(base, 37):
                            temp = toDecimal(y[i], j)
                            if temp == -1:
                                ans = -1
                                break
                            elif temp == ans:
                                break
                            elif temp > ans:
                                ans = -1
                                break
                        if temp < ans:
                            ans = -1
                    if ans == -1:
                        break
                print(ans)
                continue
        else:
            ans_list = []
            temp_ans_list = []
            base = findBase(y[0])
            for i in range(base, 37):
                temp = toDecimal(y[0], i)
                if temp == -1:
                    break
                temp_ans_list.append(temp)
            if len(temp_ans_list) == 0:
                ans = -1
                print(ans)
                continue
            else:
                base = findBase(y[1])
                for i in range(base, 37):
                    temp = toDecimal(y[1], i)
                    if temp == -1:
                        break
                    elif temp in temp_ans_list:
                        ans_list.append(temp)
                if len(ans_list) == 0:
                    ans = -1
                    print(ans)
                    continue
                else:
                    for i in range(2, n):
                        base = findBase(y[i])
                        temp_ans_list = []
                        for j in range(base, 37):
                            temp = toDecimal(y[i], j)
                            if temp == -1:
                                break
                            elif temp > max(ans_list):
                                break
                            elif temp in ans_list:
                                temp_ans_list.append(temp)
                        if len(temp_ans_list) == 0:
                            ans = -1
                            ans_list = []
                            break
                        else:
                            ans_list = temp_ans_list
                    if len(ans_list) == 0:
                        ans = -1
                        print(ans)
                        continue
                    else:
                        print(min(ans_list))
                        continue
