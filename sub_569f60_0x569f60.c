// 函数名称: sub_569f60
// 虚拟地址: 0x569f60
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

floatsub_569f60(float* arg1 @ esi, int32_t* arg2, int32_t arg3)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    float var_20 = *arg2
    float edx_1 = arg2[1]
    float eax_3 = arg2[2]
    float var_14
    float var_10
    float var_c
    
    if (arg3 == 1)
        var_14 = 1f
        var_c = 0f
        var_10 = 0f
    else if (arg3 == 2)
        var_14 = 0f
        var_10 = 1f
        var_c = 0f
    else
        if (arg3 != 3)
            sub_4c5870("Halt", &data_83f3d3, "Editor\EditMode.cpp", 0x1dc, 
                "sEditModeFindManipulatorPosition")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        var_14 = 0f
        var_c = 1f
        var_10 = 0f
    
    float var_48
    float* ecx
    char eax_10 = sub_4d82a0(&var_48, &var_20, ecx, &var_48)
    
    if (eax_10 == 0)
        sub_5a6aba(eax_1 ^ &__saved_ebp)
        return eax_10
    
    long double x87_r6 = fconvert.t(var_48)
    float var_30 = fconvert.s(fconvert.t(var_10) * x87_r6)
    float var_2c = fconvert.s(x87_r6 * fconvert.t(var_c))
    *arg1 = fconvert.s(fconvert.t(fconvert.s(fconvert.t(var_14) * x87_r6)) + fconvert.t(var_20))
    arg1[1] = fconvert.s(fconvert.t(edx_1) + fconvert.t(var_30))
    arg1[2] = fconvert.s(fconvert.t(eax_3) + fconvert.t(var_2c))
    float eax_11
    eax_11.b = 1
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return eax_11
}
