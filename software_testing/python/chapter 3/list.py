name = ["张三","李四","王五"];
print(name);
tuples = ["张三","Liya",False,22];#python的数组可以装不同类型的元素
print(tuples);
print(tuples[2]);


#运用for循环来遍历取元素
for i in tuples:#i 这个地方可以取任意的名字
    print(i);
#另一种取元素的方式
for i in range(len(name)):
    print(i);
    print(name[i]);
i = 0;
#运用while循环来遍历取元素
while(i<len(name)):
    print(i);
    print(name[i]);
    i=i+1;

#列表的方法
#添加
#append 添加数据 添加到末尾
inputname = input("请输入要添加的学生姓名：");
name.append(inputname);

#insert 添加数据 添加到第n位（需要参数）
inputname2 = input("请输入要添加的学生姓名：");
name.insert(0,inputname2);

#extend 一个列表的数据加到另一个列表中
a = ["1","2"];
name.extend(a);

print("*****************************");
for i in name:
    print(i);
print("*****************************");

#修改
#a[i] = "aweofun"
name[4] = input("请输入要修改的学生姓名：");
print("*****************************");
for i in name:
    print(i);
print("*****************************");

#查  见教材 in  not in index count；
#删  见教材 del pop remove

#排序
#sort
print(name);
print(name.sort());
print(name);
print(name.sort(reverse=True));
print(name);