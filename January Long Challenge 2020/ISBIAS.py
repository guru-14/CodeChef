# Problem link : https://www.codechef.com/JAN20B/problems/ISBIAS

n, q = map(int, input().split())
a = list(map(int, input().split()))
# here i am considering a transition point to be either a local maxima or a local minima
transition = [0] * n
for i in range(1, n - 1):
    if(a[i] > a[i - 1] and a[i] > a[i + 1]):
        transition[i] = 1
    elif(a[i] < a[i - 1] and a[i] < a[i + 1]):
        transition[i] = 1
for i in range(1, n):
    transition[i] += transition[i - 1]
#print (transition)
for _ in range(q):
    l, r = map(int, input().split())
    l -= 1
    r -= 1
    transition_count = transition[r - 1] - transition[l]
    if (transition_count % 2):
        print ("YES")
    else:
        print ("NO")
