import GameSetting from "./Game";

const {ccclass, property} = cc._decorator;
//设置类名，继承游戏设定类
@ccclass
export default class Button extends cc.Component {
    //感觉把prefab预制件放在这里不是很合理，因为在继承到别的类时，这些元素也会一同继承过去，还需要再拉几次给继承类的property设定指向对象会很麻烦
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
        let self = this;
        //设定函数操作
        let func1 = function(event) {
            //加载该生成的
            let nodePlayer = cc.instantiate(self.PrePlayer);
            let nodeEnemyManager = cc.instantiate(self.PreEnemyManager);
            //锚定父对象和该删的对象
            let Parent = cc.find("Canvas/Main Camera");
            let Title = cc.find("Canvas/Main Camera/Title");
            //关系绑定
            nodePlayer.setParent(Parent);
            nodeEnemyManager.setParent(Parent);
            //删除title
            Title.destroy();
            self.node.destroy();

        }
        this.node.on(cc.Node.EventType.MOUSE_UP,func1);
    }

    start () {

    }

    update (dt) {}
    onDestroy() {
        //这里可能有问题
        this.node.off(cc.Node.EventType.MOUSE_UP);
    }
}
