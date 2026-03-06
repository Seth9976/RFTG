// 函数名称: sub_5cb220
// 虚拟地址: 0x5cb220
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5cb220(int32_t* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t eax = data_bed820
    int32_t eax = data_bed820
    
    if (eax == 0)
        sub_5c8d60()
        return 0xffffffff
    
    if (arg1 == 0 || *arg1 != eax + 0xf4)
        sub_5cce60("Invalid window")
        return 0xffffffff
    
    int32_t eax_3 = arg1[0xc]
    int32_t ecx_1 = arg2 & 0x1001
    
    if (ecx_1 != (eax_3 & 0x1001))
        int32_t eax_5 = (eax_3 & 0xffffeffe) | ecx_1
        arg1[0xc] = eax_5
        
        if ((eax_5.b & 1) != 0 && (eax_5.b & 4) != 0 && (eax_5.b & 0x40) == 0)
            sub_5cb050(arg1, 1)
            return 0
        
        sub_5cb050(arg1, 0)
    
    return 0
}
