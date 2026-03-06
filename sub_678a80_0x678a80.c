// 函数名称: sub_678a80
// 虚拟地址: 0x678a80
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_678a80(int32_t arg1, int32_t arg2, int32_t arg3, int32_t* arg4, int32_t* arg5, int16_t* arg6)
{
    // 第一条实际指令: int32_t var_60
    int32_t var_60
    __builtin_memset(&var_60, 0, 0x20)
    int32_t eax = 0
    
    if (arg3 != 0)
        do
            uint32_t ecx_1 = zx.d(*(arg2 + (eax << 1)))
            *(&var_60 + (ecx_1 << 1)) += 1
            eax += 1
        while (eax u< arg3)
    
    uint32_t ecx_3 = *arg5
    uint32_t var_8 = ecx_3
    uint32_t eax_1 = 0xf
    
    while (*(&var_60 + (eax_1 << 1)) == 0)
        eax_1 -= 1
        
        if (eax_1 u< 1)
            break
    
    if (ecx_3 u> eax_1)
        var_8 = eax_1
        ecx_3 = eax_1
    
    if (eax_1 == 0)
        **arg4 = 0x140
        *arg4 += 4
        **arg4 = 0x140
        *arg4 += 4
        *arg5 = 1
        return 0
    
    uint32_t ebx = 1
    
    if (eax_1 u> 1)
        while (*(&var_60 + (ebx << 1)) == 0)
            ebx += 1
            
            if (ebx u>= eax_1)
                break
    
    if (ecx_3 u< ebx)
        var_8 = ebx
    
    int32_t edx_3 = 1
    int32_t ecx_4 = 1
    
    while (true)
        uint32_t esi_1 = zx.d(*(&var_60 + (ecx_4 << 1)))
        int32_t edx_4 = edx_3 * 2
        edx_3 = edx_4 - esi_1
        
        if (edx_4 - esi_1 s< 0)
            break
        
        ecx_4 += 1
        
        if (ecx_4 u> 0xf)
            int32_t esi_2 = arg1
            
            if (edx_3 s> 0)
                if (esi_2 != 0 && eax_1 == 1)
                    goto label_678b7d
                
                break
            
        label_678b7d:
            int16_t var_7e = 0
            void var_80
            
            for (int32_t i = 2; i u< 0x1e; )
                ecx_4.w = *(&var_80 + i)
                ecx_4.w += *(&var_60 + i)
                i += 2
                *(&var_80 + i) = ecx_4.w
            
            int32_t eax_5 = 0
            
            if (arg3 != 0)
                do
                    if (*(arg2 + (eax_5 << 1)) != 0)
                        arg6[zx.d(*(&var_80 + (zx.d(*(arg2 + (eax_5 << 1))) << 1)))] = eax_5.w
                        uint32_t ecx_7 = zx.d(*(arg2 + (eax_5 << 1)))
                        *(&var_80 + (ecx_7 << 1)) += 1
                        esi_2 = arg1
                    
                    eax_5 += 1
                while (eax_5 u< arg3)
            
            void* const var_28
            void* const var_24
            int32_t var_20
            
            if (esi_2 == 0)
                var_28 = arg6
                var_20 = 0x13
                var_24 = arg6
            else if (esi_2 == 1)
                var_28 = &data_834006
                var_20 = 0x100
                var_24 = &data_834046
            else
                var_28 = &data_834288
                var_24 = &data_8342c8
                var_20 = 0xffffffff
            
            int32_t var_c = 0
            uint32_t var_10 = 0
            int32_t var_34 = 0xffffffff
            int32_t eax_10 = 1 << var_8.b
            int32_t var_1c = *arg4
            int32_t edi_1 = eax_10
            int32_t ecx_10 = eax_10 - 1
            int32_t var_30 = edi_1
            int32_t var_2c = eax_10
            bool cond:1_1
            
            if (esi_2 != 1)
                if (esi_2 == 2)
                    cond:1_1 = eax_10 u>= 0x250
                    goto label_678c6f
                
            label_678c78:
                int16_t* var_14_1 = arg6
                
                while (true)
                    char edx_9 = var_10.b
                    eax_10.b = ebx.b
                    eax_10.b -= edx_9
                    arg3:1.b = eax_10.b
                    uint32_t eax_11 = zx.d(*var_14_1)
                    
                    if (eax_11 s< var_20)
                        arg3.b = 0
                        arg3:2.w = eax_11.w
                    else if (eax_11 s<= var_20)
                        arg3.b = 0x60
                        arg3:2.w = 0
                    else
                        char* eax_14 = zx.d(*var_14_1) * 2
                        void* const ecx_13
                        ecx_13.b = *(eax_14 + var_24)
                        arg3.b = ecx_13.b
                        eax_14.w = *(eax_14 + var_28)
                        arg3:2.w = eax_14.w
                    
                    int32_t eax_15 = edi_1
                    int32_t edx_10 = 1 << (ebx.b - edx_9)
                    int32_t var_3c_1 = eax_15
                    int32_t* ecx_19 = var_1c + (((var_c u>> var_10.b) + eax_15) << 2)
                    int32_t temp3_1
                    
                    do
                        ecx_19 -= edx_10 << 2
                        temp3_1 = eax_15
                        eax_15 -= edx_10
                        *ecx_19 = arg3
                    while (temp3_1 != edx_10)
                    int32_t eax_16 = 1 << (ebx.b - 1)
                    
                    while ((var_c & eax_16) != 0)
                        eax_16 u>>= 1
                    
                    if (eax_16 == 0)
                        var_c = 0
                    else
                        var_c = ((eax_16 - 1) & var_c) + eax_16
                    
                    var_14_1 = &var_14_1[1]
                    int16_t temp4_1 = *(&var_60 + (ebx << 1))
                    *(&var_60 + (ebx << 1)) -= 1
                    
                    if (temp4_1 == 1)
                        if (ebx == eax_1)
                            if (var_c != 0)
                                ebx.b -= var_10.b
                                arg3:2.w = 0
                                arg3.b = 0x40
                                arg3:1.b = ebx.b
                                *(var_1c + (var_c << 2)) = arg3
                            
                            *arg4 += var_2c << 2
                            *arg5 = var_8
                            return 0
                        
                        ebx = zx.d(*(arg2 + (zx.d(*var_14_1) << 1)))
                    
                    if (ebx u> var_8)
                        int32_t esi_7 = ecx_10 & var_c
                        
                        if (esi_7 != var_34)
                            uint32_t edx_15 = var_10
                            
                            if (edx_15 == 0)
                                var_10 = var_8
                                edx_15 = var_8
                            
                            uint32_t ecx_26 = ebx - edx_15
                            var_1c += var_3c_1 << 2
                            uint32_t edx_16 = edx_15 + ecx_26
                            int32_t eax_19 = 1 << ecx_26.b
                            
                            if (edx_16 u< eax_1)
                                int32_t __saved_ebp
                                void* esi_8 = &__saved_ebp + (edx_16 << 1) - 0x5c
                                
                                do
                                    int32_t eax_20 = eax_19 - zx.d(*esi_8)
                                    
                                    if (eax_20 s<= 0)
                                        break
                                    
                                    edx_16 += 1
                                    ecx_26 += 1
                                    esi_8 += 2
                                    eax_19 = eax_20 * 2
                                while (edx_16 u< eax_1)
                            
                            edi_1 = 1 << ecx_26.b
                            int32_t edx_18 = var_2c + edi_1
                            var_30 = edi_1
                            var_2c = edx_18
                            bool cond:4_1
                            
                            if (arg1 == 1)
                                cond:4_1 = edx_18 u>= 0x354
                            label_678df5:
                                
                                if (cond:4_1)
                                    break
                            else if (arg1 == 2)
                                cond:4_1 = edx_18 u>= 0x250
                                goto label_678df5
                            *(*arg4 + (esi_7 << 2)) = ecx_26.b
                            int32_t eax_22
                            eax_22.b = var_8.b
                            *(*arg4 + (esi_7 << 2) + 1) = eax_22.b
                            eax_10 = *arg4
                            var_34 = esi_7
                            *(eax_10 + (esi_7 << 2) + 2) = ((var_1c - eax_10) s>> 2).w
                            continue
                    
                    edi_1 = var_30
            else
                cond:1_1 = eax_10 u>= 0x354
            label_678c6f:
                
                if (not(cond:1_1))
                    goto label_678c78
            return 1
    
    return 0xffffffff
}
