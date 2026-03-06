// 函数名称: sub_4f84f0
// 虚拟地址: 0x4f84f0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_4f84f0(int32_t arg1, float arg2 @ edx, void* arg3, long double arg4 @ st0, int32_t arg5, void* arg6)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    float esi = arg2
    
    if (*(arg3 + 4) != 6)
        sub_4c5870("el.type == UI_GROUP", &data_83f3d3, "UIDef.cpp", 0x807, "UIElementGroupTransform")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    long double x87_r7_1 = fconvert.t(fconvert.s(fconvert.t(*(arg6 + 0x10))))
    long double x87_r5 = float.t(1)
    x87_r5 - x87_r7_1
    void* eax_2
    eax_2.w = (x87_r5 < x87_r7_1 ? 1 : 0) << 8 | (is_unordered.t(x87_r5, x87_r7_1) ? 1 : 0) << 0xa
        | (x87_r5 == x87_r7_1 ? 1 : 0) << 0xe | 0x2800
    bool p = unimplemented  {test ah, 0x44}
    
    if (p)
        long double x87_r6_2 = float.t(0)
        sub_406960(eax_2, arg2, *(arg3 + 0x64), 
            fconvert.s(fconvert.t(fconvert.s(fconvert.t(fconvert.s(x87_r5 - x87_r6_2))
                / fconvert.t(fconvert.s(float.t(1) - x87_r6_2))))), 
            fconvert.s(float.t(0)), fconvert.s(x87_r7_1))
        float var_50_4 = fconvert.s(arg4)
        long double x87_r7_10 = float.t(0)
        long double x87_r0_2 = x87_r7_10 - fconvert.t(*(arg3 + 0x5c))
        float var_4c
        __builtin_memcpy(&var_4c, esi, 0x40)
        long double x87_r6_7 = fconvert.t(var_50_4)
        long double x87_r7_15 = fconvert.t(fconvert.s(fconvert.t(*(esi i+ 0xc))))
        long double x87_r5_4 = fconvert.t(fconvert.s(x87_r0_2 * x87_r6_7 + fconvert.t(*(arg3 + 0x5c))))
        long double x87_r5_6 = fconvert.t(fconvert.s((x87_r7_10 - fconvert.t(*(arg3 + 0x60))) * x87_r6_7
            + fconvert.t(*(arg3 + 0x60))))
        float var_54_2 = fconvert.s(x87_r7_15 * x87_r5_6)
        var_4c = fconvert.s(fconvert.t(var_4c) + fconvert.t(fconvert.s(x87_r7_15 * x87_r5_4)))
        float var_48
        float var_48_1 = fconvert.s(fconvert.t(var_48) + fconvert.t(var_54_2))
        long double x87_r5_13 = fconvert.t(fconvert.s(fconvert.t(*(esi i+ 0xc))))
        float var_34
        float var_34_1 = fconvert.s(fconvert.t(var_34) + fconvert.t(fconvert.s(x87_r5_4 * x87_r5_13)))
        float var_30
        float var_30_1 = fconvert.s(fconvert.t(var_30) + fconvert.t(fconvert.s(x87_r5_6 * x87_r5_13)))
        long double x87_r7_26 = fconvert.t(fconvert.s(fconvert.t(*(arg3 + 0x54))))
        float var_44
        float var_44_1 = fconvert.s(sub_465dd0(
            fconvert.s(fconvert.t(fconvert.s(x87_r6_7 * (float.t(1) - x87_r7_26) + x87_r7_26))), 
            fconvert.s(float.t(0)), fconvert.s(float.t(1))) * fconvert.t(var_44))
        long double x87_r0_12 = fconvert.t(fconvert.s(fconvert.t(*(arg3 + 0x58))))
        float var_54_7 = fconvert.s(x87_r0_12 + (float.t(1) - x87_r0_12) * fconvert.t(var_50_4))
        void var_6c
        int32_t* eax_6 = sub_4f4990(esi, &var_6c, arg3 + 0x1c, &var_6c, esi)
        long double x87_r7_30 = fconvert.t(0.5)
        float var_64_3 = fconvert.s((fconvert.t(eax_6[2]) + fconvert.t(*eax_6)) * x87_r7_30)
        float var_e0_3 = var_64_3
        esi = sub_4f83d0(&var_4c, fconvert.s(fconvert.t(var_54_7)), var_64_3, 
            fconvert.s(x87_r7_30 * (fconvert.t(eax_6[1]) + fconvert.t(eax_6[3]))))
    
    __builtin_memcpy(arg5, esi, 0x40)
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return arg5
}
