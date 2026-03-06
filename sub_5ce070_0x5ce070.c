// 函数名称: sub_5ce070
// 虚拟地址: 0x5ce070
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void __convention("regparm")sub_5ce070(void* arg1, double* arg2)
{
    // 第一条实际指令: void* esi = arg1
    void* esi = arg1
    int32_t edi = 0
    bool cond:0 = *esi != 0x2d
    void* var_c = esi
    int32_t var_8 = 0
    
    if (not(cond:0))
        edi = 1
        esi += 1
    
    int32_t* var_28 = &var_8
    int32_t ebx = 0xa
    int32_t* edx
    void* i = sub_5cde50(esi, edx)
    long double x87_r7 = float.t(var_8)
    void* esi_1 = esi + i
    
    if (var_8 s< 0)
        x87_r7 = x87_r7 + fconvert.t(4294967296.0)
    
    long double x87_r7_1 = x87_r7 + fconvert.t(0.0)
    double var_18 = fconvert.d(x87_r7_1)
    
    if (*esi_1 == 0x2e)
        uint32_t edx_1 = zx.d(*(esi_1 + 1))
        esi_1 += 1
        uint32_t var_28_1 = edx_1
        var_8 = 0xa
        
        if (sub_5dece0() != 0)
            do
                int32_t eax_1 = sx.d(*esi_1)
                long double x87_r7_2 = float.t(eax_1 - 0x30)
                
                if (eax_1 - 0x30 s< 0)
                    x87_r7_2 = x87_r7_2 + fconvert.t(4294967296.0)
                
                long double x87_r7_3 = x87_r7_2 / float.t(var_8)
                uint32_t eax_3 = zx.d(*(esi_1 + 1))
                esi_1 += 1
                ebx *= 0xa
                uint32_t var_28_2 = eax_3
                var_8 = ebx
                var_18 = fconvert.d(x87_r7_3 + fconvert.t(var_18))
                i = sub_5dece0()
            while (i != 0)
        
        x87_r7_1 = fconvert.t(var_18)
    
    if (arg2 == 0)
        return 
    
    if (edi != 0)
        long double x87_r5_1 = float.t(0)
        x87_r5_1 - x87_r7_1
        i.w = (x87_r5_1 < x87_r7_1 ? 1 : 0) << 8 | (is_unordered.t(x87_r5_1, x87_r7_1) ? 1 : 0) << 0xa
            | (x87_r5_1 == x87_r7_1 ? 1 : 0) << 0xe | 0x3800
        bool p_1 = unimplemented  {test ah, 0x44}
        
        if (p_1)
            x87_r7_1 = fneg(x87_r7_1)
    
    *arg2 = fconvert.d(x87_r7_1)
}
