// 函数名称: sub_477bb0
// 虚拟地址: 0x477bb0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_477bb0(int32_t arg1, char arg2, int32_t* arg3)
{
    // 第一条实际指令: if (arg1 == 0xc)
    if (arg1 == 0xc)
        int32_t eax_3 = data_307c7d0
        int32_t edx_4 = data_307c7d8
        
        if (arg2 == 0)
            edx_4 = data_307c7d4
        
        *arg3 = edx_4
        return eax_3
    
    if (arg1 == 0xd)
        int32_t eax_2 = data_307c7a8
        
        if (arg2 == 0)
            *arg3 = data_307c7ac
            return eax_2
        
        *arg3 = data_307c7b0
        return eax_2
    
    int32_t eax_1 = data_307c7bc
    
    if (arg2 == 0)
        *arg3 = data_307c7c0
        return eax_1
    
    *arg3 = data_307c7c4
    return eax_1
}
