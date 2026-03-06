// 函数名称: sub_60dfd0
// 虚拟地址: 0x60dfd0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_60dfd0(void* arg1, void* arg2, int32_t arg3)
{
    // 第一条实际指令: void* ebx = *(arg1 + 0x134)
    void* ebx = *(arg1 + 0x134)
    void* __saved_edi = arg1
    int32_t eax
    int32_t ecx
    int32_t edx
    eax, edx = sub_60d940(ecx)
    
    if (eax s< 0)
        return 0xffffffff
    
    sub_60d480(*(arg1 + 0x130), edx, ebx)
    int32_t* eax_3 = *(ebx + 8)
    int32_t eax_4
    int32_t edx_2
    eax_4, edx_2 = (*(*eax_3 + 0x104))(eax_3, 0, 0)
    
    if (eax_4 s< 0)
        char const* const __saved_edi_1 = "SetTexture()"
        sub_60c740(eax_4, edx_2)
        return 0xffffffff
    
    uint32_t edi_6 =
        ((zx.d(*(arg1 + 0x12f)) << 8 | zx.d(*(arg1 + 0x12c))) << 8 | zx.d(*(arg1 + 0x12d))) << 8
        | zx.d(*(arg1 + 0x12e))
    arg1 = nullptr
    
    if (arg3 s> 0)
        void* esi_2 = arg2 + 4
        void* eax_10
        
        do
            long double x87_r7_1 = float.t(0)
            uint32_t var_68_1 = edi_6
            float var_c_1 = fconvert.s(fconvert.t(*esi_2))
            uint32_t var_50_1 = edi_6
            uint32_t var_38_1 = edi_6
            uint32_t var_20_1 = edi_6
            float var_10_1 = fconvert.s(fconvert.t(*(esi_2 + 4)) + fconvert.t(*(esi_2 - 4)))
            float var_14_1 = fconvert.s(fconvert.t(*(esi_2 + 8)) + fconvert.t(*esi_2))
            long double x87_r6_7 = fconvert.t(fconvert.s(fconvert.t(*(esi_2 - 4))))
            float var_74 = fconvert.s(x87_r6_7)
            long double x87_r5_1 = fconvert.t(var_c_1)
            float var_70_1 = fconvert.s(x87_r5_1)
            float var_6c_1 = fconvert.s(x87_r7_1)
            float var_64_1 = fconvert.s(x87_r7_1)
            float var_60_1 = fconvert.s(x87_r7_1)
            long double x87_r4_1 = fconvert.t(var_10_1)
            float var_5c_1 = fconvert.s(x87_r4_1)
            float var_58_1 = fconvert.s(x87_r5_1)
            float var_54_1 = fconvert.s(x87_r7_1)
            float var_4c_1 = fconvert.s(x87_r7_1)
            float var_48_1 = fconvert.s(x87_r7_1)
            float var_44_1 = fconvert.s(x87_r4_1)
            long double x87_r5_4 = fconvert.t(var_14_1)
            float var_40_1 = fconvert.s(x87_r5_4)
            float var_3c_1 = fconvert.s(x87_r7_1)
            float var_34_1 = fconvert.s(x87_r7_1)
            float var_30_1 = fconvert.s(x87_r7_1)
            float var_24_1 = fconvert.s(x87_r7_1)
            float var_2c_1 = fconvert.s(x87_r6_7)
            float var_28_1 = fconvert.s(x87_r5_4)
            float var_1c_1 = fconvert.s(x87_r7_1)
            float var_18_1 = fconvert.s(x87_r7_1)
            int32_t* eax_6 = *(ebx + 8)
            int32_t eax_8
            int32_t edx_4
            eax_8, edx_4 = (*(*eax_6 + 0x14c))(eax_6, 6, 2, &var_74, 0x18)
            
            if (eax_8 s< 0)
                char const* const var_84 = "DrawPrimitiveUP()"
                sub_60c740(eax_8, edx_4)
                return 0xffffffff
            
            eax_10 = arg1 + 1
            esi_2 += 0x10
            arg1 = eax_10
        while (eax_10 s< arg3)
    
    return 0
}
