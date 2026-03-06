// 函数名称: sub_50d480
// 虚拟地址: 0x50d480
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

float __convention("regparm")sub_50d480(int32_t arg1, void* arg2, int32_t* arg3, float arg4)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    bool cond:0 = arg3[0x10] == 5
    float var_7c = arg4
    void* var_d0
    
    if (not(cond:0))
        char const* const var_cc = "FabUICursorPos"
        var_d0 = 0x2e4
        sub_4c5870("el.imageAlignment == TA_CENTER_MIDDLE", &data_83f3d3, "FabDef.cpp", var_d0, var_cc)
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    if (arg3[0xf] != 0)
        char const* const var_cc_1 = "FabUICursorPos"
        var_d0 = 0x2e5
        sub_4c5870("el.imageFacing == FACING_PAINTING", &data_83f3d3, "FabDef.cpp", var_d0, var_cc_1)
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    if (arg3[0x11] != 0)
        char const* const var_cc_2 = "FabUICursorPos"
        var_d0 = 0x2e6
        sub_4c5870("el.imageFill == FILL_STRECH", &data_83f3d3, "FabDef.cpp", var_d0, var_cc_2)
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    void var_b8
    var_d0 = &var_b8
    float var_40 = fconvert.s(float.t(1))
    int32_t var_68
    __builtin_memcpy(&var_68, sub_50c2d0(arg4, &var_b8, arg3, var_d0, arg2), 0x28)
    int32_t var_2c = var_68
    int32_t var_64
    int32_t var_28 = var_64
    int32_t var_60
    int32_t var_24 = var_60
    float var_5c
    float var_3c = var_5c
    int32_t var_58
    int32_t var_38 = var_58
    int32_t var_54
    int32_t var_34 = var_54
    float var_50
    float var_30 = var_50
    float var_b0[0x5]
    int32_t edx_3 = sub_405f60(&var_b0, arg2 + 0x3c)
    __builtin_memcpy(&var_60, &var_b0, 0x20)
    float var_90
    sub_405900(&var_90, edx_3, &var_5c)
    float var_78 = fconvert.s(fneg(fconvert.t(var_90)))
    float edi_1 = var_7c
    float var_8c
    float var_74 = fconvert.s(fneg(fconvert.t(var_8c)))
    var_30 = var_78
    float var_88
    float var_70 = fconvert.s(fneg(fconvert.t(var_88)))
    float var_9c
    float var_98
    float var_94
    float var_24_1 = fconvert.s(fneg(fconvert.t(fconvert.s(fconvert.t(var_98) * fconvert.t(var_74)
        + fconvert.t(var_9c) * fconvert.t(var_78) + fconvert.t(var_94) * fconvert.t(var_70)))))
    char eax_13
    int80_t st0
    st0, eax_13 = sub_4d7b10(&var_30, edi_1, &var_7c)
    
    if (eax_13 == 0)
        char const* const var_cc_4 = "FabUICursorPos"
        var_d0 = 0x2ef
        sub_4c5870("Halt", &data_83f3d3, "FabDef.cpp", var_d0, var_cc_4)
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    long double x87_r6_4 = fconvert.t(var_7c)
    float var_1c_1 = fconvert.s(fconvert.t(*(edi_1 i+ 0x10)) * x87_r6_4)
    float var_18_1 = fconvert.s(x87_r6_4 * fconvert.t(*(edi_1 i+ 0x14)))
    var_78 =
        fconvert.s(fconvert.t(*edi_1) + fconvert.t(fconvert.s(fconvert.t(*(edi_1 i+ 0xc)) * x87_r6_4)))
    float var_74_1 = fconvert.s(fconvert.t(*(edi_1 i+ 4)) + fconvert.t(var_1c_1))
    float var_70_2 = fconvert.s(fconvert.t(*(edi_1 i+ 8)) + fconvert.t(var_18_1))
    float var_20_2 = fconvert.s(fconvert.t(var_78) - fconvert.t(var_9c))
    float var_1c_2 = fconvert.s(fconvert.t(var_74_1) - fconvert.t(var_98))
    float var_18_2 = fconvert.s(fconvert.t(var_70_2) - fconvert.t(var_94))
    sub_465a20(&var_78, &var_7c, &var_5c)
    float ecx_7 = var_78
    sub_466130(&var_30, var_74_1, &var_5c)
    long double x87_r6_8 = fconvert.t(var_1c_2)
    var_78 = var_30
    long double x87_r5_2 = fconvert.t(var_20_2)
    long double x87_r3 = fconvert.t(var_18_2)
    float result = fconvert.s(fconvert.t(var_70) * x87_r3 + fconvert.t(var_74) * x87_r6_8
        + x87_r5_2 * fconvert.t(var_78))
    var_7c = fconvert.s(x87_r3 * fconvert.t(var_70_2) + x87_r6_8 * fconvert.t(var_74_1)
        + x87_r5_2 * fconvert.t(ecx_7))
    float var_70_4 = fconvert.s(fneg(fconvert.t(var_7c)))
    sub_405900(&var_30, var_74, &var_5c)
    float ecx_11 = var_30
    float var_cc_5 = ecx_11
    var_7c = fconvert.s(fconvert.t(var_74) * fconvert.t(var_1c_2)
        + fconvert.t(ecx_11) * fconvert.t(var_20_2) + fconvert.t(var_70) * fconvert.t(var_18_2))
    long double st0_1 = sub_4064d0(fconvert.s(fconvert.t(var_7c)))
    long double temp1 = fconvert.t(9.99999975e-06f)
    st0_1 - temp1
    float eax_20
    eax_20.w = (st0_1 < temp1 ? 1 : 0) << 8 | (is_unordered.t(st0_1, temp1) ? 1 : 0) << 0xa
        | (st0_1 == temp1 ? 1 : 0) << 0xe
    bool p = unimplemented  {test ah, 0x5}
    
    if (not(p))
        sub_5a6aba(eax_1 ^ &__saved_ebp)
        return result
    
    char const* const var_cc_7 = "FabUICursorPos"
    var_d0 = 0x2fc
    sub_4c5870("Abs(z) < EPSILON", &data_83f3d3, "FabDef.cpp", var_d0, var_cc_7)
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}
