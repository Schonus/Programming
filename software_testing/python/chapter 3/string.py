a = 100;
print(type(a));
#以下几个语句作用都是一样的
b = "你好";
b = '你好';
b = '''你好''';
b = """你好""";
print(type(b));

#对话中加引号需要转义符\
#store = "这是一个关于\"英雄\"的故事"

#这里\起到换行作用（程序中不换行）
store = "这是一个" \
    "关于\"英雄\"的故事"
print(store);

#字符串的输出
name = '张富贵';
position = '讲师';
address = '武汉市';
print('--------------------------------------------------')
print("姓名：%s" % name);
print("职位：%s" % position);
print("公司地址：%s" % address);
print('--------------------------------------------------')

#第三种输出的写法
name = '张富贵';
age = 33;
print('我的名字是 {}, 我的年龄是 {}'.format(name,age));
print(f'我的名字是 {name}, 我的年龄是 {age}');#第三种写法
