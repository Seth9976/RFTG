// 函数名称: __errno
// 虚拟地址: 0x5abd33
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*__errno()
{
    // 第一条实际指令: uint32_t* eax_2 = sub_5ace6b()
    uint32_t* eax_2 = sub_5ace6b()
    
    if (eax_2 != 0)
        return &eax_2[2]
    
    return 0x8b8498
}
