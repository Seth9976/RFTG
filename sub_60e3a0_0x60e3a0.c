// 函数名称: sub_60e3a0
// 虚拟地址: 0x60e3a0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_60e3a0(float arg1, float arg2, int32_t* arg3, float* arg4, double arg5, float* arg6, char arg7)
{
    // 第一条实际指令: float esi = arg2
    float esi = arg2
    int32_t* ebx = *(esi i+ 0x44)
    void* edi = *(arg1 i+ 0x134)
    float var_98 = arg1
    int32_t ecx
    
    if (sub_60d940(ecx) s< 0)
        return 0xffffffff
    
    arg2 = fconvert.s(fconvert.t(*arg6))
    float* eax_3
    eax_3.b = arg7
    arg1 = fconvert.s(fconvert.t(arg6[1]))
    float var_20
    long double x87_r6_2
    long double x87_r7_5
    
    if ((eax_3.b & 1) == 0)
        long double x87_r7_6 = fconvert.t(arg2)
        long double x87_r5_3 = fconvert.t(0.5)
        var_20 = fconvert.s(fneg(x87_r7_6) - x87_r5_3)
        x87_r6_2 = fconvert.t(arg4[2]) - x87_r7_6 - x87_r5_3
        x87_r7_5 = x87_r5_3
    else
        long double x87_r6 = fconvert.t(arg2)
        long double x87_r5_1 = fconvert.t(0.5)
        x87_r7_5 = x87_r5_1
        var_20 = fconvert.s(fconvert.t(arg4[2]) - x87_r6 - x87_r5_1)
        x87_r6_2 = fneg(x87_r6) - x87_r7_5
    
    float var_1c = fconvert.s(x87_r6_2)
    float var_24
    long double x87_r6_10
    
    if ((eax_3.b & 2) == 0)
        long double x87_r6_11 = fconvert.t(arg1)
        var_24 = fconvert.s(fneg(x87_r6_11) - x87_r7_5)
        x87_r6_10 = fconvert.t(arg4[3]) - x87_r6_11
    else
        long double x87_r5_6 = fconvert.t(arg1)
        var_24 = fconvert.s(fconvert.t(arg4[3]) - x87_r5_6 - x87_r7_5)
        x87_r6_10 = fneg(x87_r5_6)
    
    int32_t ecx_2 = *arg3
    float var_18 = fconvert.s(x87_r6_10 - x87_r7_5)
    int32_t ecx_3 = arg3[1]
    long double x87_r6_12 = fconvert.t(fconvert.s(float.t(*(esi i+ 0xc))))
    uint32_t edx_2 = zx.d(*(esi i+ 0x1d))
    float var_28 = fconvert.s(float.t(ecx_2) / x87_r6_12)
    float var_c = fconvert.s(float.t(arg3[2] + ecx_2) / x87_r6_12)
    long double x87_r6_14 = fconvert.t(fconvert.s(float.t(*(esi i+ 0x10))))
    uint32_t eax_13 =
        ((zx.d(*(esi i+ 0x1f)) << 8 | zx.d(*(esi i+ 0x1c))) << 8 | edx_2) << 8 | zx.d(*(esi i+ 0x1e))
    uint32_t var_7c = eax_13
    uint32_t var_64 = eax_13
    uint32_t var_4c = eax_13
    float var_10_2 = fconvert.s(float.t(ecx_3) / x87_r6_14)
    float var_8_4 = fconvert.s(float.t(arg3[3] + ecx_3) / x87_r6_14)
    long double x87_r7_20 = fconvert.t(var_20)
    float var_88 = fconvert.s(x87_r7_20)
    long double x87_r6_16 = fconvert.t(var_24)
    float var_84 = fconvert.s(x87_r6_16)
    long double x87_r5_14 = float.t(0)
    float var_80 = fconvert.s(x87_r5_14)
    long double x87_r4_2 = fconvert.t(var_28)
    float var_78 = fconvert.s(x87_r4_2)
    long double x87_r3 = fconvert.t(var_10_2)
    float var_74 = fconvert.s(x87_r3)
    long double x87_r2 = fconvert.t(var_1c)
    float var_70 = fconvert.s(x87_r2)
    float var_6c = fconvert.s(x87_r6_16)
    float var_68 = fconvert.s(x87_r5_14)
    long double x87_r2_2 = fconvert.t(var_c)
    float var_60 = fconvert.s(x87_r2_2)
    float var_5c = fconvert.s(x87_r3)
    float var_58 = fconvert.s(x87_r2)
    long double x87_r3_3 = fconvert.t(var_18)
    float var_54 = fconvert.s(x87_r3_3)
    float var_50 = fconvert.s(x87_r5_14)
    float var_48 = fconvert.s(x87_r2_2)
    long double x87_r3_6 = fconvert.t(var_8_4)
    float var_44 = fconvert.s(x87_r3_6)
    float var_40 = fconvert.s(x87_r7_20)
    float var_3c = fconvert.s(x87_r3_3)
    float var_38 = fconvert.s(x87_r5_14)
    float var_30 = fconvert.s(x87_r4_2)
    uint32_t var_34 = eax_13
    float var_2c = fconvert.s(x87_r3_6)
    sub_60d480(*(esi i+ 0x18), edx_2, edi)
    int32_t* eax_15 = *(edi + 0x80)
    (*(*eax_15 + 0x10))(eax_15)
    int32_t* eax_17 = *(edi + 0x80)
    (*(*eax_17 + 0x14))(eax_17)
    int32_t* eax_18 = *(edi + 0x80)
    long double x87_r7_27 = float.t(0)
    (*(*eax_18 + 0x2c))(eax_18, fconvert.s(x87_r7_27), fconvert.s(x87_r7_27), 
        fconvert.s(fconvert.t(fconvert.s(fconvert.t(fconvert.s(fconvert.t(arg5)))
            * fconvert.t(3.1415926535897931) / fconvert.t(180.0)))))
    int32_t* eax_19 = *(edi + 0x80)
    (*(*eax_19 + 0x3c))(eax_19, 
        fconvert.s(fconvert.t(fconvert.s(fconvert.t(*arg4) + fconvert.t(arg2)))), 
        fconvert.s(fconvert.t(fconvert.s(fconvert.t(arg4[1]) + fconvert.t(arg1)))), 
        fconvert.s(float.t(0)))
    int32_t* eax_21 = *(edi + 0x80)
    void* esi_1 = **(edi + 8)
    int32_t eax_23 = (*(*eax_21 + 0x44))(eax_21)
    (*(esi_1 + 0xb0))(*(edi + 8), 2, eax_23)
    int32_t esi_2 = 0
    sub_60d5b0(0, edi, ebx)
    int32_t* eax_24 = *(edi + 8)
    int32_t eax_26
    int32_t edx_10
    eax_26, edx_10 = (*(*eax_24 + 0x104))(eax_24, 0, *ebx)
    
    if (eax_26 s>= 0)
        int32_t eax_31
        int32_t edx_15
        
        if (ebx[2] == 0)
        label_60e6ae:
            int32_t* eax_32 = *(edi + 8)
            int32_t eax_34
            int32_t edx_16
            eax_34, edx_16 = (*(*eax_32 + 0x14c))(eax_32, 6, 2, &var_88, 0x18)
            
            if (eax_34 s< 0)
                char const* const var_98_15 = "DrawPrimitiveUP()"
                sub_60c740(eax_34, edx_16)
                return 0xffffffff
            
            if (esi_2 != 0)
                int32_t* eax_35 = *(edi + 8)
                eax_31, edx_15 = (*(*eax_35 + 0x1ac))(eax_35, 0)
            
            if (esi_2 != 0 && eax_31 s< 0)
                goto label_60e69a
            
            int32_t* eax_36 = *(edi + 0x80)
            (*(*eax_36 + 0xc))(eax_36)
            int32_t* eax_37 = *(edi + 0x80)
            (*(*eax_37 + 0x10))(eax_37)
            int32_t* eax_38 = *(edi + 0x80)
            (*(*eax_38 + 0x14))(eax_38)
            void* esi_3 = **(edi + 8)
            int32_t* eax_40 = *(edi + 0x80)
            int32_t eax_41 = (*(*eax_40 + 0x44))(eax_40)
            (*(esi_3 + 0xb0))(*(edi + 8), 2, eax_41)
            int32_t* edi_1 = *(edi + 0x80)
            (*(*edi_1 + 0xc))(edi_1)
            return 0
        
        int32_t ecx_13 = *(edi + 0x84)
        sub_60d5b0(1, edi, ebx)
        sub_60d5b0(2, edi, ebx)
        int32_t* eax_27 = *(edi + 8)
        eax_26, edx_10 = (*(*eax_27 + 0x104))(eax_27, 1, ebx[3])
        
        if (eax_26 s>= 0)
            int32_t* eax_28 = *(edi + 8)
            eax_26, edx_10 = (*(*eax_28 + 0x104))(eax_28, 2, ebx[4])
            
            if (eax_26 s>= 0)
                esi_2 = ecx_13
                
                if (esi_2 == 0)
                    goto label_60e6ae
                
                int32_t* eax_30 = *(edi + 8)
                eax_31, edx_15 = (*(*eax_30 + 0x1ac))(eax_30, esi_2)
                
                if (eax_31 s>= 0)
                    goto label_60e6ae
                
            label_60e69a:
                char const* const var_98_14 = "SetShader()"
                sub_60c740(eax_31, edx_15)
                return 0xffffffff
    
    char const* const var_98_9 = "SetTexture()"
    sub_60c740(eax_26, edx_10)
    return 0xffffffff
}
