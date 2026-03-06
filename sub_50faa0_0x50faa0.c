// 函数名称: sub_50faa0
// 虚拟地址: 0x50faa0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_50faa0(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int32_t* eax_2 = sub_510b30(arg3, arg2)
    int32_t eax_3
    int32_t edx
    eax_3, edx = sub_50c140(*eax_2)
    void* esi_3 = arg3 * 0xb8 + *eax_3
    int128_t* ecx_1 = sub_50c830(arg3, edx, eax_2)
    long double x87_r7 = float.t(0)
    long double temp0 = fconvert.t(*(ecx_1 + 0x3c))
    x87_r7 - temp0
    int128_t* eax_5
    eax_5.w = (x87_r7 < temp0 ? 1 : 0) << 8 | (is_unordered.t(x87_r7, temp0) ? 1 : 0) << 0xa
        | (x87_r7 == temp0 ? 1 : 0) << 0xe
    bool p = unimplemented  {test ah, 0x5}
    
    if (p)
        char const* const var_94 = "FabWorldTransform"
        int32_t var_98 = 0x5fd
        char const* const var_9c = "FabDef.cpp"
        char* const var_a0 = &data_83f3d3
        char* var_a4 = "elState.transform.t.s > 0"
        sub_4c5870(var_a4, var_a0, var_9c, var_98, var_94)
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    void* esi_4
    
    if (ecx_1[0x48].d s<= *(ecx_1 + 0x5c))
        esi_4 = esi_3 + 8
    else
        esi_4 = ecx_1 + 0x484
    
    int32_t var_80
    __builtin_memcpy(&var_80, esi_4, 0x24)
    float var_38
    __builtin_memcpy(&var_38, &var_80, 0x24)
    float var_48[0x4]
    float var_2c
    float* eax_8 = sub_465b90(&var_48, &var_2c)
    int32_t ecx_2 = eax_8[1]
    float var_34 = *eax_8
    var_38 = fconvert.s(float.t(1))
    int32_t eax_9 = eax_8[3]
    int32_t var_30 = ecx_2
    int32_t ecx_3 = var_80
    var_2c = eax_8[2]
    int32_t var_28 = eax_9
    int32_t var_24 = ecx_3
    int32_t var_7c
    int32_t var_20 = var_7c
    int32_t var_78
    int32_t var_1c = var_78
    void var_58
    __builtin_memcpy(&var_58, &var_38, 0x20)
    sub_405f60(&var_38, ecx_1 + 0x3c)
    __builtin_memcpy(arg4, &var_38, 0x20)
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return arg4
}
