// 函数名称: sub_5cf890
// 虚拟地址: 0x5cf890
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __stdcallsub_5cf890(void* arg1, void* arg2)
{
    // 第一条实际指令: void* edi = *(arg2 + 0x28)
    void* edi = *(arg2 + 0x28)
    int32_t eax = *(edi + 0xc44)
    char eax_2 = (*(arg1 + 0x18)).b
    
    if ((eax_2 & 0xc) != 0)
        *(edi + eax * 0xc + 0x48) = 0
        eax_2 = *(arg2 + 0x20)
        *(edi + eax * 0xc + 0x4c) = eax_2
        *(edi + eax * 0xc + 0x44) = zx.d(eax_2) + 0x30
        *(arg2 + 0x20) += 1
    else if ((eax_2 & 0x10) == 0)
        if ((eax_2 & 3) == 0)
            return 1
        
        *(edi + eax * 0xc + 0x48) = 1
        *(edi + eax * 0xc + 0x4c) = *(arg2 + 8)
        int32_t eax_4 = sub_5cd130(arg1 + 4, 0x6b4428, 0x10)
        
        if (eax_4 != 0)
            if (sub_5cd130(arg1 + 4, 0x6b4438, 0x10) != 0)
                if (sub_5cd130(arg1 + 4, 0x6b4448, 0x10) != 0)
                    if (sub_5cd130(arg1 + 4, 0x6b4458, 0x10) != 0)
                        if (sub_5cd130(arg1 + 4, 0x6b4468, 0x10) != 0)
                            if (sub_5cd130(arg1 + 4, 0x6b4478, 0x10) != 0)
                                if (sub_5cd130(arg1 + 4, 0x6b4488, 0x10) != 0)
                                    return 1
                                
                                *(edi + eax * 0xc + 0x44) = (*(*(arg2 + 0x28) + 0xc48) << 2) + 0x18
                                void* eax_12 = *(arg2 + 0x28)
                                *(eax_12 + 0xc48) += 1
                            else
                                *(edi + eax * 0xc + 0x44) = 0x14
                        else
                            *(edi + eax * 0xc + 0x44) = 0x10
                    else
                        *(edi + eax * 0xc + 0x44) = 0xc
                else
                    *(edi + eax * 0xc + 0x44) = 8
            else
                *(edi + eax * 0xc + 0x44) = 4
        else
            *(edi + eax * 0xc + 0x44) = eax_4
        
        int32_t* eax_13 = *(arg2 + 0x28)
        int32_t var_28_1 = *(arg1 + 0x18)
        int32_t var_30 = 0x18
        int32_t var_2c_1 = 0x10
        int32_t var_20_1 = 0xffff8000
        int32_t var_1c_1 = 0x7fff
        int32_t var_24_1 = 2
        int32_t* eax_14 = *eax_13
        
        if ((*(*eax_14 + 0x18))(eax_14, 4, &var_30) s< 0)
            return 1
        
        int32_t ecx_5 = *(arg1 + 0x18)
        int32_t* edx_4 = *(arg2 + 0x28)
        int32_t var_18 = 0x14
        int32_t var_14_1 = 0x10
        int32_t var_10_1 = ecx_5
        int32_t var_c_1 = 2
        int32_t var_8_1 = 0
        int32_t* eax_17 = *edx_4
        
        if ((*(*eax_17 + 0x18))(eax_17, 5, &var_18) s< 0)
            return 1
        
        *(arg2 + 8) += 1
    else
        *(edi + eax * 0xc + 0x48) = 2
        eax_2 = *(arg2 + 0x10)
        *(edi + eax * 0xc + 0x4c) = eax_2
        *(edi + eax * 0xc + 0x44) = (zx.d(eax_2) << 2) + 0x20
        *(arg2 + 0x10) += 1
    
    void* eax_20 = *(arg2 + 0x28)
    *(eax_20 + 0xc44) += 1
    int32_t result
    result.b = *(*(arg2 + 0x28) + 0xc44) != 0x100
    return result
}
