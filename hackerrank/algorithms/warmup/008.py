arr = list(map(int, input().strip().split(' ')))
b = sum(arr)
new=[]
for i in arr:
    new.append(b-i)
print (min(new),max(new))

#https://www.hackerrank.com/challenges/mini-max-sum/problem