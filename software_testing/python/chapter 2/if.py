#数值判断
a = 10;
b = 20;
print(a >= b);#返回的是布尔值
print(a >= b or a < b);#与或非

#if else
age = 10;
if age >= 18:
    print("你可以进入网吧上网");
else :
    print("你不可以进入网吧上网");
    
#elif
score = 77
if score>=90 and score<=100:
    print('本次考试，等级为A')
elif score>=80 and score<90:
    print('本次考试，等级为B')
elif score>=70 and score<80:
    print('本次考试，等级为C')
elif score>=60 and score<70:
    print('本次考试，等级为D')
elif score>=0 and score<60:
    print('本次考试，等级为E')

#嵌套循环
piao = 1;
knife = 11;

if piao == 1:
    print("有票");
    if knife <= 10:
        print("进入火车站");
    else:
        print("不可以进入");
elif piao == 0:
        print("不可以进入");