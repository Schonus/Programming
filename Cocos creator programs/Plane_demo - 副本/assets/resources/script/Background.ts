const {ccclass, property} = cc._decorator;

@ccclass
export default class Background extends cc.Component {

    @property
    y_velo:number = 40;//画布往下翻的速度
    // LIFE-CYCLE CALLBACKS:
    //被加载时
    onLoad () {}
    //被加载后
    start () {

    }
    //每一帧更新时
    update (dt) 
    {
        //定义背景往下翻的速率
        this.node.y -= 40 * dt;
        //如果往下翻的太多了，就搬回来，保证看起来连贯的效果
        if(this.node.y <= -852)
        {
            this.node.y = 0;
        }
    }
}
