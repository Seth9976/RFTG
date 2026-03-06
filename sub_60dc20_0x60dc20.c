// 函数名称: sub_60dc20
// 虚拟地址: 0x60dc20
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_60dc20(void* arg1, void* arg2, int32_t arg3)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_8 = ecx
    void* esi = *(arg1 + 0x134)
    void* const var_18 = arg1
    int32_t eax
    int32_t edx
    eax, edx = sub_60d940(ecx)
    
    if (eax s< 0)
        return 0xffffffff
    
    sub_60d480(*(arg1 + 0x130), edx, esi)
    int32_t* eax_3 = *(esi + 8)
    int32_t edx_1 = *(*eax_3 + 0x104)
    var_18 = nullptr
    int32_t var_1c = 0
    int32_t* var_20 = eax_3
    int32_t eax_4
    int32_t edx_2
    eax_4, edx_2 = edx_1(var_20, var_1c, var_18)
    
    if (eax_4 s< 0)
        char const* const var_24 = "SetTexture()"
        sub_60c740(eax_4, edx_2)
        return 0xffffffff
    
    uint32_t esi_7 =
        ((zx.d(*(arg1 + 0x12f)) << 8 | zx.d(*(arg1 + 0x12c))) << 8 | zx.d(*(arg1 + 0x12d))) << 8
        | zx.d(*(arg1 + 0x12e))
    __alloca_probe_16(arg3 * 0x18)
    int32_t edx_4 = 0
    long double x87_r7 = float.t(0)
    
    if (arg3 s>= 4)
        void** eax_10 = &var_18
        void* ecx_5 = arg2 + 8
        int32_t i_1 = ((arg3 - 4) u>> 2) + 1
        edx_4 = i_1 << 2
        int32_t i
        
        do
            long double x87_r6_1 = fconvert.t(*(ecx_5 - 8))
            ecx_5 += 0x20
            eax_10[-2] = fconvert.s(x87_r6_1)
            eax_10 = &eax_10[0x18]
            i = i_1
            i_1 -= 1
            eax_10[-0x19] = fconvert.s(fconvert.t(*(ecx_5 - 0x24)))
            eax_10[-0x17] = esi_7
            eax_10[-0x18] = fconvert.s(x87_r7)
            eax_10[-0x16] = fconvert.s(x87_r7)
            eax_10[-0x15] = fconvert.s(x87_r7)
            eax_10[-0x14] = fconvert.s(fconvert.t(*(ecx_5 - 0x20)))
            long double x87_r6_4 = fconvert.t(*(ecx_5 - 0x1c))
            eax_10[-0x11] = esi_7
            eax_10[-0x13] = fconvert.s(x87_r6_4)
            eax_10[-0x12] = fconvert.s(x87_r7)
            eax_10[-0x10] = fconvert.s(x87_r7)
            eax_10[-0xf] = fconvert.s(x87_r7)
            eax_10[-0xe] = fconvert.s(fconvert.t(*(ecx_5 - 0x18)))
            long double x87_r6_6 = fconvert.t(*(ecx_5 - 0x14))
            eax_10[-0xb] = esi_7
            eax_10[-0xd] = fconvert.s(x87_r6_6)
            eax_10[-0xc] = fconvert.s(x87_r7)
            eax_10[-0xa] = fconvert.s(x87_r7)
            eax_10[-9] = fconvert.s(x87_r7)
            eax_10[-8] = fconvert.s(fconvert.t(*(ecx_5 - 0x10)))
            long double x87_r6_8 = fconvert.t(*(ecx_5 - 0xc))
            eax_10[-5] = esi_7
            eax_10[-7] = fconvert.s(x87_r6_8)
            eax_10[-6] = fconvert.s(x87_r7)
            eax_10[-4] = fconvert.s(x87_r7)
            eax_10[-3] = fconvert.s(x87_r7)
        while (i != 1)
    
    if (edx_4 s< arg3)
        void* eax_12 = &(&var_20)[edx_4 * 6 + 2]
        
        do
            long double x87_r6_9 = fconvert.t(*(arg2 + (edx_4 << 3)))
            edx_4 += 1
            *(eax_12 - 8) = fconvert.s(x87_r6_9)
            eax_12 += 0x18
            long double x87_r6_10 = fconvert.t(*(arg2 + (edx_4 << 3) - 4))
            *(eax_12 - 0x14) = esi_7
            *(eax_12 - 0x1c) = fconvert.s(x87_r6_10)
            *(eax_12 - 0x18) = fconvert.s(x87_r7)
            *(eax_12 - 0x10) = fconvert.s(x87_r7)
            *(eax_12 - 0xc) = fconvert.s(x87_r7)
        while (edx_4 s< arg3)
    
    int32_t* eax_13 = *(esi + 8)
    int32_t eax_15
    int32_t edx_6
    eax_15, edx_6 = (*(*eax_13 + 0x14c))(eax_13, 1, arg3, &var_20, 0x18)
    
    if (eax_15 s>= 0)
        return 0
    
    char const* const var_24_1 = "DrawPrimitiveUP()"
    sub_60c740(eax_15, edx_6)
    return 0xffffffff
}
