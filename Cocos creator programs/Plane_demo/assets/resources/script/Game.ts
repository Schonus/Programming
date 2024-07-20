const {ccclass, property} = cc._decorator;

@ccclass
//编写类名
export default class GameSetting extends cc.Component {

    @property(cc.Prefab)
    PreTitle:cc.Prefab = null;
    
    @property(cc.Prefab)
    PreButton:cc.Prefab = null;
    
    @property(cc.Prefab)
    PrePlayer:cc.Prefab = null;

    @property(cc.Prefab)
    PreEnemyManager:cc.Prefab = null;

    // LIFE-CYCLE CALLBACKS:

    onLoad () 
    {
        //————————————————————碰撞箱开启————————————————————
        cc.director.getCollisionManager().enabled = true;
    }

    start () {

    }

    // update (dt) {}

    onDestroy(){
        //————————————————————关闭程序时关闭碰撞箱————————————————————
        cc.director.getCollisionManager().enabled = false;
    }
}
