const fs = require("fs");
// 调用unlink();
// fs.unlink("./座右铭2.txt",err =>{
//     if(err)
//     {
//         console.log("删除失败！\r\n");
//         return;
//     }
//     console.log("删除成功~\r\n");
// })
fs.rm("./座右铭 copy.txt",err => {
    if(err)
    {
        console.log("删除失败！\r\n");
        return;
    }
    console.log("删除成功~\r\n");
})