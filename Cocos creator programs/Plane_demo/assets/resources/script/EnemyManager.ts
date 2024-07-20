const {ccclass, property} = cc._decorator;

@ccclass
export default class EnemyManager extends cc.Component {

    @property(cc.Prefab)
    PreEnemy: cc.Prefab = null;

    @property
    text: string = 'hello';

    // LIFE-CYCLE CALLBACKS:

    // onLoad () {}

    start () {
        this.schedule(()=>
        {
            //创建敌机
            let Enemy = cc.instantiate(this.PreEnemy);
            // 找对父对象，把生成敌机机制架好
            Enemy.setParent(cc.find("Canvas/Main Camera/EnemyManager"));
            // 设置敌机出现位置
            Enemy.y = this.node.y;
            Enemy.x = (Math.random()-0.5) * 380 + 20;
        },2);
    }

    // update (dt) {}
}
