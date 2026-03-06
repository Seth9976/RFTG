// 函数名称: sub_493a90
// 虚拟地址: 0x493a90
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_493a90(void* arg1, int32_t arg2, int32_t arg3, int32_t arg4, int32_t arg5, double arg6, double arg7)
{
    // 第一条实际指令: int32_t edx = arg2
    int32_t edx = arg2
    int32_t i
    
    for (i = arg3; i == edx; i += 1)
    
    long double x87_r7 = fconvert.t(arg7)
    long double x87_r6 = fconvert.t(arg6)
    x87_r6 - x87_r7
    void* eax
    eax.w = (x87_r6 < x87_r7 ? 1 : 0) << 8 | (is_unordered.t(x87_r6, x87_r7) ? 1 : 0) << 0xa
        | (x87_r6 == x87_r7 ? 1 : 0) << 0xe | 0x3000
    bool p = unimplemented  {test ah, 0x5}
    
    if (p)
        long double x87_r5_1 = float.t(0)
        x87_r5_1 - x87_r7
        eax.w = (x87_r5_1 < x87_r7 ? 1 : 0) << 8 | (is_unordered.t(x87_r5_1, x87_r7) ? 1 : 0) << 0xa
            | (x87_r5_1 == x87_r7 ? 1 : 0) << 0xe | 0x3800
        bool p_1 = unimplemented  {test ah, 0x44}
        
        if (p_1)
            eax = arg1
            
            if (i == sx.d(*(eax + 0x458)))
                int32_t edi = data_c02204
                int32_t ecx_2 = data_c02184
                
                if (edi == ecx_2)
                    int32_t edx_1 = data_26031c8
                    data_c02184 = ecx_2 + 0x64
                    x87_r7 = fconvert.t(arg6)
                    data_26031c8 = _realloc(edx_1, (ecx_2 + 0x64) << 5)
                    eax = arg1
                
                int32_t i_1 = 0
                
                if (*(eax + 0x458) s> 0)
                    int32_t* edx_4 = (edi << 5) + data_26031c8
                    
                    do
                        *edx_4 = *(arg5 + (i_1 << 2))
                        i_1 += 1
                        edx_4 = &edx_4[1]
                    while (i_1 s< sx.d(*(eax + 0x458)))
                
                int32_t eax_3 = edi << 5
                *(eax_3 + data_26031c8 + 0x18) = fconvert.d(x87_r7)
                data_c02204 = edi + 1
                return eax_3
            
            arg3 = 0
            
            if (data_2691be0 s> 0)
                double* esi_4 = i * 0x60 + arg4
                int32_t eax_5
                
                while (true)
                    int32_t var_18
                    var_18.q = fconvert.d(fconvert.t(arg7))
                    *(arg5 + (i << 2)) = *((esi_4[1].d << 2) + &data_8c6a80)
                    sub_493a90(eax, edx, i + 1, arg4, arg5, fconvert.d(x87_r7 * fconvert.t(*esi_4)), 
                        var_18)
                    eax_5 = arg3 + 1
                    esi_4 = &esi_4[2]
                    arg3 = eax_5
                    
                    if (eax_5 s>= data_2691be0)
                        break
                    
                    x87_r7 = fconvert.t(arg6)
                    edx = arg2
                    eax = arg1
                
                return eax_5
    
    return eax
}
