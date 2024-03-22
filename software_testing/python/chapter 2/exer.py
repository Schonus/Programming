#1-100的累积和
i = 1
sum = 0
while i <= 100:
    sum = sum + i
    i += 1
print("1~100的累积和为:%d" % sum)

#1-100的偶数累积和
i = 1
sum = 0
while i <= 100:
    if i % 2 == 0:
        sum = sum + i
    i+=1
print("1~100的累积和为:%d" % sum)