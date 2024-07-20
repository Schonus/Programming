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

    onLoad () {}

    start () {

    }

    // update (dt) {}
}
