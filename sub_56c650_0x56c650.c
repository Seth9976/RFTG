// 函数名称: sub_56c650
// 虚拟地址: 0x56c650
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

floatsub_56c650()
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    long double x87_r7 = float.t(0)
    bool cond:0 = (*(data_27e7fdc + 0xc) & 2) == 0
    float var_60 = fconvert.s(x87_r7)
    float var_68 = fconvert.s(x87_r7)
    float var_64 = fconvert.s(x87_r7)
    float var_70 = fconvert.s(x87_r7)
    void* ecx
    
    if (not(cond:0))
        ecx = data_27e7bbc
    
    if (cond:0 || *(ecx + 0x18) == 0)
        if (data_3079218 == 1)
            data_3079218 = 0
            ecx = ShowCursor(1)
    else if (data_3079218 != 0)
        ecx = sub_56c600(&var_68, &var_60)
    else
        BOOL eax_3
        eax_3, ecx = GetCursorPos(&data_307921c)
        
        if (eax_3 != 0)
            data_3079218 = 1
            ecx = ShowCursor(0)
    
    if ((*(data_27e7fdc + 0xc) & 4) == 0 || *(data_27e7bbc + 0x18) == 0)
        if (data_307921a == 1)
            data_307921a = 0
            ecx = ShowCursor(1)
    else if (data_307921a != 0)
        ecx = sub_56c600(&var_64, &var_70)
    else
        BOOL eax_5
        eax_5, ecx = GetCursorPos(&data_307922c)
        
        if (eax_5 != 0)
            data_307921a = 1
            ecx = ShowCursor(0)
    
    void* var_98_3 = ecx
    float var_2c = fconvert.s(fconvert.t(data_3079234) - fconvert.t(data_3079240))
    float var_28 = fconvert.s(fconvert.t(data_3079238) - fconvert.t(data_3079244))
    long double x87_r7_7 = fconvert.t(var_2c)
    long double x87_r6 = fconvert.t(var_28)
    long double x87_r5 = fconvert.t(fconvert.s(fconvert.t(data_307923c) - fconvert.t(data_3079248)))
    int32_t eax_6
    long double st0
    st0, eax_6 = sub_413560(fconvert.s(fconvert.t(fconvert.s(x87_r7_7 * x87_r7_7 + x87_r6 * x87_r6
        + x87_r5 * x87_r5))))
    float var_6c_1 = fconvert.s(st0)
    long double x87_r7_13 = fconvert.t(var_6c_1)
    long double temp1 = fconvert.t(1.0)
    x87_r7_13 - temp1
    eax_6.w = (x87_r7_13 < temp1 ? 1 : 0) << 8 | (is_unordered.t(x87_r7_13, temp1) ? 1 : 0) << 0xa
        | (x87_r7_13 == temp1 ? 1 : 0) << 0xe
    bool p = unimplemented  {test ah, 0x5}
    
    if (not(p))
        var_6c_1 = fconvert.s(float.t(1))
    
    var_2c = fconvert.s(fconvert.t(data_3079240) - fconvert.t(data_3079234))
    long double x87_r7_17 = fconvert.t(data_3079244)
    float var_1c = var_2c
    var_28 = fconvert.s(x87_r7_17 - fconvert.t(data_3079238))
    float var_18 = var_28
    float var_14 = fconvert.s(fconvert.t(data_3079248) - fconvert.t(data_307923c))
    float var_4c
    float* eax_8 = sub_4131a0(&var_1c, &var_4c)
    float edx_2 = eax_8[1]
    float eax_9 = eax_8[2]
    long double x87_r6_4 = float.t(0)
    long double x87_r7_22 = fconvert.t(eax_9) * x87_r6_4
    var_28 = *eax_8
    long double x87_r5_2 = fconvert.t(edx_2)
    float var_3c = fconvert.s(x87_r5_2 - x87_r7_22)
    long double x87_r4_4 = fconvert.t(var_28)
    var_1c = var_3c
    float var_18_1 = fconvert.s(x87_r7_22 - x87_r4_4)
    float var_14_1 = fconvert.s(x87_r4_4 * x87_r6_4 - x87_r6_4 * x87_r5_2)
    float* eax_11
    int16_t x87control
    eax_11, x87control = sub_4131a0(&var_1c, &var_4c)
    float ecx_4 = *eax_11
    long double x87_r7_28 = fconvert.t(eax_11[2])
    long double x87_r5_6 = fconvert.t(edx_2)
    long double x87_r4_7 = fconvert.t(eax_11[1])
    long double x87_r2 = fconvert.t(eax_9)
    var_4c = fconvert.s(x87_r7_28 * x87_r5_6 - x87_r4_7 * x87_r2)
    long double x87_r3_4 = fconvert.t(ecx_4)
    long double x87_r1_1 = fconvert.t(var_28)
    float var_48 = fconvert.s(x87_r2 * x87_r3_4 - x87_r7_28 * x87_r1_1)
    float var_44 = fconvert.s(x87_r1_1 * x87_r4_7 - x87_r5_6 * x87_r3_4)
    long double x87_r4_9 = fconvert.t(var_6c_1)
    var_3c = fconvert.s(x87_r3_4 * x87_r4_9)
    float var_38_2 = fconvert.s(x87_r4_7 * x87_r4_9)
    float var_34_2 = fconvert.s(x87_r7_28 * x87_r4_9)
    long double x87_r5_12 = fconvert.t(var_70)
    var_2c = fconvert.s(fconvert.t(var_3c) * x87_r5_12)
    var_28 = fconvert.s(fconvert.t(var_38_2) * x87_r5_12)
    float var_24_3 = fconvert.s(x87_r5_12 * fconvert.t(var_34_2))
    long double x87_r5_16 = fconvert.t(0.30000001192092896)
    var_1c = fconvert.s(fconvert.t(var_2c) * x87_r5_16)
    float var_18_2 = fconvert.s(fconvert.t(var_28) * x87_r5_16)
    float var_14_2 = fconvert.s(x87_r5_16 * fconvert.t(var_24_3))
    var_3c = fconvert.s(fconvert.t(var_4c) * x87_r4_9)
    float var_38_3 = fconvert.s(fconvert.t(var_48) * x87_r4_9)
    float var_34_3 = fconvert.s(x87_r4_9 * fconvert.t(var_44))
    long double x87_r6_28 = fconvert.t(var_64)
    var_4c = fconvert.s(fconvert.t(var_3c) * x87_r6_28)
    var_48 = fconvert.s(fconvert.t(var_38_3) * x87_r6_28)
    float var_44_1 = fconvert.s(x87_r6_28 * fconvert.t(var_34_3))
    long double x87_r6_32 = fconvert.t(-0.30000001192092896)
    var_3c = fconvert.s(fconvert.t(var_4c) * x87_r6_32)
    float var_38_4 = fconvert.s(fconvert.t(var_48) * x87_r6_32)
    float var_34_4 = fconvert.s(x87_r6_32 * fconvert.t(var_44_1))
    var_64 = fconvert.s(fconvert.t(var_3c) + fconvert.t(var_1c))
    long double x87_r7_42 = fconvert.t(var_64)
    var_4c = fconvert.s(x87_r7_42)
    var_64 = fconvert.s(fconvert.t(var_38_4) + fconvert.t(var_18_2))
    long double x87_r6_38 = fconvert.t(var_64)
    var_48 = fconvert.s(x87_r6_38)
    var_64 = fconvert.s(fconvert.t(var_34_4) + fconvert.t(var_14_2))
    long double x87_r5_23 = fconvert.t(var_64)
    float var_44_2 = fconvert.s(x87_r5_23)
    data_3079240 = fconvert.s(fconvert.t(var_4c) + fconvert.t(data_3079240))
    data_3079244 = fconvert.s(fconvert.t(var_48) + fconvert.t(data_3079244))
    data_3079248 = fconvert.s(fconvert.t(var_44_2) + fconvert.t(data_3079248))
    var_1c = fconvert.s(x87_r7_42)
    float var_18_3 = fconvert.s(x87_r6_38)
    float var_14_3 = fconvert.s(x87_r5_23)
    data_3079234 = fconvert.s(fconvert.t(var_1c) + fconvert.t(data_3079234))
    data_3079238 = fconvert.s(fconvert.t(var_18_3) + fconvert.t(data_3079238))
    data_307923c = fconvert.s(fconvert.t(var_14_3) + fconvert.t(data_307923c))
    var_1c = fconvert.s(fconvert.t(data_3079234) - fconvert.t(data_3079240))
    long double x87_r7_52 = fconvert.t(data_3079238)
    var_28 = var_1c
    float var_24_4 = fconvert.s(x87_r7_52 - fconvert.t(data_3079244))
    float var_20_1 = fconvert.s(fconvert.t(data_307923c) - fconvert.t(data_3079248))
    var_60 = fconvert.s(fconvert.t(var_60) * fconvert.t(0.5))
    int32_t ecx_6
    int32_t mxcsr
    long double st0_1
    st0_1, ecx_6 = sub_686860(mxcsr, x87control, fconvert.t(var_60))
    var_64 = fconvert.s(st0_1)
    int32_t var_98_5 = ecx_6
    float var_30_1 = fconvert.s(fconvert.t(var_64))
    var_60 = fconvert.s(sub_406680(fconvert.s(fconvert.t(var_60))))
    long double x87_r7_63 = fconvert.t(var_60)
    var_60 = fconvert.s(fconvert.t(0.0) * x87_r7_63)
    long double x87_r6_41 = fconvert.t(var_60)
    var_1c = fconvert.s(x87_r6_41)
    float eax_14 = var_1c
    float var_18_5 = fconvert.s(x87_r6_41)
    var_48 = var_18_5
    float var_14_5 = fconvert.s(x87_r7_63)
    var_4c = eax_14
    float var_44_3 = var_14_5
    float var_40 = var_30_1
    sub_405970(&var_1c, &var_28, &var_4c)
    var_28 = var_1c
    float var_20_2 = var_14_5
    long double x87_r6_42 = float.t(0)
    float var_24_5 = var_18_5
    long double x87_r7_65 = fconvert.t(var_20_2) * x87_r6_42
    long double x87_r5_25 = fconvert.t(var_24_5)
    var_1c = fconvert.s(x87_r5_25 - x87_r7_65)
    long double x87_r4_20 = fconvert.t(var_28)
    var_48 = var_1c
    float var_44_4 = fconvert.s(x87_r7_65 - x87_r4_20)
    float var_40_1 = fconvert.s(x87_r4_20 * x87_r6_42 - x87_r6_42 * x87_r5_25)
    float* eax_17
    int16_t x87control_1
    eax_17, x87control_1 = sub_4131a0(&var_48, &var_3c)
    float ecx_12 = *eax_17
    float edx_11 = eax_17[1]
    float eax_18 = eax_17[2]
    var_68 = fconvert.s(fconvert.t(var_68) * fconvert.t(0.5))
    var_1c = ecx_12
    int32_t ecx_13
    long double st0_3
    st0_3, ecx_13 = sub_686860(mxcsr, x87control_1, fconvert.t(var_68))
    var_60 = fconvert.s(st0_3)
    int32_t var_98_7 = ecx_13
    float var_30_2 = fconvert.s(fconvert.t(var_60))
    var_68 = fconvert.s(sub_406680(fconvert.s(fconvert.t(var_68))))
    long double x87_r7_78 = fconvert.t(var_68)
    var_4c = fconvert.s(x87_r7_78 * fconvert.t(var_1c))
    var_4c = var_4c
    var_48 = fconvert.s(fconvert.t(edx_11) * x87_r7_78)
    var_48 = var_48
    float var_40_2 = var_30_2
    float var_44_6 = fconvert.s(x87_r7_78 * fconvert.t(eax_18))
    sub_405970(&var_1c, &var_28, &var_4c)
    float ebx_3 = var_1c
    var_48 = ebx_3
    float* eax_22 = sub_4131a0(&var_48, &var_3c)
    float ecx_17 = *eax_22
    float edx_15 = eax_22[1]
    float eax_23 = eax_22[2]
    var_1c = ecx_17
    float var_98_9 = ecx_17
    long double x87_r6_48 = float.t(0)
    var_68 =
        fconvert.s(fconvert.t(edx_15) * x87_r6_48 + x87_r6_48 * fconvert.t(var_1c) + fconvert.t(eax_23))
    long double st0_5 = sub_4064d0(fconvert.s(fconvert.t(var_68)))
    long double temp2 = fconvert.t(0.99000000953674316)
    st0_5 - temp2
    eax_23.w = (st0_5 < temp2 ? 1 : 0) << 8 | (is_unordered.t(st0_5, temp2) ? 1 : 0) << 0xa
        | (st0_5 == temp2 ? 1 : 0) << 0xe
    bool p_1 = unimplemented  {test ah, 0x5}
    
    if (not(p_1))
        var_28 = ebx_3
        var_24_5 = edx_11
        var_20_2 = eax_18
    
    var_1c = fconvert.s(fconvert.t(var_28) + fconvert.t(data_3079240))
    data_3079234 = var_1c
    float var_18_9 = fconvert.s(fconvert.t(var_24_5) + fconvert.t(data_3079244))
    data_3079238 = var_18_9
    data_307923c = fconvert.s(fconvert.t(var_20_2) + fconvert.t(data_3079248))
    float result = sub_4eb5a0(var_18_9, data_307927c)
    
    if (result != 0)
        float var_98_11 = var_18_9
        data_3079280 = fconvert.s(fconvert.t(data_3079280) + fconvert.t(data_30792ac))
        void var_84
        int32_t* eax_25 = sub_406230(&var_84, &data_8409cc, fconvert.s(fconvert.t(data_3079280)))
        float eax_26 = *eax_25
        var_1c = fconvert.s(fconvert.t(3f))
        long double x87_r7_96 = float.t(0)
        float ecx_20 = eax_25[1]
        int32_t edx_19 = eax_25[2]
        float var_18_10 = fconvert.s(x87_r7_96)
        var_2c = eax_26
        float var_14_10 = fconvert.s(x87_r7_96)
        int32_t eax_27 = eax_25[3]
        var_28 = ecx_20
        int32_t var_24_6 = edx_19
        int32_t var_20_3 = eax_27
        var_48 = var_1c
        float var_44_8 = var_18_10
        float var_40_4 = var_14_10
        sub_405970(&var_3c, &var_48, &var_2c)
        var_1c = var_3c
        int32_t ecx_24 = *eax_25
        int32_t edx_23 = eax_25[1]
        var_4c = fconvert.s(fconvert.t(var_1c) + fconvert.t(data_307928c))
        int32_t eax_31 = eax_25[2]
        int32_t var_58_1 = ecx_24
        float ecx_25 = eax_25[3]
        int32_t var_54_1 = edx_23
        var_48 = fconvert.s(fconvert.t(var_38_4) + fconvert.t(data_3079290))
        int32_t var_50_1 = eax_31
        int32_t edi_7 = result i+ 0x2c
        float var_44_9 = fconvert.s(fconvert.t(var_34_4) + fconvert.t(data_3079294))
        long double x87_r7_103 = fconvert.t(var_4c)
        var_4c = ecx_25
        var_1c = fconvert.s(x87_r7_103 - fconvert.t(3.0))
        long double x87_r7_105 = fconvert.t(var_48)
        var_48 = var_1c
        long double x87_r6_50 = float.t(0)
        result = fconvert.s(x87_r7_105 + x87_r6_50)
        float result_1 = result
        float var_40_5 = fconvert.s(x87_r6_50 + fconvert.t(var_44_9))
        float var_5c = fconvert.s(float.t(1))
        __builtin_memcpy(edi_7, &var_5c, 0x20)
    
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return result
}
