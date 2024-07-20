const {ccclass, property} = cc._decorator;

@ccclass
//编写类名
export default class EnemyControl extends cc.Component {

    @property
    Enemy_v:number = 40;

    // LIFE-CYCLE CALLBACKS:

    onLoad () {}

    start () {

    }

    update (dt) 
    {
        this.node.y -= this.Enemy_v * dt;
        if(this.node.y < -440)
        {
            this.node.destroy();
        }
    }

    //死亡
    die()
    {
        this.node.destroy();
    }
}
