import GameSetting from "./Game";
import EnemyControl from "./EnemyControl";

const {ccclass, property} = cc._decorator;

@ccclass
export default class PlayerControl extends GameSetting {

    //定义飞机速度
    @property
    speedX: number = 0;
    speedY: number = 0;

    //加载子弹控件
    @property(cc.Prefab)
    PreBullet:cc.Prefab = null;
        
    // 外面定义函数
    func3 = function(event)
    {
        let bullet = cc.instantiate(this.PreBullet);
    //为什么这里会出null
        if(bullet != null)
        {
            bullet.setParent(cc.find("Canvas/Main Camera"));
            bullet.x = this.node.x;
            bullet.y = this.node.y+80;
        }
    }

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
                    self.speedX = -400;
                    break;
                case 39://右键
                case 68://d
                    self.speedX = 400;
                    break;
                case 38://上键
                case 87://w
                    self.speedY = +400;
                break;
                case 40://下键
                case 83://s
                    self.speedY = -400;
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

        //定义函数
        this.schedule(this.func3,0.2);

        
    }
    
    start () {


    }

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

    // 产生碰撞
    onCollisionEnter(other,self)
    {
        if(other.tag == 1 )
        {
            this.die();
        }
    }

    //描述死亡事件
    die()
    {
        //加载死亡图片
        cc.loader.loadRes("picture/hero1_die",cc.SpriteFrame,(err,res)=>
        {
            this.node.getComponent(cc.Sprite).spriteFrame = res;
        })
        //停止发射子弹
        this.unschedule(this.func3);
        //不可再操作并将飞机瞬停
        this.speedX = 0;
        this.speedY = 0;
        //模拟时停技术

        cc.systemEvent.off(cc.SystemEvent.EventType.KEY_DOWN);
        
        //隔一段时间后将飞机对象进行销毁
        setTimeout(() => {
            this.node.destroy();
        }, 1000);
    }

    // 死亡前的动作
    onDestroy() {
        //这里可能有问题
        cc.systemEvent.off(cc.SystemEvent.EventType.KEY_UP);
        // 找准父对象和应该删除的对象
        let Parent = cc.find("Canvas/Main Camera");
        let EnemyManager = cc.find("Canvas/Main Camera/EnemyManager");
        // 找到应该加载的节点
        let Title = cc.instantiate(this.PreTitle);
        let Button = cc.instantiate(this.PreButton);
        // 删除敌人设置管理对象及其子对象
        EnemyManager.destroyAllChildren();
        EnemyManager.destroy();
        // 设定父对象，成功还原界面
        Title.setParent(Parent);
        Button.setParent(Parent);
    }
}
