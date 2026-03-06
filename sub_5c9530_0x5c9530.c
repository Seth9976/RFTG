// 函数名称: sub_5c9530
// 虚拟地址: 0x5c9530
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5c9530(int32_t* arg1, int32_t* arg2)
{
    // 第一条实际指令: if (arg2 == 0)
    if (arg2 == 0)
        char const* const __saved_esi = "mode"
        sub_5cce60("Parameter '%s' is invalid")
        return 0xffffffff
    
    int32_t eax = data_bed820
    
    if (eax == 0)
        sub_5c8d60()
        return 0xffffffff
    
    if (arg1 == 0 || *arg1 != eax + 0xf4)
        sub_5cce60("Invalid window")
        return 0xffffffff
    
    int32_t edx = arg1[0x14]
    int32_t ecx = arg1[0x13]
    int32_t var_18 = arg1[0x11]
    int32_t eax_4 = arg1[0x12]
    int32_t var_c = edx
    int32_t edx_1 = arg1[0x15]
    int32_t var_14 = eax_4
    int32_t var_10 = ecx
    
    if (eax_4 == 0)
        var_14 = arg1[6]
    
    if (ecx == 0)
        var_10 = arg1[7]
    
    void* eax_6 = sub_5c9500(arg1)
    int32_t eax_7
    
    if ((arg1[0xc] & 0x1001) != 0x1001)
        if (sub_5c90a0(sub_5c9500(arg1), &var_18, &var_18) == 0)
            sub_5cce60("Couldn't find display mode match")
            return 0xffffffff
        
        eax_7 = edx_1
    else
        var_18 = *(eax_6 + 0x10)
        var_14 = *(eax_6 + 0x14)
        var_10 = *(eax_6 + 0x18)
        var_c = *(eax_6 + 0x1c)
        eax_7 = *(eax_6 + 0x20)
    
    *arg2 = var_18
    arg2[1] = var_14
    arg2[2] = var_10
    arg2[3] = var_c
    arg2[4] = eax_7
    return 0
}
