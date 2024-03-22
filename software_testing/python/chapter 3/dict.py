#字典
student = {"name":"zhangsan","age":"18","gender":"male"}
print(student);
print(student["age"]);
print(student.get("1234"));#用get来取不存在标签的内容，不会报错

#添加 见课本

#修改
student["age"] = "12";
print(student);

#字典常见操作 len keys values items
print(len(student));
print(student.keys());
print(student.values());
print(student.items());

#遍历
#keys
for keys in student.keys():
    print(keys);
#values
for values in student.values():
    print(values);
#items
for items in student.items():
    print(items);
for key,value in student.items():
    print("key = {},value = {}".format(key,value));
#删除
del student["age"];
print(student);
# del student;
# print(student); #会报错，因为你不能打印一个不存在的东西

#clear
student.clear();
print(student);#与del的区别在于，运用clear，student母体还在没有删除

