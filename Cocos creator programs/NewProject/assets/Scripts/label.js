cc.Class({
    extends: cc.Component,
    onLoad: function () {
        this.count = 0;
        this.callback = function () {
            if (this.count === 5) {
                // 在第六次执行回调时取消这个计时器
                this.unschedule(this.callback);
            }
            alert("do something!");
            this.count++;
        }
        this.schedule(this.callback, 1);
        
    },
    
        onDestroy () {
        },
    
});