// 导入http模块
const http = require('http');

const server = http.createServer((request, response) => {
    let url = new URL(request.url,"http://127.0.0.1:9000");
    // console.log(request);
    response.setHeader("Content-Type","text/html;charset=utf-8");
    console.log(request.url);
    if("/login" === request.url && "GET" === request.method){
        response.end("登录界面");
    }else if("/reg" === request.url && "GET" === request.method){
        response.end("注册界面");
    }else{
        response.end("<h1>Not Found!</h1>");
    }
})
server.listen(9000,() =>{
    console.log('服务已经启动，端口 9000 监听中……');
})