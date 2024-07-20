const {ccclass, property} = cc._decorator;

@ccclass
export default class PlayerControl extends cc.Component {

    //定义飞机速度
    @property
    speedX: number = 0;
    speedY: number = 0;

    //加载子弹控件
    @property(cc.Prefab)
    PreBullet:cc.Prefab = null;


    onLoad () 
    {
        let self = this;
        //————————————————————飞机移动部分——————————————————————
        // 设定移动和静止函数操作，习惯把实现函数写在外面
        //飞机移动
        let func1 = function(event) {
            // 判断输入的是哪个键
            switch (event.keyCode) {
                case 37://左键
                case 65://a
                    self.speedX = -200;
                    break;
                case 39://右键
                case 68://d
                    self.speedX = 200;
                    break;
                case 38://上键
                case 87://w
                    self.speedY = +200;
                break;
                case 40://下键
                case 83://s
                    self.speedY = -200;
                    break;
                default:
                    break;
            }
        }
        //飞机停止
        let func2 = function(event) {
            // 判断输入的是哪个键
            switch (event.keyCode) {
                case 37://左键
                case 65://a
                    if(self.speedX < 0)
                    {
                        self.speedX = 0;
                    }
                    break;
                case 39://右键
                case 68://d
                    if(self.speedX > 0)
                    {
                        self.speedX = 0;
                    }
                    break;
                case 38://上键
                case 87://w
                    if(self.speedY > 0)
                    {
                        self.speedY = 0;
                    }
                break;
                case 40://下键
                case 83://s
                    if(self.speedY < 0)
                    {
                        self.speedY = 0;
                    }
                    break;
                default:
                    break;
            }
        }
        //键盘监听函数
        cc.systemEvent.on(cc.SystemEvent.EventType.KEY_DOWN,func1);
        cc.systemEvent.on(cc.SystemEvent.EventType.KEY_UP,func2);
        //玩家攻击
        // 外面定义函数
        let func3 = function(event)
        {
            let bullet = cc.instantiate(self.PreBullet);
            //为什么这里会出null
            if(bullet != null)
            {
                bullet.setParent(cc.find("Canvas/Main Camera"));
                bullet.x = this.node.x;
                bullet.y = this.node.y;
            }
        }
        //定义函数
        this.schedule(func3,0.5);
        //————————————————————飞机碰撞箱部分————————————————————
        cc.director.getCollisionManager().enabled = true;
        
    }
    
    start () {


    }

    // //产生碰撞
    // onCollisionEnter(other)
    // {
        
    // }

    update (dt) 
    {
        //玩家移动
        //边框判定和实现X、Y轴位移
        if(( (this.node.x >= -190) && (this.speedX < 0) )||( (this.node.x <= 190) && (this.speedX > 0 ) ))
        {
            this.node.x += this.speedX * dt;
        }
        //Y轴与X轴同理
        if(( (this.node.y >= -364) && (this.speedY < 0) )||( (this.node.y <= 364) && (this.speedY > 0 ) ))
        {
            this.node.y += this.speedY * dt;
        }
    
    
        
    }

    //描述死亡事件
    die()
    {
        this.getComponent
    }

    onDestroy() {
        //这里可能有问题
        cc.systemEvent.off(cc.SystemEvent.EventType.KEY_DOWN);
        cc.systemEvent.off(cc.SystemEvent.EventType.KEY_UP);
    }
}
