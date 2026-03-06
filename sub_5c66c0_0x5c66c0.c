// 函数名称: sub_5c66c0
// 虚拟地址: 0x5c66c0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_5c66c0(uint32_t arg1)
{
    // 第一条实际指令: void* const ecx = nullptr
    void* const ecx = nullptr
    
    if (arg1 != 0)
        if ((arg1 & 0xffff0000) != 0)
            arg1 u>>= 0x10
            ecx = 0x10
        
        if ((arg1 & 0xff00) != 0)
            arg1 u>>= 8
            ecx |= 8
        
        if ((arg1.b & 0xf0) != 0)
            arg1 u>>= 4
            ecx |= 4
        
        if ((arg1.b & 0xc) != 0)
            arg1 u>>= 2
            ecx |= 2
        
        if ((arg1.b & 2) != 0)
            ecx |= 1
    else
        ecx = 0xffffffff
    
    arg1.b = *(ecx + 0xbed32c)
    
    if (arg1.b != 0 && (arg1.b == 1 || data_bed34c != 0))
        return 1
    
    return 0
}
