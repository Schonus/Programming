const fs = require("fs");
// 调用rename
fs.rename("./观书有感.txt","./123/123.txt",err => {
    if(err)
    {
        console.log("操作失败！\r\n");
        return;
    }
    console.log("操作成功\r\n");
})

