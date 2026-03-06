// 函数名称: sub_68b2f0
// 虚拟地址: 0x68b2f0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_68b2f0(int32_t* arg1, int32_t* arg2)
{
    // 第一条实际指令: int32_t* esi = arg1
    int32_t* esi = arg1
    void* const var_c
    void* const var_8
    void* const eax
    void* const ecx_1
    
    if (esi == 0)
        eax = nullptr
    label_68b323:
        var_8 = nullptr
        var_c = nullptr
        ecx_1 = nullptr
        arg1 = nullptr
    else
        eax = esi[0x10]
        
        if (eax == 0)
            goto label_68b323
        
        var_8 = *(eax + 0x68)
        ecx_1 = *(eax + 4)
        var_c = ecx_1
        
        if (ecx_1 == 0)
            arg1 = nullptr
        else
            arg1 = *(ecx_1 + 0x1c)
    
    void* ebx
    
    if (esi == 0)
        ebx = nullptr
    else
        ebx = &esi[1]
    
    if (eax != 0 && var_8 != 0 && ecx_1 != 0 && arg1 != 0 && ebx != 0)
        sub_649b40(esi)
        sub_68af60(ebx, *arg2, arg2[1])
        
        if (sub_68b0a0(ebx, 1) != 0)
            return 0xffffff79
        
        int32_t eax_4 = sub_68b0a0(ebx, *(var_8 + 0x2c))
        
        if (eax_4 != 0xffffffff)
            esi[0xa] = eax_4
            int32_t* eax_5 = arg1[eax_4 + 8]
            
            if (eax_5 != 0)
                int32_t eax_6 = *eax_5
                esi[7] = eax_6
                
                if (eax_6 == 0)
                    esi[6] = 0
                    esi[8] = 0
                label_68b3fb:
                    esi[0xc] = arg2[4]
                    esi[0xd] = arg2[5]
                    esi[0xe] = arg2[6]
                    int32_t ecx_5 = esi[7]
                    esi[0xf] = arg2[7]
                    esi[0xb] = arg2[3]
                    esi[9] = arg1[ecx_5]
                    int32_t i = 0
                    *esi = sub_649ad0(esi, *(var_c + 4) * 4)
                    
                    if (*(var_c + 4) s> 0)
                        do
                            *(*esi + (i << 2)) = sub_649ad0(esi, esi[9] * 4)
                            i += 1
                        while (i s< *(var_c + 4))
                    
                    int32_t eax_16 = *(arg1[eax_4 + 8] + 0xc)
                    return (*((&data_825e80)[arg1[eax_16 + 0x48]] + 0x10))(esi, arg1[eax_16 + 0x88])
                
                esi[6] = sub_68b0a0(ebx, 1)
                int32_t eax_8 = sub_68b0a0(ebx, 1)
                esi[8] = eax_8
                
                if (eax_8 != 0xffffffff)
                    goto label_68b3fb
    
    return 0xffffff78
}
