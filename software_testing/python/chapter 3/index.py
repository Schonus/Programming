#通过下标取值
text = "abcdefghijk";
print(text[0]);
print(text[1]);
print(text[2]);
print(text[3]);
print(text[4]);
print(text[-1]);#python的系数可以取负数，倒数第一个
#print(text[100]);#取值超出了范围会报错

name = 'abcdef'
print(name[0:3]); # 取 下标0~2 的字符，说明左闭右开，默认的步长为1
print(name[2:]); # 取 下标2到最后的字符
print(name[2:]); # 取 下标2到最后的字符
print(name[1:-1]);#……
print(name[1:6:-2]);#步长为负值，发现取不到值
print(name[6:1:-2]);#步长为负值，反着写可以取到值
print(name[::-1]);#全部字符串进行反转
print(name[::]);#输出字符串