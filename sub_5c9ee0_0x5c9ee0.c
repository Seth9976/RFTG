// 函数名称: sub_5c9ee0
// 虚拟地址: 0x5c9ee0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5c9ee0(int32_t* arg1)
{
    // 第一条实际指令: int32_t eax = data_bed820
    int32_t eax = data_bed820
    
    if (eax == 0)
        sub_5c8d60()
        return 0
    
    if (arg1 == 0 || *arg1 != eax + 0xf4)
        sub_5cce60("Invalid window")
        return 0
    
    if (arg1[0x1a] == 0)
        int32_t* eax_3 = arg1[0x19]
        
        if (eax_3 != 0)
            *eax_3 &= 0xfffffffb
            sub_5d65d0(arg1[0x19])
        
        char* eax_5 = sub_5c9e50(arg1)
        arg1[0x19] = eax_5
        
        if (eax_5 != 0)
            arg1[0x1a] = 1
            *eax_5 |= 4
    
    return arg1[0x19]
}
