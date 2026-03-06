// 函数名称: sub_466770
// 虚拟地址: 0x466770
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

voidsub_466770(int32_t* arg1, int32_t arg2, int32_t arg3, int32_t arg4, float arg5, float arg6, float arg7)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int32_t eax_2 = arg3
    
    if (arg2 s< 0)
        sub_4c5870("cardIndex >= 0", &data_83f3d3, "..\code\RftGLayout.cpp", 0x256, "FitCardsOverlap")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    if (arg2 + 1 s> eax_2)
        eax_2 = arg2 + 1
    
    if (arg4 s<= eax_2)
        arg4 = eax_2
    
    long double x87_r7 = fconvert.t(arg5)
    long double x87_r6 = fconvert.t(fconvert.s(float.t(arg4 - 1)))
    float var_58 = fconvert.s(fconvert.t(fconvert.s(x87_r7)) * x87_r6)
    float var_54 = fconvert.s(x87_r6 * fconvert.t(fconvert.s(x87_r7 * fconvert.t(0.0))))
    float var_3c_2 = fconvert.s(float.t(arg4))
    float var_28 = fconvert.s(fconvert.t(var_3c_2))
    float var_44_1 = fconvert.s(fconvert.t(arg7))
    float var_38 =
        fconvert.s(fconvert.t(fconvert.s(fconvert.t(var_28) * fconvert.t(arg6))) + fconvert.t(var_58))
    long double x87_r7_20 = fconvert.t(var_38)
    float* entry_ebx
    long double x87_r6_2 = fconvert.t(fconvert.s(fconvert.t(entry_ebx[2]) - fconvert.t(*entry_ebx)))
    x87_r6_2 - x87_r7_20
    int32_t eax_5
    eax_5.w = (x87_r6_2 < x87_r7_20 ? 1 : 0) << 8 | (is_unordered.t(x87_r6_2, x87_r7_20) ? 1 : 0) << 0xa
        | (x87_r6_2 == x87_r7_20 ? 1 : 0) << 0xe | 0x3000
    
    if ((eax_5:1.b & 0x41) == 0)
        x87_r7_20 = x87_r6_2
    
    long double x87_r7_21 = fconvert.t(fconvert.s(fconvert.t(var_44_1) + fconvert.t(var_54)))
    long double x87_r6_3 = fconvert.t(fconvert.s(fconvert.t(entry_ebx[3]) - fconvert.t(entry_ebx[1])))
    x87_r6_3 - x87_r7_21
    eax_5.w = (x87_r6_3 < x87_r7_21 ? 1 : 0) << 8 | (is_unordered.t(x87_r6_3, x87_r7_21) ? 1 : 0) << 0xa
        | (x87_r6_3 == x87_r7_21 ? 1 : 0) << 0xe | 0x3000
    
    if ((eax_5:1.b & 0x41) == 0)
        x87_r7_21 = x87_r6_3
    
    float var_44_2 = fconvert.s(x87_r7_21)
    var_28 = fconvert.s(x87_r7_20)
    float var_24 = var_44_2
    float eax_6
    int32_t edx_1
    eax_6, edx_1 = sub_4cc680(2)
    var_38 = eax_6
    int32_t var_34_1 = edx_1
    void var_60
    float* eax_8 = sub_505540(&var_60, entry_ebx, &var_28, &var_38, &var_38, &var_60)
    int32_t edx_3 = eax_8[1]
    float var_20 = *eax_8
    int32_t var_1c = edx_3
    int32_t var_18 = eax_8[2]
    int32_t var_14 = eax_8[3]
    void var_50
    int32_t* eax_9 = sub_413110(&var_20, &var_50)
    float edx_5 = eax_9[1]
    var_20 = *eax_9
    long double x87_r7_23 = fconvert.t(eax_9[2]) - fconvert.t(arg6)
    long double x87_r6_4 = fconvert.t(var_20)
    float edx_6 = eax_9[3]
    x87_r6_4 - x87_r7_23
    eax_9.w = (x87_r6_4 < x87_r7_23 ? 1 : 0) << 8 | (is_unordered.t(x87_r6_4, x87_r7_23) ? 1 : 0) << 0xa
        | (x87_r6_4 == x87_r7_23 ? 1 : 0) << 0xe | 0x3000
    bool p = unimplemented  {test ah, 0x5}
    
    if (not(p))
        x87_r7_23 = x87_r6_4
    
    float var_18_2 = fconvert.s(x87_r7_23)
    long double x87_r7_25 = fconvert.t(edx_6) - fconvert.t(arg7)
    long double x87_r6_5 = fconvert.t(edx_5)
    x87_r6_5 - x87_r7_25
    eax_9.w = (x87_r6_5 < x87_r7_25 ? 1 : 0) << 8 | (is_unordered.t(x87_r6_5, x87_r7_25) ? 1 : 0) << 0xa
        | (x87_r6_5 == x87_r7_25 ? 1 : 0) << 0xe | 0x3000
    bool p_1 = unimplemented  {test ah, 0x5}
    
    if (not(p_1))
        x87_r7_25 = x87_r6_5
    
    float var_14_2 = fconvert.s(x87_r7_25)
    float eax_10
    float edx_7
    eax_10, edx_7 = sub_40af40(&var_20)
    var_28 = eax_10
    float var_48_3 = 0f
    float var_44_3 = 0f
    
    if (arg4 s> 1)
        float var_58_2 = fconvert.s(fconvert.t(var_3c_2) - fconvert.t(1.0))
        var_38 = fconvert.s(fconvert.t(var_18_2) - fconvert.t(var_20))
        var_48_3 = fconvert.s(fconvert.t(var_38) / fconvert.t(var_58_2))
        var_44_3 = fconvert.s(fconvert.t(fconvert.s(fconvert.t(var_14_2) - fconvert.t(edx_5))))
    
    var_38 = fconvert.s(float.t(arg2))
    var_38 = fconvert.s(fconvert.t(var_48_3) * fconvert.t(var_38))
    float var_54_3 =
        fconvert.s(fconvert.t(edx_7) + fconvert.t(fconvert.s(fconvert.t(var_44_3) * fconvert.t(0.0))))
    long double x87_r7_44 = fconvert.t(fconvert.s(fconvert.t(var_28) + fconvert.t(var_38)))
    var_28 = fconvert.s(x87_r7_44 + fconvert.t(arg6))
    long double x87_r6_8 = fconvert.t(var_54_3)
    float var_24_2 = fconvert.s(x87_r6_8 + fconvert.t(arg7))
    var_20 = fconvert.s(x87_r7_44)
    float var_30 = var_20
    float var_2c = fconvert.s(x87_r6_8)
    var_28 = fconvert.s(fconvert.t(var_28))
    float var_24_3 = fconvert.s(fconvert.t(var_24_2))
    int32_t* eax_13 = sub_413110(&var_30, &var_20)
    *arg1 = *eax_13
    arg1[1] = eax_13[1]
    int32_t eax_14 = eax_13[3]
    arg1[2] = eax_13[2]
    arg1[3] = eax_14
    sub_5a6aba(eax_1 ^ &__saved_ebp)
}
