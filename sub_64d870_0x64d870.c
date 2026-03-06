// 函数名称: sub_64d870
// 虚拟地址: 0x64d870
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

voidsub_64d870(int32_t arg1, int32_t arg2, int32_t arg3)
{
    // 第一条实际指令: int32_t esi = arg3 << 2
    int32_t esi = arg3 << 2
    __alloca_probe_16(esi)
    __alloca_probe_16(esi)
    int32_t i = 0
    int32_t esi_1 = 0
    int32_t var_8 = 0
    int32_t __saved_edi
    
    if (arg3 s> 0)
        do
            int32_t eax_2 = arg1
            
            if (esi_1 s>= 2)
                long double x87_r7_1 = fconvert.t(*(eax_2 + (i << 2)))
                void var_28
                long double x87_r6_1 = fconvert.t(*(&var_28 + (esi_1 << 2)))
                x87_r6_1 - x87_r7_1
                eax_2.w = (x87_r6_1 < x87_r7_1 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r6_1, x87_r7_1) ? 1 : 0) << 0xa
                    | (x87_r6_1 == x87_r7_1 ? 1 : 0) << 0xe | 0x3800
                
                if ((eax_2:1.b & 0x41) != 0)
                    void* var_c_1 = &(&__saved_edi)[esi_1 - 2]
                    
                    while (i s< *(&var_28 + (esi_1 << 2)) + arg2)
                        if (esi_1 s<= 1)
                            break
                        
                        long double x87_r6_2 = fconvert.t(*(&var_28 + (esi_1 << 2)))
                        long double x87_r5_1 = fconvert.t(*var_c_1)
                        x87_r5_1 - x87_r6_2
                        float* eax_7
                        eax_7.w = (x87_r5_1 < x87_r6_2 ? 1 : 0) << 8
                            | (is_unordered.t(x87_r5_1, x87_r6_2) ? 1 : 0) << 0xa
                            | (x87_r5_1 == x87_r6_2 ? 1 : 0) << 0xe | 0x3800
                        
                        if ((eax_7:1.b & 1) != 0)
                            break
                        
                        if (i s>= *var_c_1 + arg2)
                            break
                        
                        void var_2c
                        long double x87_r6_3 = fconvert.t(*(&var_2c + (esi_1 << 2)))
                        var_c_1 -= 4
                        esi_1 -= 1
                        x87_r6_3 - x87_r7_1
                        int32_t eax_9
                        eax_9.w = (x87_r6_3 < x87_r7_1 ? 1 : 0) << 8
                            | (is_unordered.t(x87_r6_3, x87_r7_1) ? 1 : 0) << 0xa
                            | (x87_r6_3 == x87_r7_1 ? 1 : 0) << 0xe | 0x3800
                        
                        if ((eax_9:1.b & 0x41) == 0)
                            break
                
                eax_2 = arg1
            
            long double x87_r7_2 = fconvert.t(*(eax_2 + (i << 2)))
            (&__saved_edi)[esi_1] = i
            (&__saved_edi)[esi_1] = fconvert.s(x87_r7_2)
            i += 1
            esi_1 += 1
        while (i s< arg3)
    
    int32_t ebx_2 = 0
    
    if (esi_1 s<= 0)
        return 
    
    int32_t __saved_esi
    int32_t* ecx = &__saved_esi
    int32_t eax_10 = 0
    int32_t* var_14_1 = &__saved_esi
    int32_t var_10_2 = eax_10
    
    while (true)
        bool p_1
        
        if (ebx_2 s< esi_1 - 1)
            long double x87_r7_3 = fconvert.t(*(ecx + eax_10))
            long double x87_r6_4 = fconvert.t((&__saved_edi)[ebx_2])
            x87_r6_4 - x87_r7_3
            eax_10.w = (x87_r6_4 < x87_r7_3 ? 1 : 0) << 8
                | (is_unordered.t(x87_r6_4, x87_r7_3) ? 1 : 0) << 0xa
                | (x87_r6_4 == x87_r7_3 ? 1 : 0) << 0xe
            p_1 = unimplemented  {test ah, 0x5}
        
        int32_t ecx_1
        
        if (ebx_2 s>= esi_1 - 1 || p_1)
            ecx_1 = ecx[-1] + arg2 + 1
        else
            ecx_1 = *ecx
        
        int32_t var_c_2 = ecx_1
        
        if (ecx_1 s> arg3)
            ecx_1 = arg3
            var_c_2 = ecx_1
        
        if (var_8 s< ecx_1)
            if (ecx_1 - var_8 s>= 4)
                int32_t i_2 = ((ecx_1 - var_8 - 4) u>> 2) + 1
                void* eax_16 = arg1 + (var_8 << 2) + 8
                var_8 += i_2 << 2
                int32_t i_1
                
                do
                    eax_16 += 0x10
                    i_1 = i_2
                    i_2 -= 1
                    *(eax_16 - 0x18) = fconvert.s(fconvert.t((&__saved_edi)[ebx_2]))
                    *(eax_16 - 0x14) = fconvert.s(fconvert.t((&__saved_edi)[ebx_2]))
                    *(eax_16 - 0x10) = fconvert.s(fconvert.t((&__saved_edi)[ebx_2]))
                    *(eax_16 - 0xc) = fconvert.s(fconvert.t((&__saved_edi)[ebx_2]))
                while (i_1 != 1)
                ecx_1 = var_c_2
            
            if (var_8 s< ecx_1)
                int32_t ecx_6 = ecx_1 - var_8
                int32_t ecx_7
                int32_t edi_6
                edi_6, ecx_7 = __memfill_u32(arg1 + (var_8 << 2), 
                    fconvert.s(fconvert.t((&__saved_edi)[ebx_2])), ecx_6)
                var_8 += ecx_6
        
        var_14_1 = &var_14_1[1]
        ebx_2 += 1
        
        if (ebx_2 s>= esi_1)
            break
        
        eax_10 = var_10_2
        ecx = var_14_1
}
