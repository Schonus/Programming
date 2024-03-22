text = "abcdef";
print(text);
#在字符串某一段检测是否有想要的值，有就返回对应的标签坐标，没有就返-1
#输出格式 xxx.find("str",start,end)
print("***************************");
print(text.find("a"));
print(text.find("d"));
#在字符串某一段检测是否有想要的值，有就返回对应的标签坐标，没有就报错
#输出格式 xxx.index("str",start,end)
print("***************************");
print(text.index("a"));
print(text.index("d"));
#在字符串某一段检测想要的值出现的次数
#输出格式 xxx.count("str",start,end)
print("***************************");
print(text.count("a"));
print(text.count("w"));
#将字符串某一段转换为另一段，count指定转换次数（但是只是转换完输出结果，并不影响字符串本身）
#输出格式 xxx.replace("str",start,end)
print("***************************");
print(text.replace("a","w",1));
print(text);


#split方法
a = 'Hello World';
print(a.split(' '));

# caplitalize title方法
b = "this is my book";
print(b.capitalize());
print(b.title());

# startswith endswith
print(b.startswith("this"));
print(b.endswith("this"));
print(b.endswith("book"));

#其余的见课本
#join方法
mystr = "abcd";
print("-".join(mystr));
