a = 123;
print(type(a));#显示原先的数据类型
a = str(a);#修改数据类型
print(a);
print(type(a));#显示修改的数据类型

b = eval(input("请输入数字:"));#eval的意思就是把str类型中的""去掉
print("b = {}".format(b));
print(type(b));
