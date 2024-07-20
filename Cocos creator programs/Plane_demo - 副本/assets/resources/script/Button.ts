import GameSetting from "./Game";

const {ccclass, property} = cc._decorator;
//设置类名，继承游戏设定类
@ccclass
export default class Button extends GameSetting {

    // LIFE-CYCLE CALLBACKS:

    onLoad () 
    {
        let self = this;
        //设定函数操作
        let func1 = function(event) {
            let nodePlayer = cc.instantiate(self.PrePlayer);
            let nodeEnemyManager = cc.instantiate(self.PreEnemyManager);
            let Parent = cc.find("Canvas/Main Camera");
            let Title = cc.find("Canvas/Main Camera/Title");
            nodePlayer.setParent(Parent);
            nodeEnemyManager.setParent(Parent);
            Parent.removeChild(Title);
            self.node.removeFromParent();

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
