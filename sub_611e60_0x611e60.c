// 函数名称: sub_611e60
// 虚拟地址: 0x611e60
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_611e60(void* arg1, int32_t* arg2, int32_t arg3)
{
    // 第一条实际指令: if (arg1 == 0)
    if (arg1 == 0)
        sub_5cce60("Passed NULL destination surface")
        return 0xffffffff
    
    if (*(*(arg1 + 4) + 8) u< 8)
        sub_5cce60("SDL_FillRect(): Unsupported surface format")
        return 0xffffffff
    
    void* esi_1
    void var_18
    
    if (arg2 == 0)
        esi_1 = arg1 + 0x24
    label_611ec4:
        int32_t edx_2 = *(arg1 + 0x14)
        
        if (edx_2 == 0)
            sub_5cce60("SDL_FillRect(): You must lock the surface")
            return 0xffffffff
        
        uint32_t eax_4 = zx.d(*(*(arg1 + 4) + 9))
        char* ecx_2 = *(esi_1 + 4) * *(arg1 + 0x10) + edx_2
        int128_t* edi_5 = *esi_1 * eax_4 + ecx_2
        
        if (eax_4 - 1 u<= 3)
            switch (eax_4)
                case 1
                    int32_t eax_7 = arg3 | arg3 << 8
                    int32_t eax_8 = eax_7 | eax_7 << 0x10
                    
                    if (sub_612590() != 0)
                        sub_6116c0(edi_5, *(arg1 + 0x10), eax_8, *(esi_1 + 8), *(esi_1 + 0xc))
                        return 0
                    
                    if (sub_612570() != 0)
                        sub_611960(edi_5, *(arg1 + 0x10), eax_8, *(esi_1 + 8), *(esi_1 + 0xc))
                        return 0
                    
                    int32_t eax_16 = *(esi_1 + 8)
                    void* ecx_8 = *(arg1 + 0x10)
                    int32_t var_28_4 = *(esi_1 + 0xc)
                    sub_611c40(eax_16, eax_8, ecx_8, edi_5, ecx_8, eax_16)
                case 2
                    int32_t eax_19 = arg3 | arg3 << 0x10
                    
                    if (sub_612590() != 0)
                        sub_6117a0(edi_5, *(arg1 + 0x10), eax_19, *(esi_1 + 8), *(esi_1 + 0xc))
                        return 0
                    
                    if (sub_612570() != 0)
                        sub_611a40(edi_5, *(arg1 + 0x10), eax_19, *(esi_1 + 8), *(esi_1 + 0xc))
                        return 0
                    
                    int32_t eax_27 = *(esi_1 + 8)
                    int16_t* ecx_12 = *(arg1 + 0x10)
                    int32_t var_28_7 = *(esi_1 + 0xc)
                    sub_611d00(eax_27, eax_19, ecx_12, edi_5, ecx_12, eax_27)
                case 3
                    int32_t var_28_8 = *(arg1 + 0x10)
                    sub_611d90(*(esi_1 + 0xc), arg3, *(esi_1 + 8), ecx_2, edi_5)
                case 4
                    if (sub_612590() != 0)
                        int32_t edx_17 = *(arg1 + 0x10)
                        sub_611890(edi_5, edx_17, *(esi_1 + 8), edx_17, arg3, *(esi_1 + 0xc))
                        return 0
                    
                    int32_t eax_35 = sub_612570()
                    
                    if (eax_35 != 0)
                        int32_t ecx_15 = *(esi_1 + 8)
                        int32_t var_28_10 = *(esi_1 + 0xc)
                        int32_t var_2c_10 = ecx_15
                        sub_611b50(edi_5, arg3, ecx_15, *(arg1 + 0x10), arg3)
                        return 0
                    
                    int32_t edx_19 = *(arg1 + 0x10)
                    sub_611df0(eax_35, edx_19, arg3, *(esi_1 + 8), edi_5, edx_19, *(esi_1 + 0xc))
    else if (sub_5d4dd0(arg2, arg1 + 0x24, &var_18) != 0)
        esi_1 = &var_18
        goto label_611ec4
    return 0
}
