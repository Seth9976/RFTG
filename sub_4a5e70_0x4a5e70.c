// 函数名称: sub_4a5e70
// 虚拟地址: 0x4a5e70
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_4a5e70(int32_t arg1, char* arg2, int32_t* arg3, int32_t arg4)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    char* esi = arg2
    int32_t ebx = 0
    int32_t edx_1 = &arg3[arg2 * 0x2d]
    char* var_d80 = esi
    int32_t var_d7c = arg4
    int32_t var_d74 = 0
    int32_t var_d88 = edx_1
    
    if (arg3 == 0)
        sub_49b2a0()
        noreturn
    
    if (esi s< 0)
        sub_49b2a0()
        noreturn
    
    int32_t i = sx.d(*(edx_1 + 0x44))
    int32_t ecx = 0
    
    if (i s< 0xffffffff)
        sub_49b2a0()
        noreturn
    
    while (i != 0xffffffff)
        i = sx.d(arg3[i * 5 + 0x11d].w)
        ecx += 1
    
    int32_t eax_7 = sx.d(*(edx_1 + 0xae)) - sx.d(*(edx_1 + 0xb0)) + ecx
    
    if (var_d7c == 0xffffffff)
        int32_t eax_8 = sx.d(*(arg3 + 0x1e6a))
        int32_t eax_9 = eax_8 - 1
        
        if (eax_8 - 1 s< 0)
        label_4a5f2f:
            var_d7c = 0xffffffff
        else
            while (true)
                edx_1 = sx.d(*(arg3 + eax_9 + 0x1e84))
                
                if (edx_1 == esi)
                    var_d7c = sx.d(*(arg3 + (eax_9 << 1) + 0x1e6c))
                    break
                
                int32_t temp1_1 = eax_9
                eax_9 -= 1
                
                if (temp1_1 - 1 s< 0)
                    goto label_4a5f2f
    
    void var_330
    void* var_da4 = &var_330
    int32_t var_da8 = 3
    int32_t eax_11 = sub_49dea0(esi, edx_1, ecx, arg3)
    int32_t ecx_1 = 0
    int32_t var_d78 = 0
    
    if (eax_11 s> 0)
        int32_t var_d70[0x148]
        int32_t var_850[0x148]
        
        while (true)
            void var_32e
            void var_32c
            
            if (var_d7c == 0xffffffff)
            label_4a6278:
                void* esi_5 = *(&var_32c + (var_d78 << 3))
                
                if ((*(esi_5 + 0xc) & 0x200) != 0)
                    int32_t eax_48 = sub_4a4bd0(var_d80, arg3)
                    ebx = var_d74
                    
                    if (eax_48 != 0)
                        int32_t eax_50 = sx.d(*(&var_32e + (var_d78 << 3)))
                        var_d70[ebx] = sx.d(*(&var_330 + (var_d78 << 3)))
                        var_850[ebx] = eax_50
                        ebx += 1
                        var_d74 = ebx
                
                if ((*(esi_5 + 8) & 0x8000000) == 0)
                label_4a638c:
                    
                    if (var_d7c == 0xffffffff && (*(*(&var_32c + (var_d78 << 3)) + 0xc) & 0x400) != 0)
                        int32_t ecx_22 = sx.d(*(&var_32e + (var_d78 << 3)))
                        var_d70[ebx] = sx.d(*(&var_330 + (var_d78 << 3)))
                        var_850[ebx] = ecx_22
                        ebx += 1
                        var_d74 = ebx
                else if (eax_7 != 0)
                    int32_t esi_6 = sx.d(*(var_d88 + 0x44))
                    
                    if (esi_6 != 0xffffffff)
                        while (true)
                            if (*(arg3[esi_6 * 5 + 0x11b] + 6) == 1
                                    && sub_4a1120(arg3, esi_6, 0, 0, 1, 0) != 0
                                    && *(arg3[esi_6 * 5 + 0x11b] + 0xe) != 5)
                                int32_t ebx_9 = var_d74
                                int32_t edx_16 = sx.d(*(&var_32e + (var_d78 << 3)))
                                var_d70[ebx_9] = sx.d(*(&var_330 + (var_d78 << 3)))
                                var_850[ebx_9] = edx_16
                                ebx = ebx_9 + 1
                                var_d74 = ebx
                                break
                            
                            esi_6 = sx.d(arg3[esi_6 * 5 + 0x11d].w)
                            
                            if (esi_6 == 0xffffffff)
                                ebx = var_d74
                                break
                    
                    goto label_4a638c
            else
                void* var_d8c
                
                if ((*(*(&var_32c + (ecx_1 << 3)) + 8) & 0x1000000) == 0)
                label_4a6075:
                    
                    if ((*(*(&var_32c + (var_d78 << 3)) + 8) & 0x2000000) == 0)
                    label_4a615d:
                        
                        if (*(var_d88 + 0x65) s<= 0)
                            goto label_4a6278
                        
                        void* edx_9 = arg3[var_d7c * 5 + 0x11b]
                        
                        if ((*(edx_9 + 0x10) & 1) == 0
                                || (*(*(&var_32c + (var_d78 << 3)) + 8) & 0x4000000) == 0)
                            goto label_4a6278
                        
                        if (eax_7 != 0)
                            int32_t esi_4 = sx.d(*(var_d88 + 0x44))
                            int32_t edx_10 = sx.d(*(edx_9 + 7))
                            
                            if (esi_4 != 0xffffffff)
                                while (true)
                                    var_d8c = &arg3[esi_4 * 5 + 0x119]
                                    void* eax_41 = arg3[esi_4 * 5 + 0x11b]
                                    
                                    if (*(eax_41 + 6) == 1 && (*(eax_41 + 0x10) & 1) != 0)
                                        int32_t eax_42 =
                                            sub_4a0fd0(eax_41, var_d7c, esi_4, arg3, var_d80)
                                        int32_t ecx_11 = edx_10 - eax_42
                                        
                                        if (edx_10 - eax_42 s< 0)
                                            ecx_11 = 0
                                        
                                        if (sub_4a1120(arg3, esi_4, neg.d(ecx_11), 1, 0, 0) != 0)
                                            int32_t ebx_7 = var_d74
                                            int32_t eax_45 = sx.d(*(&var_32e + (var_d78 << 3)))
                                            var_d70[ebx_7] = sx.d(*(&var_330 + (var_d78 << 3)))
                                            var_850[ebx_7] = eax_45
                                            ebx = ebx_7 + 1
                                            var_d74 = ebx
                                            break
                                    
                                    esi_4 = sx.d(arg3[esi_4 * 5 + 0x11d].w)
                                    
                                    if (esi_4 == 0xffffffff)
                                        ebx = var_d74
                                        break
                            
                            goto label_4a6278
                    else if (eax_7 != 0)
                        int32_t esi_2 = sx.d(*(var_d88 + 0x44))
                        
                        if (esi_2 != 0xffffffff)
                            while (true)
                                int32_t eax_27 = esi_2 * 5
                                var_d8c = &arg3[eax_27 + 0x119]
                                
                                if (*(arg3[eax_27 + 0x11b] + 6) == 1
                                        && sub_4a1120(arg3, esi_2, 0, 1, 0, 0) != 0)
                                    int32_t ebx_5 = var_d74
                                    int32_t edx_8 = sx.d(*(&var_32e + (var_d78 << 3)))
                                    var_d70[ebx_5] = sx.d(*(&var_330 + (var_d78 << 3)))
                                    var_850[ebx_5] = edx_8
                                    ebx = ebx_5 + 1
                                    var_d74 = ebx
                                    break
                                
                                esi_2 = sx.d(arg3[esi_2 * 5 + 0x11d].w)
                                
                                if (esi_2 == 0xffffffff)
                                    ebx = var_d74
                                    break
                        
                        goto label_4a615d
                else if (sub_4a43c0(esi, 1) == 0)
                    if (eax_7 != 0)
                        int32_t esi_1 = sx.d(*(var_d88 + 0x44))
                        
                        if (esi_1 == 0xffffffff)
                        label_4a6058:
                            ebx = var_d74
                        else
                            while (true)
                                var_d8c = &arg3[esi_1 * 5 + 0x119]
                                
                                if (*(arg3[esi_1 * 5 + 0x11b] + 6) == 1
                                        && sub_4a1120(arg3, esi_1, 0, 0, 0, 0) != 0)
                                    int32_t ebx_4 = var_d74
                                    int32_t eax_31 = sx.d(*(&var_32e + (var_d78 << 3)))
                                    var_d70[ebx_4] = sx.d(*(&var_330 + (var_d78 << 3)))
                                    var_850[ebx_4] = eax_31
                                    ebx = ebx_4 + 1
                                    var_d74 = ebx
                                    break
                                
                                esi_1 = sx.d(arg3[esi_1 * 5 + 0x11d].w)
                                
                                if (esi_1 == 0xffffffff)
                                    goto label_4a6058
                        
                        goto label_4a6075
                    
                    ebx = var_d74
                else
                    int32_t ebx_1 = var_d74
                    int32_t eax_19 = sx.d(*(&var_32e + (var_d78 << 3)))
                    var_d70[ebx_1] = sx.d(*(&var_330 + (var_d78 << 3)))
                    var_850[ebx_1] = eax_19
                    ebx = ebx_1 + 1
                    var_d74 = ebx
            ecx_1 = var_d78 + 1
            var_d78 = ecx_1
            
            if (ecx_1 s>= eax_11)
                break
            
            esi = var_d80
        
        if (ebx != 0)
            sub_49d720(arg3, var_d80)
            int32_t* var_dac_1
            int32_t* var_da8_3
            int32_t* var_da4_2
            int32_t* eax_63
            
            if (*(var_d88 + 0xc8) s>= *(var_d88 + 0xc4))
                (*(*(var_d88 + 0x28) + 0xc))(arg3, var_d80, 7, &var_d70, &var_d74, &var_850, &var_d74, 
                    0, 0, 0, 0)
                
                if (*(arg3 + 0x1ec3) == 0)
                    int32_t eax_66 = *(*(var_d88 + 0x28) + 0x10)
                    
                    if (eax_66 != 0)
                        eax_66(arg3, var_d80, 7)
                    
                    var_da4_2 = &var_d74
                    eax_63 = &var_d74
                    var_da8_3 = &var_d74
                    var_dac_1 = &var_d70
                    goto label_4a64a9
            else
                eax_63 = &var_d74
                var_da4_2 = &var_d74
                var_da8_3 = &var_d74
                var_dac_1 = &var_d70
            label_4a64a9:
                sub_49d860(eax_63, &var_850, arg3, var_d80, 7, var_dac_1, var_da8_3, var_da4_2)
                
                if (*(arg3 + 0x1ec3) == 0 && var_d74 != 0)
                    int32_t eax_67 = var_d70[0]
                    sub_4a5660(eax_67, arg3, var_d7c, var_d80, eax_67, var_850[0])
                    int32_t result
                    result.b = *(arg3 + 0x1ec3) == 0
                    sub_5a6aba(eax_1 ^ &__saved_ebp)
                    return result
    
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return 0
}
