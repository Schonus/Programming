const {ccclass, property} = cc._decorator;

@ccclass
export default class Player extends cc.Component {

    //定义飞机速度
    @property
    speedX: number = 0;
    speedY: number = 0;

    onLoad () 
    {
        let self = this;
        //————————————————————飞机移动部分——————————————————————
        // 设定函数操作
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
        

        
    }
    
    start () {
        //————————————————————飞机碰撞箱部分————————————————————
        cc.director.getCollisionManager().enabled = true;

    }

    //产生碰撞
    onCollisionEnter(other)
    {
        
    }

    update (dt) 
    {
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
    onDestroy() {
        //这里可能有问题
        cc.systemEvent.off(cc.SystemEvent.EventType.KEY_DOWN);
        cc.systemEvent.off(cc.SystemEvent.EventType.KEY_UP);
    }
}
