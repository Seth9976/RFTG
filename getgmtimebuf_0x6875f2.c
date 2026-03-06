// 函数名称: ___getgmtimebuf
// 虚拟地址: 0x6875f2
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t___getgmtimebuf()
{
    // 第一条实际指令: uint32_t* eax = sub_5ace6b()
    uint32_t* eax = sub_5ace6b()
    
    if (eax != 0)
        int32_t eax_3
        
        if (eax[0x11] == 0)
            eax_3 = sub_5abd7c(0x24)
            eax[0x11] = eax_3
        
        if (eax[0x11] != 0 || eax_3 != 0)
            return eax[0x11]
    
    *__errno() = 0xc
    return 0
}
