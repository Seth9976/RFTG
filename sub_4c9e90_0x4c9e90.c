// 函数名称: sub_4c9e90
// 虚拟地址: 0x4c9e90
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

floatsub_4c9e90()
{
    // 第一条实际指令: float performanceCount_1
    float performanceCount_1
    QueryPerformanceCounter(&performanceCount_1)
    int32_t* eax = data_27e7bbc
    *eax = performanceCount_1
    float var_44
    eax[1] = var_44
    long double x87_r7_1 =
        sub_4c5fa0(eax[2], eax[3], performanceCount_1, var_44) * fconvert.t(0.0010000000474974513)
    int32_t* edi = data_27e7bbc
    int32_t ecx_3 = edi[1]
    int32_t eax_1 = *edi
    performanceCount_1 = fconvert.s(x87_r7_1)
    long double x87_r7_2 = fconvert.t(edi[4])
    edi[3] = ecx_3
    long double x87_r7_3 = x87_r7_2 + fconvert.t(performanceCount_1)
    void* ecx_4 = data_27e7fcc
    edi[2] = eax_1
    performanceCount_1 = fconvert.s(x87_r7_3)
    long double x87_r7_4 = fconvert.t(performanceCount_1)
    edi[4] = fconvert.s(x87_r7_4)
    eax_1.b = *(ecx_4 + 0x44)
    performanceCount_1 = fconvert.s(fconvert.t(data_8c4e0c))
    
    if (eax_1.b != 0)
        performanceCount_1 = fconvert.s(fconvert.t(*(ecx_4 + 0x58)))
    
    void* ebx = data_27e7fd0
    float performanceCount = fconvert.s(x87_r7_4 / fconvert.t(performanceCount_1))
    float esi
    float var_88
    
    if (ebx == 0 || *(ebx + 0x27) == 0 || eax_1.b != 0 || data_26a4568 == 0 || data_26a45a4 == eax_1.b)
        var_88.q = fconvert.d(fconvert.t(performanceCount))
        int32_t eax_3
        int32_t mxcsr
        int16_t x87control
        long double st0_2
        st0_2, eax_3 = sub_686950(mxcsr, x87control, var_88)
        performanceCount = fconvert.s(st0_2)
        performanceCount = fconvert.s(fconvert.t(performanceCount))
        long double x87_r7_11 = float.t(0)
        long double x87_r6_3 = fconvert.t(performanceCount)
        x87_r6_3 - x87_r7_11
        eax_3.w = (x87_r6_3 < x87_r7_11 ? 1 : 0) << 8
            | (is_unordered.t(x87_r6_3, x87_r7_11) ? 1 : 0) << 0xa
            | (x87_r6_3 == x87_r7_11 ? 1 : 0) << 0xe | 0x3000
        bool p_1 = unimplemented  {test ah, 0x5}
        long double x87_r7_12
        
        if (p_1)
            x87_r7_12 = x87_r7_11 + fconvert.t(0.5)
        else
            x87_r7_12 = x87_r7_11 - fconvert.t(0.5)
        
        float result = sub_685f40(x87_r7_12)
        esi = result
        performanceCount = esi
        
        if (result == 0)
            if (ebx != 0 && *(ebx + 0x27) != result.b)
                return result
            
            return Sleep(1)
        
        ebx.b = 0
    else
        long double x87_r7_6 = fconvert.t(0.75f)
        long double x87_r6_2 = fconvert.t(performanceCount)
        x87_r6_2 - x87_r7_6
        eax_1.w = (x87_r6_2 < x87_r7_6 ? 1 : 0) << 8
            | (is_unordered.t(x87_r6_2, x87_r7_6) ? 1 : 0) << 0xa
            | (x87_r6_2 == x87_r7_6 ? 1 : 0) << 0xe | 0x3000
        bool p = unimplemented  {test ah, 0x5}
        
        if (not(p))
            var_88.q = fconvert.d(x87_r7_6)
            ecx_4 = sub_4c5680("update loop called to soon from vsync %f")
            x87_r7_6 = fconvert.t(performanceCount)
            edi = data_27e7bbc
        
        void* var_84_2 = ecx_4
        ebx.b = 1
        float eax_2
        int80_t st0_1
        st0_1, eax_2 = sub_403030(fconvert.s(x87_r7_6))
        esi = eax_2
        performanceCount = esi
        
        if (esi == 0)
            esi = 1.40129846e-45f
            performanceCount = 1.40129846e-45f
    float eax_5 = 1.40129846e-43f
    
    if (*(edi + 0x1b) != 0)
        eax_5 = 1.40129846e-45f
    
    if (esi s> eax_5)
        unimplemented  {fldz }
        esi = eax_5
    else if (ebx.b == 0)
        unimplemented  {fld st0, dword [edi+0x10]}
        unimplemented  {fild st0, dword [esp+0x30]}
        unimplemented  {fmul st0, dword [esp+0x38]}
        unimplemented  {fsubp st1, st0}
        unimplemented  {fsubp st1, st0}
    else
        unimplemented  {fldz }
    
    void* eax_6 = data_27e7fcc
    edi[4] = fconvert.s(unimplemented  {fstp dword [edi+0x10], st0})
    unimplemented  {fstp dword [edi+0x10], st0}
    
    if (*(eax_6 + 0x42) != 0)
        if (*(eax_6 + 0x43) == 0)
            return sub_4d6b40()
        
        *(eax_6 + 0x43) = 0
        esi = 1.40129846e-45f
    
    QueryPerformanceCounter(&performanceCount)
    sub_4d3410(esi)
    int32_t* ecx_5 = data_27e7fd0
    *(data_27e7bbc + 0x14) = esi
    (*(*ecx_5 + 0x2c))()
    sub_4e6000()
    QueryPerformanceCounter(&performanceCount_1)
    float performanceCount_2 = performanceCount_1
    int32_t var_4c
    uint32_t eax_10 = sub_4c5f30(performanceCount_2 i- performanceCount, 
        sbb.d(var_44, var_4c, performanceCount_2 u< performanceCount))
    
    if (eax_10 s> 0x50)
        uint32_t var_84_8 = eax_10
        sub_4c5680("slow frame %d ms")
    
    return sub_51ca50("Non-Update Loop")
}
