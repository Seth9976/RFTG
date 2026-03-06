// 函数名称: __getptd
// 虚拟地址: 0x5acee4
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

uint32_t*__getptd()
{
    // 第一条实际指令: uint32_t* result = sub_5ace6b()
    uint32_t* result = sub_5ace6b()
    
    if (result != 0)
        return result
    
    __amsg_exit(0x10)
    noreturn
}
