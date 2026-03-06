// 函数名称: sub_494810
// 虚拟地址: 0x494810
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

voidsub_494810(int32_t arg1 @ edi, int32_t arg2, int32_t arg3, int32_t* arg4)
{
    // 第一条实际指令: void** ecx
    void** ecx
    void* edx
    ecx, edx = __chkstk(0x42cc)
    int32_t __saved_ebp
    int32_t var_c = __security_cookie ^ &__saved_ebp
    int32_t edi = 0
    int32_t ecx_1 = 0
    int32_t var_530[0x147]
    
    if (arg2 s>= 1)
        int32_t eax_3 = 1
        
        do
            if ((arg2 & eax_3) != 0)
                var_530[edi] = *(arg3 + (ecx_1 << 2))
                edi += 1
            
            ecx_1 += 1
            eax_3 = 1 << ecx_1.b
        while (eax_3 s<= arg2)
    
    int32_t entry_ebx
    int32_t var_10 = entry_ebx
    void var_42c0
    void* edx_3 = sub_49dbf0(sub_48bb40(edx, &var_42c0, arg2.b), &var_530, &var_42c0, entry_ebx, edi)
    int32_t ecx_4 = sx.d(*(edx + 0x458))
    int32_t eax_8 = 0
    
    if (ecx_4 s> 0)
        void var_4210
        edx_3 = &var_4210
        
        do
            if (eax_8 != entry_ebx)
                *edx_3 = 2
            
            eax_8 += 1
            edx_3 += 0xb4
        while (eax_8 s< ecx_4)
    
    int32_t i = 0
    
    if (data_2691be0 s> 0)
        do
            int32_t var_10_2 = entry_ebx
            void var_23f8
            sub_48bb40(&var_42c0, &var_23f8, edx_3.b)
            edx_3 = edx
            int32_t var_23cc[0x7a5]
            var_23c8
            
            if (*(edx_3 + 0x459) != 0)
                edx_3 = *((i << 3) + &data_8c6820)
                
                if (edx_3.b s>= 0)
                    int32_t ecx_6 = *((i << 3) + &data_8c6824)
                    
                    if (ecx_6.b s>= 0)
                        var_23cc[entry_ebx * 0x2d] = edx_3
                        *(&var_23c8 + entry_ebx * 0xb4) = ecx_6
                        goto label_494966
            else
                int32_t ecx_5 = *((i << 2) + &data_8c6a80)
                
                if (ecx_5.b s>= 0)
                    var_23cc[entry_ebx * 0x2d] = ecx_5
                    *(&var_23c8 + entry_ebx * 0xb4) = 0xffffffff
                label_494966:
                    int32_t var_10_3 = 0
                    char var_538_1 = 0xff
                    int32_t eax_16
                    char edx_5
                    eax_16, edx_5 = sub_48bc70(&var_23f8, sub_4b0760(&var_23f8))
                    long double st0_1
                    st0_1, edx_3 = sub_4904a0(eax_16, edx_5, &var_23f8, entry_ebx)
                    double* ecx_8 = *arg4
                    long double x87_r6_2 = fconvert.t(*ecx_8) - fconvert.t(9.9999999999999995e-07)
                    x87_r6_2 - st0_1
                    int32_t* eax_17
                    eax_17.w = (x87_r6_2 < st0_1 ? 1 : 0) << 8
                        | (is_unordered.t(x87_r6_2, st0_1) ? 1 : 0) << 0xa
                        | (x87_r6_2 == st0_1 ? 1 : 0) << 0xe | 0x3800
                    bool p_1 = unimplemented  {test ah, 0x41}
                    
                    if (not(p_1))
                        *ecx_8 = fconvert.d(st0_1)
                        edx_3 = *ecx
                        *edx_3 = arg2
            i += 1
        while (i s< data_2691be0)
    
    sub_5a6aba(arg1 ^ &__saved_ebp)
}
