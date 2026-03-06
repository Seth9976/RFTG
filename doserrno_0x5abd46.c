// 函数名称: ___doserrno
// 虚拟地址: 0x5abd46
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*___doserrno()
{
    // 第一条实际指令: uint32_t* eax_2 = sub_5ace6b()
    uint32_t* eax_2 = sub_5ace6b()
    
    if (eax_2 != 0)
        return &eax_2[3]
    
    return 0x8b849c
}
