// 调用EnemyManager需要import文件
import EnemyControl from "./EnemyControl";

const {ccclass, property} = cc._decorator;

@ccclass
//编写类名
export default class Bullet extends cc.Component {

    @property
    velo_y:number = 200;

    // LIFE-CYCLE CALLBACKS:

    onLoad () 
    {
        
    }

    start () {

    }

    update (dt) 
    {
        this.node.y += this.velo_y * dt;
        //销毁
        if(this.node.y > 440)
        {
            this.node.destroy();
        }
    }

    onCollisionEnter(other)
    {
        if(other.tag == 1 )
        {
            other.getComponent(EnemyControl).die();
        }
    }
}
