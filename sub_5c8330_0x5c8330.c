// 函数名称: sub_5c8330
// 虚拟地址: 0x5c8330
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5c8330(int32_t* arg1, int32_t arg2, char arg3)
{
    // 第一条实际指令: if (arg2 == 0xffffffff)
    if (arg2 == 0xffffffff)
        return 0
    
    int32_t ebx
    ebx.b = arg3
    uint32_t eax_1 = zx.d(ebx.b)
    int32_t eax_5
    
    if (eax_1 == 0)
        eax_5 = 0x652
    else
        if (eax_1 != 1)
            return 0
        
        eax_5 = 0x651
    
    int32_t var_3c = eax_5
    
    if (sub_5c7830(eax_5, 0xffffffff) != 1)
        return 0
    
    int32_t* eax_7
    eax_7.b = arg2.b
    int32_t var_34_1 = **arg1
    char var_30_1 = eax_7.b
    char var_2f_1 = ebx.b
    int32_t esi_1 = sub_5c76a0(&var_3c) - 1
    int32_t esi_2 = neg.d(esi_1)
    return sbb.d(esi_2, esi_2, esi_1 != 0) + 1
}
