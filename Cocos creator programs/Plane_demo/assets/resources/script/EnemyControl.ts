const {ccclass, property} = cc._decorator;

@ccclass
//编写类名
export default class EnemyControl extends cc.Component {

    //敌机移动速度
    @property
    Enemy_v:number = 40;

    //敌机存活判定
    @property
    is_alive:boolean = true;

    // LIFE-CYCLE CALLBACKS:

    onLoad () {}

    start () {

    }

    update (dt) 
    {
        //敌机移动的具体实现
        this.node.y -= this.Enemy_v * dt;
        if(this.node.y < -840)
        {
            this.node.destroy();
        }
    }


    //死亡程序
    die()
    {
        //修改数据防止重复被击中的事情发生
        this.is_alive = false;
        // 调用死亡图片
        cc.loader.loadRes("picture/enemy0_die",cc.SpriteFrame,(err,res)=>
        {
            this.node.getComponent(cc.Sprite).spriteFrame = res;
            this.Enemy_v = 0;
        })
        setTimeout(() => {
            this.node.destroy();
        }, 300);
    }
}
