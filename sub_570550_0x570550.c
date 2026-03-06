// 函数名称: sub_570550
// 虚拟地址: 0x570550
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void __convention("regparm")sub_570550(int32_t arg1, int32_t arg2, int32_t* arg3, float* arg4, float* arg5)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    long double x87_r7_2 =
        fconvert.t(*arg5) * fconvert.t(arg5[1]) - fconvert.t(arg5[3]) * fconvert.t(arg5[2])
    long double x87_r6_2 = fconvert.t(2.0)
    float var_18 = 0f
    float var_10 = 0f
    float var_4c = fconvert.s(x87_r7_2 * x87_r6_2)
    long double x87_r6_4 = fconvert.t(arg5[1])
    long double x87_r5 = fconvert.t(arg5[2])
    long double x87_r4 = fconvert.t(arg5[3])
    long double x87_r3 = fconvert.t(*arg5)
    long double x87_r3_1 = x87_r3 * x87_r3
    float var_48 = fconvert.s(x87_r6_4 * x87_r6_4 - x87_r5 * x87_r5 + x87_r4 * x87_r4 - x87_r3_1)
    float var_44 = fconvert.s((fconvert.t(*arg5) * fconvert.t(arg5[3])
        + fconvert.t(arg5[2]) * fconvert.t(arg5[1])) * x87_r6_2)
    long double x87_r5_9 = fconvert.t(arg5[3])
    long double x87_r4_4 = fconvert.t(arg5[2])
    long double x87_r3_3 = fconvert.t(arg5[1])
    float var_2c =
        fconvert.s(x87_r3_1 + x87_r5_9 * x87_r5_9 - x87_r4_4 * x87_r4_4 - x87_r3_3 * x87_r3_3)
    float var_28 = fconvert.s((fconvert.t(*arg5) * fconvert.t(arg5[1])
        + fconvert.t(arg5[3]) * fconvert.t(arg5[2])) * x87_r6_2)
    float var_14 = 0f
    float var_24 = fconvert.s(x87_r6_2
        * (fconvert.t(*arg5) * fconvert.t(arg5[2]) - fconvert.t(arg5[3]) * fconvert.t(arg5[1])))
    
    if ((0x8000 & GetKeyState(0x57)) != 0 && *(data_27e7bbc + 0x18) != 0 && GetFocus() == data_30785e0
            && (*(data_27e7fdc + 0xc) & 2) != 0 && *(data_27e7bbc + 0x18) != 0)
        var_18 = fconvert.s(fconvert.t(var_18) + fconvert.t(var_4c))
        var_14 = fconvert.s(fconvert.t(var_14) + fconvert.t(var_48))
        var_10 = fconvert.s(fconvert.t(var_10) + fconvert.t(var_44))
    
    if ((0x8000 & GetKeyState(0x53)) != 0 && *(data_27e7bbc + 0x18) != 0 && GetFocus() == data_30785e0
            && (*(data_27e7fdc + 0xc) & 2) != 0 && *(data_27e7bbc + 0x18) != 0)
        var_18 = fconvert.s(fconvert.t(var_18) - fconvert.t(var_4c))
        var_14 = fconvert.s(fconvert.t(var_14) - fconvert.t(var_48))
        var_10 = fconvert.s(fconvert.t(var_10) - fconvert.t(var_44))
    
    if ((0x8000 & GetKeyState(0x41)) != 0 && *(data_27e7bbc + 0x18) != 0 && GetFocus() == data_30785e0
            && (*(data_27e7fdc + 0xc) & 2) != 0 && *(data_27e7bbc + 0x18) != 0)
        var_18 = fconvert.s(fconvert.t(var_18) - fconvert.t(var_2c))
        var_14 = fconvert.s(fconvert.t(var_14) - fconvert.t(var_28))
        var_10 = fconvert.s(fconvert.t(var_10) - fconvert.t(var_24))
    
    if ((0x8000 & GetKeyState(0x44).w) != 0 && *(data_27e7bbc + 0x18) != 0 && GetFocus() == data_30785e0
            && (data_27e7fdc->__offset(0xc).b & 2) != 0 && *(data_27e7bbc + 0x18) != 0)
        var_18 = fconvert.s(fconvert.t(var_18) + fconvert.t(var_2c))
        var_14 = fconvert.s(fconvert.t(var_14) + fconvert.t(var_28))
        var_10 = fconvert.s(fconvert.t(var_10) + fconvert.t(var_24))
    
    long double x87_r7_30 = fconvert.t(var_18)
    long double x87_r6_17 = fconvert.t(var_14)
    long double x87_r5_17 = fconvert.t(var_10)
    long double x87_r7_34 =
        fconvert.t(fconvert.s(x87_r7_30 * x87_r7_30 + x87_r6_17 * x87_r6_17 + x87_r5_17 * x87_r5_17))
    long double temp1 = fconvert.t(9.99999975e-06f)
    x87_r7_34 - temp1
    HWND eax_13
    eax_13.w = (x87_r7_34 < temp1 ? 1 : 0) << 8 | (is_unordered.t(x87_r7_34, temp1) ? 1 : 0) << 0xa
        | (x87_r7_34 == temp1 ? 1 : 0) << 0xe
    
    if ((eax_13:1.b & 0x41) == 0)
        float var_30_1 = fconvert.s(fconvert.t(0.100000001f))
        int16_t eax_14 = GetKeyState(0xa0)
        HWND eax_16
        
        if ((0x8000 & eax_14) != 0 && *(data_27e7bbc + 0x18) != 0)
            eax_16 = GetFocus()
        
        if ((0x8000 & eax_14) != 0 && *(data_27e7bbc + 0x18) != 0 && eax_16 == data_30785e0)
        label_57080b:
            
            if ((0x8000 & GetKeyState(0x11)) != 0 && *(data_27e7bbc + 0x18) != 0
                    && GetFocus() == data_30785e0)
                var_30_1 = fconvert.s(fconvert.t(0.00400000019f))
        else if ((0x8000 & GetKeyState(0xa1)) != 0 && *(data_27e7bbc + 0x18) != 0
                && GetFocus() == data_30785e0)
            goto label_57080b
        
        int16_t eax_21 = GetKeyState(0xa0)
        HWND eax_22
        
        if ((0x8000 & eax_21) != 0 && *(data_27e7bbc + 0x18) != 0)
            eax_22 = GetFocus()
        
        if ((0x8000 & eax_21) != 0 && *(data_27e7bbc + 0x18) != 0 && eax_22 == data_30785e0)
            var_30_1 = fconvert.s(fconvert.t(var_30_1) * fconvert.t(10.0))
        else if ((0x8000 & GetKeyState(0xa1)) != 0 && *(data_27e7bbc + 0x18) != 0
                && GetFocus() == data_30785e0)
            var_30_1 = fconvert.s(fconvert.t(var_30_1) * fconvert.t(10.0))
        
        if ((0x8000 & GetKeyState(0x11)) != 0 && *(data_27e7bbc + 0x18) != 0
                && GetFocus() == data_30785e0)
            var_30_1 = fconvert.s(fconvert.t(var_30_1) * fconvert.t(0.10000000149011612))
        
        int32_t* eax_27 = sub_4132a0(&var_18, &var_4c)
        float edx_9 = eax_27[1]
        float eax_28 = eax_27[2]
        long double x87_r6_21 = fconvert.t(var_30_1)
        var_4c = fconvert.s(fconvert.t(*eax_27) * x87_r6_21)
        float var_48_1 = fconvert.s(fconvert.t(edx_9) * x87_r6_21)
        float var_44_1 = fconvert.s(x87_r6_21 * fconvert.t(eax_28))
        *arg4 = fconvert.s(fconvert.t(var_4c) + fconvert.t(*arg4))
        arg4[1] = fconvert.s(fconvert.t(arg4[1]) + fconvert.t(var_48_1))
        arg4[2] = fconvert.s(fconvert.t(var_44_1) + fconvert.t(arg4[2]))
    
    float var_30_2 = fconvert.s(fconvert.t(0.00999999978f))
    int16_t eax_30 = GetKeyState(0xa0)
    HWND eax_31
    
    if ((0x8000 & eax_30) != 0 && *(data_27e7bbc + 0x18) != 0)
        eax_31 = GetFocus()
    
    if ((0x8000 & eax_30) != 0 && *(data_27e7bbc + 0x18) != 0 && eax_31 == data_30785e0)
    label_570974:
        
        if ((0x8000 & GetKeyState(0x11)) != 0 && *(data_27e7bbc + 0x18) != 0
                && GetFocus() == data_30785e0)
            var_30_2 = fconvert.s(fconvert.t(0.00039999999f))
    else if ((0x8000 & GetKeyState(0xa1)) != 0 && *(data_27e7bbc + 0x18) != 0
            && GetFocus() == data_30785e0)
        goto label_570974
    
    int16_t eax_36 = GetKeyState(0xa0)
    HWND eax_37
    
    if ((0x8000 & eax_36) != 0 && *(data_27e7bbc + 0x18) != 0)
        eax_37 = GetFocus()
    
    if ((0x8000 & eax_36) != 0 && *(data_27e7bbc + 0x18) != 0 && eax_37 == data_30785e0)
        var_30_2 = fconvert.s(fconvert.t(var_30_2) * fconvert.t(10.0))
    else if ((0x8000 & GetKeyState(0xa1)) != 0 && *(data_27e7bbc + 0x18) != 0
            && GetFocus() == data_30785e0)
        var_30_2 = fconvert.s(fconvert.t(var_30_2) * fconvert.t(10.0))
    
    if ((0x8000 & GetKeyState(0x11)) != 0 && *(data_27e7bbc + 0x18) != 0 && GetFocus() == data_30785e0)
        var_30_2 = fconvert.s(fconvert.t(var_30_2) * fconvert.t(0.10000000149011612))
    
    float var_34_1 = fconvert.s(float.t(0))
    
    if ((0x8000 & GetKeyState(0x28)) != 0 && *(data_27e7bbc + 0x18) != 0 && GetFocus() == data_30785e0)
        var_34_1 = fconvert.s(float.t(0) - fconvert.t(1.0))
    
    int32_t ecx_5 = 0x8000
    HWND eax_44
    
    if ((0x8000 & GetKeyState(0x26).w) != 0 && *(data_27e7bbc + 0x18) != 0)
        eax_44, ecx_5 = GetFocus()
        
        if (eax_44 == data_30785e0)
            var_34_1 = fconvert.s(fconvert.t(var_34_1) + fconvert.t(1.0))
    
    long double x87_r7_64 = fconvert.t(var_34_1)
    long double x87_r5_20 = float.t(0)
    x87_r5_20 - x87_r7_64
    eax_44.w = (x87_r5_20 < x87_r7_64 ? 1 : 0) << 8
        | (is_unordered.t(x87_r5_20, x87_r7_64) ? 1 : 0) << 0xa
        | (x87_r5_20 == x87_r7_64 ? 1 : 0) << 0xe | 0x3800
    bool p = unimplemented  {test ah, 0x44}
    float var_1c
    
    if (p)
        int32_t var_60_1 = ecx_5
        int32_t* eax_45 = sub_406230(&var_4c, &data_8409b4, 
            fconvert.s(fconvert.t(fconvert.s(x87_r7_64 * fconvert.t(var_30_2)))))
        int32_t edx_18 = eax_45[1]
        var_2c = *eax_45
        int32_t var_28_2 = edx_18
        int32_t var_24_2 = eax_45[2]
        int32_t var_20_2 = eax_45[3]
        sub_405ee0(&var_1c, &var_2c, arg3)
        float edx_21 = var_18
        *arg3 = var_1c
        arg3[1] = edx_21
        arg3[2] = var_14
        arg3[3] = var_10
    
    float var_34_2 = fconvert.s(float.t(0))
    
    if ((0x8000 & GetKeyState(0x25)) != 0 && *(data_27e7bbc + 0x18) != 0 && GetFocus() == data_30785e0)
        var_34_2 = fconvert.s(float.t(0) + fconvert.t(1.0))
    
    int32_t ecx_10 = 0x8000
    HWND eax_50
    
    if ((0x8000 & GetKeyState(0x27).w) != 0 && *(data_27e7bbc + 0x18) != 0)
        eax_50, ecx_10 = GetFocus()
        
        if (eax_50 == data_30785e0)
            var_34_2 = fconvert.s(fconvert.t(var_34_2) - fconvert.t(1.0))
    
    long double x87_r7_72 = fconvert.t(var_34_2)
    long double x87_r5_21 = float.t(0)
    x87_r5_21 - x87_r7_72
    eax_50.w = (x87_r5_21 < x87_r7_72 ? 1 : 0) << 8
        | (is_unordered.t(x87_r5_21, x87_r7_72) ? 1 : 0) << 0xa
        | (x87_r5_21 == x87_r7_72 ? 1 : 0) << 0xe | 0x3800
    bool p_1 = unimplemented  {test ah, 0x44}
    
    if (not(p_1))
        sub_5a6aba(eax_1 ^ &__saved_ebp)
        return 
    
    int32_t var_60_3 = ecx_10
    int32_t* eax_51 = sub_406230(&var_4c, &data_8409cc, 
        fconvert.s(fconvert.t(fconvert.s(x87_r7_72 * fconvert.t(var_30_2)))))
    int32_t edx_24 = eax_51[1]
    var_2c = *eax_51
    int32_t var_28_3 = edx_24
    int32_t var_24_3 = eax_51[2]
    int32_t var_20_3 = eax_51[3]
    sub_405ee0(&var_1c, arg3, &var_2c)
    float edx_27 = var_18
    *arg3 = var_1c
    arg3[1] = edx_27
    arg3[2] = var_14
    arg3[3] = var_10
    sub_5a6aba(eax_1 ^ &__saved_ebp)
}
