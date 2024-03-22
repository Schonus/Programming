import random
writenumber = int(input("请输入1-拳头，2-剪刀，3-布"));
autonumber = random.randint(1,3);
if (((writenumber == 1) & (autonumber == 1))|((writenumber == 2) & (autonumber == 2))|((writenumber == 3) & (autonumber == 3))):
    print("平局");
elif (((writenumber == 1) & (autonumber == 2))|((writenumber == 2) & (autonumber == 3))|((writenumber == 3) & (autonumber == 1))):
    print("你输了");
elif (((writenumber == 1) & (autonumber == 3))|((writenumber == 2) & (autonumber == 1))|((writenumber == 3) & (autonumber == 2))):
    print("你赢了");