const {ccclass, property} = cc._decorator;

@ccclass
export default class Picture_test extends cc.Component {

    @property(cc.Label)
    label: cc.Label = null;

    @property
    text: string = 'hello';

    // LIFE-CYCLE CALLBACKS:

    onLoad () 
    {
        cc.director.getPhysicsManager().enabled = true;

    }

    start () {
        let rbody = this.getComponent(cc.RigidBody);
        //力
        // rbody.applyForce(cc.v2(10000,0), cc.v2(50,50),true);
        //更多会用
        // rbody.applyForceToCenter(cc.v2(10000,0),true);
        // 速度
        rbody.linearVelocity = cc.v2(50,0);
    }

    onBeginContact(contact,self,other)
    {
        let points = contact.getWorldManifold().points;
        alert("contact occur!" + points[0]);
    }
    onEndContact(contact,self,other)
    {
        let points = contact.getWorldManifold().points;
        alert("contact occur!" + points[0]);
    }

    // update (dt) {}
}
