// 函数名称: sub_5c9a50
// 虚拟地址: 0x5c9a50
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5c9a50(int32_t* arg1, int32_t arg2, int32_t arg3)
{
    // 第一条实际指令: void* edx = data_bed820
    void* edx = data_bed820
    
    if (edx == 0)
        sub_5c8d60()
        return 0xffffffff
    
    int32_t* esi = arg1
    
    if (esi == 0 || *esi != edx + 0xf4)
        sub_5cce60("Invalid window")
        return 0xffffffff
    
    int32_t eax_2 = arg2
    int32_t ebx_1 = eax_2 & 0xffff0000
    int32_t edi = arg3
    
    if (ebx_1 == 0x2fff0000 || (edi & 0xffff0000) == 0x2fff0000)
        int32_t var_14
        sub_5c8ee0(sub_5c8e50(sub_5c9500(esi)), &var_14)
        
        if (ebx_1 == 0x2fff0000)
            int32_t var_c
            int32_t eax_7
            int32_t edx_1
            edx_1:eax_7 = sx.q(var_c - arg1[6])
            arg2 = ((eax_7 - edx_1) s>> 1) + var_14
        
        if ((edi & 0xffff0000) != 0x2fff0000)
            esi = arg1
        else
            esi = arg1
            int32_t var_8
            int32_t eax_13
            int32_t edx_4
            edx_4:eax_13 = sx.q(var_8 - arg1[7])
            int32_t var_10
            edi = ((eax_13 - edx_4) s>> 1) + var_10
        
        eax_2 = arg2
        edx = data_bed820
    
    if ((esi[0xc].b & 1) != 0)
        if ((eax_2 & 0xffff0000) != 0x1fff0000)
            esi[0xd] = eax_2
        
        int32_t result = edi & 0xffff0000
        
        if (result != 0x1fff0000)
            esi[0xe] = edi
        
        return result
    
    if ((eax_2 & 0xffff0000) != 0x1fff0000)
        esi[4] = eax_2
    
    if ((edi & 0xffff0000) != 0x1fff0000)
        esi[5] = edi
    
    int32_t ecx_9 = *(edx + 0x28)
    
    if (ecx_9 != 0)
        ecx_9(edx, esi)
        eax_2 = arg2
    
    return sub_5d6e90(esi, 4, eax_2, edi)
}
