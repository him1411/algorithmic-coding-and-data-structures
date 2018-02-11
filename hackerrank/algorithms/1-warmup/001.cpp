import sys
s = input().split(":")
if s[2][2:].upper() == "PM" and s[0] == "12":
    s[0]=s[0]
    
elif s[2][2:].upper() == "AM" and s[0] == "12" :
    s[0] = "00"
        
elif s[2][2:].upper() == "PM":
    s[0]=int(s[0]) + 12

print(s[0], ":", s[1], ":", s[2][:2],sep='')

//https://www.hackerrank.com/challenges/solve-me-first/problem