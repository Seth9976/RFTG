// 函数名称: sub_68656e
// 虚拟地址: 0x68656e
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

voidsub_68656e(uint32_t arg1) __noreturn
{
    // 第一条实际指令: uint32_t* eax = sub_5ace6b()
    uint32_t* eax = sub_5ace6b()
    
    if (eax != 0)
        sub_5ad02d(eax)
    
    ExitThread(arg1)
    noreturn
}
