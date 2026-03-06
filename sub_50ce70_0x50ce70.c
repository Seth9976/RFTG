// 函数名称: sub_50ce70
// 虚拟地址: 0x50ce70
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void* __convention("regparm")sub_50ce70(int32_t arg1, int32_t arg2, void* arg3, void* arg4, void* arg5)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    bool cond:0 = *(arg3 + 0x480) s> *(arg3 + 0x5c)
    void* var_58 = arg3
    void* esi = arg3 + 0x484
    
    if (not(cond:0))
        esi = arg5 + 8
    
    int32_t var_84
    __builtin_memcpy(&var_84, esi, 0x24)
    float var_34
    __builtin_memcpy(&var_34, &var_84, 0x24)
    float var_44[0x4]
    float var_28
    float* eax_3 = sub_465b90(&var_44, &var_28)
    int32_t edx = eax_3[1]
    float var_30 = *eax_3
    float var_6c
    var_34 = fconvert.s(fconvert.t(var_6c))
    int32_t var_2c = edx
    int32_t edx_1 = eax_3[3]
    int32_t eax_4 = var_84
    var_28 = eax_3[2]
    int32_t var_24 = edx_1
    int32_t var_80
    int32_t var_1c = var_80
    int32_t var_20 = eax_4
    int32_t var_7c
    int32_t var_18 = var_7c
    void var_54
    __builtin_memcpy(&var_54, &var_34, 0x20)
    sub_405f60(&var_34, arg3 + 0x3c)
    __builtin_memcpy(arg4, &var_34, 0x20)
    char eax_5
    int80_t st0
    st0, eax_5 = sub_4e3770(var_58 + 0x40)
    char* var_a8
    
    if (eax_5 == 0)
        char const* const var_98_1 = "FabTransformGet"
        int32_t var_9c = 0x258
        char const* const var_a0 = "FabDef.cpp"
        char* const var_a4 = &data_83f3d3
        var_a8 = "QuatIsValid(state.transform.t.r)"
        sub_4c5870(var_a8, var_a4, var_a0, var_9c, var_98_1)
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    char eax_7
    int80_t st0_1
    st0_1, eax_7 = sub_4e3770(arg4 + 4)
    
    if (eax_7 != 0)
        sub_5a6aba(eax_1 ^ &__saved_ebp)
        return arg4
    
    char const* const var_98_2 = "FabTransformGet"
    int32_t var_9c_1 = 0x259
    char const* const var_a0_1 = "FabDef.cpp"
    char* const var_a4_1 = &data_83f3d3
    var_a8 = "QuatIsValid(transform.r)"
    sub_4c5870(var_a8, var_a4_1, var_a0_1, var_9c_1, var_98_2)
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}
