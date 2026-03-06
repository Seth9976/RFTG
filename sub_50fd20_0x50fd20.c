// 函数名称: sub_50fd20
// 虚拟地址: 0x50fd20
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int80_t __convention("regparm")sub_50fd20(int32_t arg1, int32_t arg2, int32_t arg3, float* arg4, int32_t arg5, int32_t arg6, int32_t* arg7, int32_t arg8, int32_t* arg9, int32_t arg10)
{
    // 第一条实际指令: void var_dc
    void var_dc
    int32_t eax_1 = __security_cookie ^ &var_dc
    int32_t var_d0 = arg6
    int32_t var_bc = arg2
    int32_t* var_d4 = arg9
    int32_t* eax_5 = sub_510b30(arg10, arg2)
    int32_t eax_6
    int32_t edx
    eax_6, edx = sub_50c140(*eax_5)
    int32_t* esi_3 = arg5 * 0xb8 + *eax_6
    int128_t* ecx_3 = sub_50c830(arg5, edx, eax_5)
    long double x87_r7 = float.t(0)
    long double temp0 = fconvert.t(*(ecx_3 + 0x3c))
    x87_r7 - temp0
    int128_t* eax_8
    eax_8.w = (x87_r7 < temp0 ? 1 : 0) << 8 | (is_unordered.t(x87_r7, temp0) ? 1 : 0) << 0xa
        | (x87_r7 == temp0 ? 1 : 0) << 0xe
    bool p = unimplemented  {test ah, 0x5}
    
    if (p)
        sub_4c5870("elState.transform.t.s > 0", &data_83f3d3, "FabDef.cpp", 0x639, 
            "FabUIWorldTableTransformCenter")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    void* esi_4
    
    if (ecx_3[0x48].d s<= *(ecx_3 + 0x5c))
        esi_4 = &esi_3[2]
    else
        esi_4 = ecx_3 + 0x484
    
    int32_t var_50
    __builtin_memcpy(&var_50, esi_4, 0x24)
    float var_b0
    __builtin_memcpy(&var_b0, &var_50, 0x24)
    float var_a4
    float var_70
    float* eax_10 = sub_465b90(&var_70, &var_a4)
    int32_t edx_2 = eax_10[1]
    float var_ac = *eax_10
    var_b0 = fconvert.s(float.t(1))
    int32_t var_a8 = edx_2
    int32_t edx_3 = eax_10[3]
    int32_t eax_11 = var_50
    var_a4 = eax_10[2]
    int32_t var_a0 = edx_3
    float var_4c
    float var_98 = var_4c
    int32_t var_9c = eax_11
    int32_t var_48
    int32_t var_94 = var_48
    __builtin_memcpy(&var_70, &var_b0, 0x20)
    sub_405f60(&var_b0, ecx_3 + 0x3c)
    __builtin_memcpy(arg4, &var_b0, 0x20)
    int32_t eax_13 = sub_510860(arg5)
    int32_t eax_15
    int80_t st0
    st0, eax_15 = sub_50d7f0(&var_b0, ecx_3, esi_3, &var_b0)
    int32_t* edx_7 = var_d4
    int32_t ebx_2 = var_d0
    __builtin_memcpy(&var_50, eax_15, 0x40)
    int32_t var_ec_2 = arg10
    int32_t* var_f0 = edx_7
    int32_t eax_18
    int80_t result
    result, eax_18 = sub_4fae30(eax_13, edx_7, arg10, &var_b0, &var_50, arg7)
    __builtin_memcpy(&var_50, eax_18, 0x40)
    void* eax_19 = sub_4fc3d0(&data_be1cb8, eax_13)
    int32_t* eax_20 = sub_4f6e90(ebx_2, eax_19, &data_83f3d3)
    int32_t* esi_10 = *(eax_19 + 4)
    var_d4 = eax_20
    void* eax_23
    int32_t* edx_9
    eax_23, edx_9 = sub_4f7720(arg7, ebx_2 * 0x118 + *sub_4f4890(esi_10), var_d4)
    int32_t var_ec_3 = arg8
    int32_t* var_f0_1 = &var_50
    __builtin_memcpy(&var_50, sub_4fa9f0(arg3, edx_9, arg8, &var_b0, *(eax_23 + 0x434)), 0x40)
    var_70 = fconvert.s(fconvert.t(var_50))
    float var_6c = fconvert.s(float.t(0))
    float var_68 = fconvert.s(fneg(fconvert.t(var_4c)))
    float var_44
    var_b0 = fconvert.s(fconvert.t(var_44))
    int32_t var_ac_1 = 0
    int32_t var_a0_1 = 0x3f800000
    int32_t var_a8_1 = 0
    float edx_10 = var_70
    var_a4 = 0f
    float var_94_1 = var_68
    float var_9c_1 = edx_10
    float var_98_1 = var_6c
    __builtin_memcpy(&var_70, &var_b0, 0x20)
    sub_405f60(&var_b0, arg4)
    __builtin_memcpy(arg4, &var_b0, 0x20)
    sub_5a6aba(eax_1 ^ &var_dc)
    return result
}
