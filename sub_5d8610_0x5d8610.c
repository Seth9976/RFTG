// 函数名称: sub_5d8610
// 虚拟地址: 0x5d8610
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t*sub_5d8610(int32_t arg1)
{
    // 第一条实际指令: int32_t* i = data_bf7fb8
    for (int32_t* i = data_bf7fb8; i != 0; i = i[0xa])
        if (arg1 == *i)
            i[9] += 1
            return i
    
    int32_t var_10 = 0x2c
    int32_t* eax = sub_5d0ac0()
    
    if (eax == 0)
        sub_5cd050(eax)
        return 0
    
    if (sub_5d7a50(eax, arg1) s< 0)
        int32_t* var_10_3 = eax
        sub_5d0af0()
        char const* const var_14_1 = "format"
        sub_5cce60("Parameter '%s' is invalid")
        return 0
    
    if (arg1 == 0 || (arg1 & 0xf0000000) == 0x10000000)
        int32_t esi_2 = arg1 u>> 0x18 & 0xf
        
        if (esi_2 != 1 && esi_2 != 2 && esi_2 != 3)
            eax[0xa] = data_bf7fb8
            data_bf7fb8 = eax
    else
        eax[0xa] = data_bf7fb8
        data_bf7fb8 = eax
    
    return eax
}
