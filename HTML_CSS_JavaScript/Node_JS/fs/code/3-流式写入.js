const fs = require("fs");
// 创建写入流对象
let ws = fs.createWriteStream("./观书有感.doc");
// write
ws.write("12345");
ws.write("67890");

// 关闭通道
ws.close();
