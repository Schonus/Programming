print("hello,world!") #在控制台中打印hello,world!

# 变量 
# 幼儿园
# 变量 小红 小黄 小明
xiaohong = 7;
xiaohuang = 4;
xiaoming = 5;
c = [10,20,30];#列表类型
print(xiaohong + xiaoming);
print(xiaohuang + xiaoming);

print(type(xiaohong));#查看小红的变量的数据类型
print(type(3.1416));#查看π的数据类型
print(type("hello,world"));#查看hello,world的数据类型
print(type(c));#查看变量c的数据类型
print(type(True));#查看布尔类型True的数据类型


# 格式化输出
age = 10;
name = "张三";
score = 70.5;
print("我今年%d岁" % age);
age += 1;
print("我今年%d岁" % age);
age += 1;
print("我今年%d岁,我叫%s,我的语文考了%.2f" % (age , name , score));
print("我今年{}岁,我叫{},我的语文考了{}".format(age , name , score));#format格式的写法
print("我今年{}岁,我叫{}\n我的语文考了{}".format(age , name , score));#\n换行