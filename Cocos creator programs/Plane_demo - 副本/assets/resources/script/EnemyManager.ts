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
            Enemy.setParent(cc.find("Canvas/Main Camera"));
            Enemy.y = this.node.y;
            Enemy.x = (Math.random()-0.5) * 400 + 20;


        },2);
    }

    // update (dt) {}
}
