// 函数名称: sub_5ccca0
// 虚拟地址: 0x5ccca0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

char* __convention("regparm")sub_5ccca0(void* arg1, char* arg2)
{
    // 第一条实际指令: char* esi = arg2
    char* esi = arg2
    *esi = 0
    void* i = arg1 - 1
    int32_t* eax = sub_5d4520()
    
    if (*eax == 0)
        return esi
    
    void* ebx = &eax[1]
    void* eax_1
    eax_1.b = *ebx
    
    if (eax_1.b != 0)
        void* var_8_1 = &eax[0x22]
        
        while (i != 0)
            ebx += 1
            
            if (eax_1.b != 0x25)
                *esi = eax_1.b
                esi = &esi[1]
                i -= 1
            else
                char var_28 = eax_1.b
                void var_27
                char* eax_2 = &var_27
                void* ecx_1
                
                while (true)
                    ecx_1.b = *ebx
                    
                    if (ecx_1.b != 0x2e)
                        if (ecx_1.b s< 0x30)
                            break
                        
                        if (ecx_1.b s> 0x39)
                            break
                    
                    void var_a
                    
                    if (eax_2 u>= &var_a)
                        break
                    
                    *eax_2 = ecx_1.b
                    eax_2 = &eax_2[1]
                    ebx += 1
                
                ecx_1.b = *ebx
                *eax_2 = ecx_1.b
                eax_2[1] = 0
                ebx += 1
                char* var_3c
                
                switch (sx.d(*eax_2) - 0x25)
                    case nullptr
                        *esi = 0x25
                        esi = &esi[1]
                        i -= 1
                    case 0x33, 0x3e, 0x3f, 0x44, 0x4a, 0x50, 0x53
                        int32_t var_38_1 = *var_8_1
                        var_3c = &var_28
                    label_5ccd86:
                        eax_1, ecx_1 = sub_5ce6a0(esi, i, var_3c)
                        var_8_1 -= 0xffffff80
                        esi += eax_1
                        i -= eax_1
                    case 0x41
                        var_3c.q = fconvert.d(fconvert.t(*var_8_1))
                        eax_1, ecx_1 = sub_5ce6a0(esi, i, &var_28)
                        var_8_1 -= 0xffffff80
                        esi += eax_1
                        i -= eax_1
                    case 0x4b
                        int32_t var_38_2 = *var_8_1
                        var_3c = &var_28
                        goto label_5ccd86
                    case 0x4e
                        void* var_38_3 = var_8_1
                        var_3c = &var_28
                        goto label_5ccd86
            
            eax_1.b = *ebx
            
            if (eax_1.b == 0)
                break
    
    *esi = 0
    return arg2
}
