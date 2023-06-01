const fs = require("fs");
// const readline = require("readline");

// 调用mkdir
// function creating() {
    // fs.mkdir('./1234',err => {
    // if(err)
    // {
    //     console.log("创建失败");
    //     return;
    // }
    // console.log("创建成功");
    // })
// 递归创建
    // fs.mkdir("./1/2/3",{recursive: true},err => {
    //     if(err)
    //     {
    //         console.log("创建失败");
    //         return;
    //     }
    //     console.log("创建成功");
    //     });
// }
// function reading() {
    // 调用readdir
    // fs.readdir('./',(err,data) => {
    // if(err)
    // {
    //     console.log("创建失败");
    //     return;
    // }
    // console.log("创建成功");
    // console.log(data);
    // })
// }

// function deleting(){
    // 调用rmdir
    fs.rmdir('./12345',err => {
    if(err)
    {
        console.log("删除失败");
        return;
    }
    console.log("删除成功");
    })
// }

// var rl = readline.createInterface({
//     input:process.stdin,
//     output:process.stdout
// })

// rl.question("Which operation do you want to do?\r\n1.create\r\n2.read\r\n3.delete",(index)=>{
//     switch (index) {
//         case 1:
//             creating();
//             break;
//         case 2:
//             reading();
//             break;
//         case 3:
//             deleting();
//             break;
    
//         default:
//             break;
//         rl.close();
//     }
// });