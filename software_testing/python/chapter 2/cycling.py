#while循环
# i = 10000;
# while i > 0:
#     i = i-1;
#     print("媳妇我错了！{}".format(i));

#for循环
#打印名字
name = "zhangsan";
for i in name:
    print(i);

for i in range(0,10000):
        if i == 5:
            continue;
        print("媳妇我错了！{}".format(i));
        if i == 100:
            break;