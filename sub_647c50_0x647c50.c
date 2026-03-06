// 函数名称: sub_647c50
// 虚拟地址: 0x647c50
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void* __convention("regparm")sub_647c50(int32_t arg1, float arg2, void* arg3)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_8 = ecx
    long double x87_r7_1 = fconvert.t(fconvert.s(fconvert.t(*(arg3 + 0x50))))
    int32_t eax_1 = sub_685f40(x87_r7_1)
    int32_t* ebx = *(arg2 i+ 0x1c)
    long double x87_r7_2 = x87_r7_1 - float.t(eax_1)
    int32_t i_5 = 0xf
    
    if (arg1 == 0)
        void* eax_17 = &ebx[0x339]
        int32_t i
        
        do
            *(eax_17 - 0x3c) = *ebx
            *eax_17 = ebx[1]
            eax_17 += 4
            i = i_5
            i_5 -= 1
        while (i != 1)
        return eax_17
    
    long double x87_r6_2 = float.t(1) - x87_r7_2
    void* eax_3 = eax_1 * 0xf0 + arg1
    __builtin_memcpy(&ebx[0x30c], eax_3, 0x3c)
    __builtin_memcpy(&ebx[0x31b], eax_3 + 0x3c, 0x3c)
    
    if (*(arg3 + 0x1c) != 0)
        long double x87_r5 = fconvert.t(1000.0)
        void* edx_1 = arg2 i+ 8
        void* esi_3 = &ebx[0x2fd]
        void* edi_2 = eax_3 + 0x168
        int32_t i_4 = 0xf
        int32_t eax_9
        int32_t i_1
        
        do
            long double x87_r4_4 = fconvert.t(fconvert.s(fconvert.t(*(edi_2 - 0xf0)) * x87_r6_2
                + fconvert.t(*edi_2) * x87_r7_2))
            long double x87_r3_4 = x87_r4_4 * x87_r5
            *(esi_3 - 0x3c) = sub_685f40(x87_r3_4 / float.t(*edx_1) * float.t(*ebx))
            *esi_3 = sub_685f40(x87_r3_4 / float.t(*edx_1) * float.t(ebx[1]))
            *(esi_3 - 0x78) = sub_685f40(x87_r4_4)
            long double x87_r4_9 = fconvert.t(fconvert.s(fconvert.t(*(edi_2 + 0x3c)) * x87_r7_2
                + fconvert.t(*(edi_2 - 0xb4)) * x87_r6_2)) * x87_r5
            *(esi_3 + 0xb4) = sub_685f40(x87_r4_9 / float.t(*edx_1) * float.t(*ebx))
            eax_9 = sub_685f40(x87_r4_9 / float.t(*edx_1) * float.t(ebx[1]))
            *(esi_3 + 0xf0) = eax_9
            edi_2 += 4
            esi_3 += 4
            i_1 = i_4
            i_4 -= 1
        while (i_1 != 1)
        return eax_9
    
    int32_t* edi_3 = arg2 i+ 8
    long double x87_r5_4 = fconvert.t(fconvert.s(fconvert.t(*(eax_3 + 0x184)) * x87_r7_2
        + fconvert.t(*(eax_3 + 0x94)) * x87_r6_2))
    long double x87_r4_15 = x87_r5_4 * fconvert.t(1000.0)
    arg2 = sub_685f40(x87_r5_4)
    void* esi_4 = &ebx[0x2fd]
    arg3 = 0xf
    void* i_2
    
    do
        *(esi_4 - 0x3c) = sub_685f40(x87_r4_15 / float.t(*edi_3) * float.t(*ebx))
        *esi_4 = sub_685f40(x87_r4_15 / float.t(*edi_3) * float.t(ebx[1]))
        *(esi_4 - 0x78) = arg2
        esi_4 += 4
        i_2 = arg3
        arg3 -= 1
    while (i_2 != 1)
    void* esi_5 = &ebx[0x339]
    long double x87_r7_6 = x87_r4_15 * fconvert.t(fconvert.s(x87_r6_2 * fconvert.t(*(eax_3 + 0xd0))
        + x87_r7_2 * fconvert.t(*(eax_3 + 0x1c0))))
    arg3 = 0xf
    int32_t eax_16
    void* i_3
    
    do
        *(esi_5 - 0x3c) = sub_685f40(x87_r7_6 / float.t(*edi_3) * float.t(*ebx))
        eax_16 = sub_685f40(x87_r7_6 / float.t(*edi_3) * float.t(ebx[1]))
        *esi_5 = eax_16
        esi_5 += 4
        i_3 = arg3
        arg3 -= 1
    while (i_3 != 1)
    return eax_16
}
