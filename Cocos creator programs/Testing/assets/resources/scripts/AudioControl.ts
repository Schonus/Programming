const {ccclass, property} = cc._decorator;

@ccclass
export default class AudioControl extends cc.Component {

    // LIFE-CYCLE CALLBACKS:

    // onLoad () {}

    start () {
        //找到播放器组件
        let player: cc.AudioSource = this.getComponent(cc.AudioSource);
        //加载音频
        // cc.loader.loadRes("你好",cc.AudioClip,(res,clip)=>
        // {
        //     //赋值音频
        //     player.clip = clip;
        //     //播放
        //     player.play();
        //     //是否正在播放
        //     // player.isPlaying;
        //     // 暂停
        //     // player.pause();
        //     // 恢复
        //     // player.resume();
        //     // 停止
        //     // player.stop();
        //     // 循环
        //     player.loop = true;
            
        // })
        cc.loader.loadRes("你好",cc.AudioClip,(res,clip)=>
        {
            //播放
            let audioId : number = cc.audioEngine.playMusic(clip,false);
            //......
        })
    }

    // update (dt) {}
}
