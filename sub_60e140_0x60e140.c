// 函数名称: sub_60e140
// 虚拟地址: 0x60e140
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_60e140(void* arg1, int32_t arg2, int32_t* arg3, float* arg4)
{
    // 第一条实际指令: int32_t esi = arg2
    int32_t esi = arg2
    int32_t* ebx = *(esi + 0x44)
    void* edi = *(arg1 + 0x134)
    void* var_90 = arg1
    int32_t ecx
    
    if (sub_60d940(ecx) s< 0)
        return 0xffffffff
    
    long double x87_r6 = fconvert.t(0.5)
    float var_10 = fconvert.s(fconvert.t(arg4[1]) - x87_r6)
    float var_18 = fconvert.s(fconvert.t(arg4[2]) + fconvert.t(*arg4) - x87_r6)
    int32_t ecx_1 = *arg3
    int32_t ecx_2 = arg3[1]
    float var_20 = fconvert.s(fconvert.t(arg4[3]) + fconvert.t(arg4[1]) - x87_r6)
    long double x87_r6_9 = fconvert.t(fconvert.s(float.t(*(esi + 0xc))))
    uint32_t edx_2 = zx.d(*(esi + 0x1d))
    float var_14 = fconvert.s(float.t(ecx_1) / x87_r6_9)
    float var_1c = fconvert.s(float.t(arg3[2] + ecx_1) / x87_r6_9)
    long double x87_r6_11 = fconvert.t(fconvert.s(float.t(*(esi + 0x10))))
    uint32_t eax_13 =
        ((zx.d(*(esi + 0x1f)) << 8 | zx.d(*(esi + 0x1c))) << 8 | edx_2) << 8 | zx.d(*(esi + 0x1e))
    uint32_t var_74 = eax_13
    uint32_t var_5c = eax_13
    float var_8_2 = fconvert.s(float.t(ecx_2) / x87_r6_11)
    arg2 = fconvert.s(float.t(arg3[3] + ecx_2) / x87_r6_11)
    long double x87_r7_14 = fconvert.t(fconvert.s(fconvert.t(*arg4) - x87_r6))
    float var_80 = fconvert.s(x87_r7_14)
    long double x87_r6_13 = fconvert.t(var_10)
    float var_7c = fconvert.s(x87_r6_13)
    long double x87_r5_2 = float.t(0)
    float var_78 = fconvert.s(x87_r5_2)
    long double x87_r4 = fconvert.t(var_14)
    float var_70 = fconvert.s(x87_r4)
    long double x87_r3 = fconvert.t(var_8_2)
    float var_6c = fconvert.s(x87_r3)
    long double x87_r2 = fconvert.t(var_18)
    float var_68 = fconvert.s(x87_r2)
    float var_64 = fconvert.s(x87_r6_13)
    float var_60 = fconvert.s(x87_r5_2)
    long double x87_r2_2 = fconvert.t(var_1c)
    float var_58 = fconvert.s(x87_r2_2)
    float var_54 = fconvert.s(x87_r3)
    float var_50 = fconvert.s(x87_r2)
    uint32_t var_44 = eax_13
    long double x87_r3_3 = fconvert.t(var_20)
    uint32_t var_2c = eax_13
    float var_4c = fconvert.s(x87_r3_3)
    float var_48 = fconvert.s(x87_r5_2)
    float var_40 = fconvert.s(x87_r2_2)
    long double x87_r3_6 = fconvert.t(arg2)
    float var_3c = fconvert.s(x87_r3_6)
    float var_38 = fconvert.s(x87_r7_14)
    float var_34 = fconvert.s(x87_r3_3)
    float var_30 = fconvert.s(x87_r5_2)
    float var_28 = fconvert.s(x87_r4)
    float var_24 = fconvert.s(x87_r3_6)
    sub_60d480(*(esi + 0x18), edx_2, edi)
    void* const esi_1 = nullptr
    sub_60d5b0(0, edi, ebx)
    int32_t* eax_15 = *(edi + 8)
    int32_t eax_16
    int32_t edx_5
    eax_16, edx_5 = (*(*eax_15 + 0x104))(eax_15, 0, *ebx)
    
    if (eax_16 s>= 0)
        int32_t eax_23
        int32_t edx_9
        
        if (ebx[2] == 0)
        label_60e346:
            int32_t* eax_24 = *(edi + 8)
            int32_t eax_26
            int32_t edx_10
            eax_26, edx_10 = (*(*eax_24 + 0x14c))(eax_24, 6, 2, &var_80, 0x18)
            
            if (eax_26 s< 0)
                char const* const var_90_9 = "DrawPrimitiveUP()"
                sub_60c740(eax_26, edx_10)
                return 0xffffffff
            
            if (esi_1 != 0)
                int32_t* edi_1 = *(edi + 8)
                eax_23, edx_9 = (*(*edi_1 + 0x1ac))(edi_1, 0)
            
            if (esi_1 == 0 || eax_23 s>= 0)
                return 0
            
            goto label_60e332
        
        void* eax_17 = *(edi + 0x84)
        sub_60d5b0(1, edi, ebx)
        sub_60d5b0(2, edi, ebx)
        int32_t* eax_18 = *(edi + 8)
        eax_16, edx_5 = (*(*eax_18 + 0x104))(eax_18, 1, ebx[3])
        
        if (eax_16 s>= 0)
            int32_t* eax_20 = *(edi + 8)
            eax_16, edx_5 = (*(*eax_20 + 0x104))(eax_20, 2, ebx[4])
            
            if (eax_16 s>= 0)
                esi_1 = eax_17
                
                if (esi_1 == 0)
                    goto label_60e346
                
                int32_t* eax_22 = *(edi + 8)
                eax_23, edx_9 = (*(*eax_22 + 0x1ac))(eax_22, esi_1)
                
                if (eax_23 s>= 0)
                    goto label_60e346
                
            label_60e332:
                char const* const var_90_8 = "SetShader()"
                sub_60c740(eax_23, edx_9)
                return 0xffffffff
    
    char const* const var_90_3 = "SetTexture()"
    sub_60c740(eax_16, edx_5)
    return 0xffffffff
}
