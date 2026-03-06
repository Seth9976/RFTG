// 函数名称: sub_4cb8b0
// 虚拟地址: 0x4cb8b0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

uint32_tsub_4cb8b0(void* arg1 @ esi, void* arg2 @ edi, float arg3)
{
    // 第一条实际指令: int32_t ecx = *(arg1 + 8)
    int32_t ecx = *(arg1 + 8)
    
    if (ecx == 0)
        long double x87_r7_1 = fconvert.t(*(arg1 + 0x1c))
        long double x87_r6_1 = float.t(0)
        x87_r6_1 - x87_r7_1
        int32_t eax
        eax.w = (x87_r6_1 < x87_r7_1 ? 1 : 0) << 8 | (is_unordered.t(x87_r6_1, x87_r7_1) ? 1 : 0) << 0xa
            | (x87_r6_1 == x87_r7_1 ? 1 : 0) << 0xe
        bool p_1 = unimplemented  {test ah, 0x44}
        
        if (p_1)
            *(arg2 + 0x28) = fconvert.s(fconvert.t(*(arg1 + 0x1c)))
        
        if (*(arg2 + 0x1c) != 0)
            if (*(arg1 + 0x17) != 0)
                *(arg2 + 0x34) = *(arg1 + 0x14)
            
            if (*(arg1 + 0x1b) != 0)
                *(arg2 + 0x38) = *(arg1 + 0x18)
    
    int32_t eax_2 = *(arg1 + 0x10)
    
    if (eax_2 != 0)
        *(arg2 + 0x40) = eax_2
    
    uint32_t result = *(arg1 + 4)
    
    if (result != 0)
        result = *result
        int32_t edx_2 = *(arg1 + 0xc)
        *(arg2 + 0x10) = fconvert.s(fconvert.t(*(arg1 + 0x20)))
        long double x87_r7_4 = fconvert.t(*(arg1 + 0x24))
        *(arg2 + 0x2c) = result
        *(arg2 + 0x14) = fconvert.s(x87_r7_4)
        *(arg2 + 0x30) = edx_2
        *(arg2 + 0x6c) = fconvert.s(fconvert.t(*(arg1 + 0x28)))
        *(arg2 + 0x70) = fconvert.s(fconvert.t(*(arg1 + 0x2c)))
    
    if (*(arg2 + 0x1c) != 0 && ecx != 0)
        float* eax_4 = sub_4e71c0(*(arg2 + 0x2c))
        float eax_7
        float edx_3
        eax_7, edx_3 = sub_418560(**(arg1 + 8))
        float var_20_1 = eax_7
        int32_t eax_8 = *(arg1 + 0x14)
        int32_t var_c_1 = eax_8
        var_c_1:3.b = ((zx.d(*(arg2 + 0x3f)) * (eax_8 u>> 0x18) + 0x80) s/ 0xff).b
        int32_t var_18 = var_c_1
        float var_c_2 = fconvert.s(float.t(1))
        int32_t var_14_1 = 0
        long double x87_r7_8 = fconvert.t(*(arg1 + 0x1c))
        long double x87_r6_2 = float.t(0)
        x87_r6_2 - x87_r7_8
        int32_t eax_14
        eax_14.w = (x87_r6_2 < x87_r7_8 ? 1 : 0) << 8
            | (is_unordered.t(x87_r6_2, x87_r7_8) ? 1 : 0) << 0xa
            | (x87_r6_2 == x87_r7_8 ? 1 : 0) << 0xe
        bool p_2 = unimplemented  {test ah, 0x44}
        
        if (p_2)
            var_c_2 = fconvert.s(fconvert.t(*(arg1 + 0x1c)))
        
        long double x87_r7_10 = fconvert.t(var_c_2)
        int32_t* var_2c_1 = &var_18
        float var_30_1 = fconvert.s(x87_r7_10)
        int32_t* ecx_4 = *(arg1 + 8)
        result = sub_4da670(*ecx_4, eax_4, arg2 + 0x48, 
            fconvert.s(fconvert.t(fconvert.s(fconvert.t(*(arg2 + 0x20)) + fconvert.t(*(arg2 + 0xc))))), 
            fconvert.s(fconvert.t(fconvert.s(fconvert.t(fconvert.s(float.t(eax_4[1])
                + fconvert.t(*(arg2 + 0x24)) - x87_r7_10 * fconvert.t(edx_3)))
                + float.t(*(arg1 + 0xc))))), 
            fconvert.s(x87_r7_10), ecx_4)
    
    *(arg2 + 0xc) = fconvert.s(fconvert.t(*(arg2 + 0xc)) + fconvert.t(arg3))
    return result
}
