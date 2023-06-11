// 导入http模块
const http = require('http');


// 创建服务对象 create 创建 server 服务
// require 意为请求……
const server = http.createServer((request,response) => {
    let url = new URL(request.url,'http://127.0.0.1:9000');
    // console.log(url);
    console.log(url.pathname);
    console.log(url.searchParams.get('keyword'));
    response.end('url new!');
});

server.listen(9000,() =>{
    console.log('服务已经启动，端口 9000 监听中……');
})