// 导入http模块
const http = require('http');
// 1.导入url模块
const url = require('url');

// 创建服务对象 create 创建 server 服务
// require 意为请求……
const server = http.createServer((request,response) => {
    // 2.解析url
    // console.log(request.url);
    let res = url.parse(request.url,true);
    console.log(res.query);
    console.log(res.query.keyword);
    response.end('hello!');
});

server.listen(9000,() =>{
    console.log('服务已经启动，端口 9000 监听中……');
})