// 函数名称: sub_5d93b0
// 虚拟地址: 0x5d93b0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5d93b0(void* arg1, int32_t* arg2)
{
    // 第一条实际指令: if (sub_5d9390(arg1) == 0)
    if (sub_5d9390(arg1) == 0)
        sub_5cd050(4)
        return 0xffffffff
    
    int32_t ecx = *(arg1 + 0x128)
    int32_t* edi = arg2
    
    if (edi == ecx)
        return 0
    
    if (edi == 0)
    label_5d94cf:
        int32_t eax_7 = *(arg1 + 0x2c)
        *(arg1 + 0x128) = edi
        
        if (eax_7(arg1, edi) s>= 0)
            int32_t ecx_6
            
            if (edi == 0)
                int32_t eax_11 = *(arg1 + 0xe8)
                int32_t ecx_7 = *(arg1 + 0xec)
                *(arg1 + 0xd4) = *(arg1 + 0xe4)
                int32_t edx_7 = *(arg1 + 0xf0)
                *(arg1 + 0xd8) = eax_11
                int32_t eax_12 = *(arg1 + 0x104)
                *(arg1 + 0xdc) = ecx_7
                int32_t ecx_8 = *(arg1 + 0x108)
                *(arg1 + 0xf4) = eax_12
                int32_t eax_13 = *(arg1 + 0x110)
                *(arg1 + 0xe0) = edx_7
                int32_t edx_8 = *(arg1 + 0x10c)
                *(arg1 + 0xf8) = ecx_8
                int32_t ecx_9 = *(arg1 + 0x11c)
                *(arg1 + 0xfc) = edx_8
                int32_t edx_9 = *(arg1 + 0x120)
                *(arg1 + 0x100) = eax_13
                int32_t eax_14 = *(arg1 + 0xcc)
                *(arg1 + 0x114) = ecx_9
                ecx_6 = *(arg1 + 0xd0)
                *(arg1 + 0x118) = edx_9
                *(arg1 + 0xc4) = eax_14
            else
                long double x87_r7_1 = float.t(1)
                *(arg1 + 0xd4) = 0
                *(arg1 + 0xd8) = 0
                *(arg1 + 0xdc) = edi[3]
                int32_t edx_5 = edi[4]
                *(arg1 + 0x114) = fconvert.s(x87_r7_1)
                *(arg1 + 0x118) = fconvert.s(x87_r7_1)
                *(arg1 + 0xe0) = edx_5
                *(arg1 + 0xc4) = edi[3]
                ecx_6 = edi[4]
            
            int32_t edx_10 = *(arg1 + 0x30)
            *(arg1 + 0xc8) = ecx_6
            
            if (edx_10(arg1) s>= 0)
                int32_t ecx_10
                ecx_10.b = (*(arg1 + 0x34))(arg1) s>= 0
                return ecx_10 - 1
    else
        if (*edi == 0xbf7fc5)
            if (arg1 != edi[8])
                sub_5cce60("Texture was not created with this renderer")
                return 0xffffffff
            
            if (edi[2] != 2)
                sub_5cce60("Texture not created with SDL_TEXTUREACCESS_TARGET")
                return 0xffffffff
            
            int32_t* eax_2 = edi[9]
            
            if (eax_2 != 0)
                edi = eax_2
            
            if (edi != 0 && ecx == 0)
                int32_t ecx_1 = *(arg1 + 0xd8)
                int32_t edx_1 = *(arg1 + 0xdc)
                *(arg1 + 0xe4) = *(arg1 + 0xd4)
                int32_t eax_4 = *(arg1 + 0xe0)
                *(arg1 + 0xe8) = ecx_1
                int32_t ecx_2 = *(arg1 + 0xf4)
                *(arg1 + 0xec) = edx_1
                int32_t edx_2 = *(arg1 + 0xf8)
                *(arg1 + 0x104) = ecx_2
                int32_t ecx_3 = *(arg1 + 0x100)
                *(arg1 + 0x108) = edx_2
                int32_t edx_3 = *(arg1 + 0x114)
                *(arg1 + 0xf0) = eax_4
                *(arg1 + 0x10c) = *(arg1 + 0xfc)
                int32_t eax_6 = *(arg1 + 0x118)
                *(arg1 + 0x110) = ecx_3
                int32_t ecx_4 = *(arg1 + 0xc4)
                *(arg1 + 0x11c) = edx_3
                int32_t edx_4 = *(arg1 + 0xc8)
                *(arg1 + 0x120) = eax_6
                *(arg1 + 0xcc) = ecx_4
                *(arg1 + 0xd0) = edx_4
            
            goto label_5d94cf
        
        sub_5cce60("Invalid texture")
    
    return 0xffffffff
}
