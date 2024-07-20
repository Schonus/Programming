//影响敌机的属性，所以需要引用
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

    onCollisionEnter(other)
    {
        // 判定是否为敌机
        if(other.tag == 1)
        {
            //在此基础上判定是否存活
            if(other.getComponent(EnemyControl).is_alive == true)
            {
                //调用die方法，执行死亡程序
                other.getComponent(EnemyControl).die();
                this.node.destroy();
            }
        }

    }

    update (dt) 
    {
        //子弹移动的具体实现
        this.node.y += this.velo_y * dt;
        //超过屏幕限制即销毁
        if(this.node.y > 440)
        {
            this.node.destroy();
        }
    }


}
