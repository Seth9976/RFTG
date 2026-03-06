// 函数名称: sub_5d69a0
// 虚拟地址: 0x5d69a0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5d69a0(int32_t* arg1, int32_t* arg2, int32_t* arg3, int32_t* arg4)
{
    // 第一条实际指令: if (arg1 == 0 || arg3 == 0)
    if (arg1 == 0 || arg3 == 0)
        sub_5cce60("SDL_UpperBlitScaled: passed a NULL surface")
        return 0xffffffff
    
    if (arg1[7] != 0 || arg3[7] != 0)
        sub_5cce60("Surfaces must not be locked during blit")
        return 0xffffffff
    
    int32_t* edi = arg4
    
    if (edi == 0)
        int32_t var_2c_1 = arg3[2]
        int32_t edx_2 = arg3[3]
        int32_t var_30_1 = 0
        int32_t var_34 = 0
        int32_t var_28_1 = edx_2
        edi = &var_34
    
    int32_t var_24
    
    if (arg2 == 0)
        int32_t edx_6 = arg1[2]
        int32_t eax_8 = arg1[3]
        int32_t var_20_2 = 0
        var_24 = 0
        int32_t var_1c_3 = edx_6
        int32_t var_18_3 = eax_8
    else
        int32_t eax_1 = *arg2
        int32_t esi_1 = arg2[2]
        var_24 = eax_1
        int32_t var_1c = esi_1
        
        if (eax_1 s< 0)
            esi_1 += eax_1
            eax_1 = 0
            int32_t var_1c_1 = esi_1
            var_24 = 0
        
        int32_t ecx_3 = arg1[2] - eax_1
        
        if (ecx_3 s< esi_1)
            int32_t var_1c_2 = ecx_3
        
        int32_t eax_2 = arg2[1]
        int32_t edx_4 = arg2[3]
        int32_t var_20 = eax_2
        int32_t var_18 = edx_4
        
        if (eax_2 s< 0)
            edx_4 += eax_2
            eax_2 = 0
            int32_t var_18_1 = edx_4
            int32_t var_20_1 = 0
        
        int32_t ecx_6 = arg1[3] - eax_2
        
        if (ecx_6 s< edx_4)
            int32_t var_18_2 = ecx_6
    
    int32_t var_14
    int32_t eax_5
    int32_t esi_2
    
    if (edi == 0)
        esi_2 = arg3[2]
        eax_5 = arg3[3]
        int32_t var_10_2 = 0
        var_14 = 0
        int32_t var_c_3 = esi_2
        int32_t var_8_3 = eax_5
    else
        int32_t ecx_7 = *edi
        esi_2 = edi[2]
        var_14 = ecx_7
        int32_t var_c = esi_2
        
        if (ecx_7 s< 0)
            esi_2 += ecx_7
            ecx_7 = 0
            int32_t var_c_1 = esi_2
            var_14 = 0
        
        int32_t eax_4 = arg3[2] - ecx_7
        
        if (eax_4 s< esi_2)
            esi_2 = eax_4
            int32_t var_c_2 = esi_2
        
        int32_t edx_5 = edi[1]
        eax_5 = edi[3]
        int32_t var_10 = edx_5
        int32_t var_8 = eax_5
        
        if (edx_5 s< 0)
            eax_5 += edx_5
            edx_5 = 0
            int32_t var_8_1 = eax_5
            int32_t var_10_1 = 0
        
        int32_t ecx_9 = arg3[3] - edx_5
        
        if (ecx_9 s< eax_5)
            eax_5 = ecx_9
            int32_t var_8_2 = eax_5
    
    if (esi_2 s> 0 && eax_5 s> 0)
        return sub_5d61f0(arg1, &var_24, arg3, &var_14)
    
    return 0
}
