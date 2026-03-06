// 函数名称: sub_50c900
// 虚拟地址: 0x50c900
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int128_t* __convention("regparm")sub_50c900(int32_t arg1, void* arg2, int32_t* arg3, int32_t* arg4)
{
    // 第一条实际指令: void var_c4
    void var_c4
    int32_t eax_1 = __security_cookie ^ &var_c4
    
    if (*arg3 != 5)
        sub_4c5870("el.type == FAB_DISTRIBUTE", &data_83f3d3, "FabDef.cpp", 0x1c0, "FabSubstateTable")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    float var_60[0xa]
    float var_38[0xb]
    __builtin_memcpy(&var_60, sub_50c2d0(arg4, &var_38, arg3, &var_38, arg2), 0x28)
    float* eax_5 = sub_54cb80(&var_38, &var_60)
    int32_t edx_1 = arg4[1]
    int32_t ebx_2 = *arg4
    __builtin_memcpy(&var_60, eax_5, 0x28)
    int32_t ecx = arg4[2]
    int32_t esi_6 = (arg3[0x20] * ecx + edx_1) * arg3[0x1f]
    int32_t var_6c = arg3[0x1f]
    int32_t esi_7 = esi_6 + ebx_2
    int32_t var_64 = arg3[0x21]
    int32_t eax_9
    int32_t edx_3
    edx_3:eax_9 = sx.q(esi_7)
    int32_t ecx_1 = arg3[0x20]
    int32_t ecx_2 = ecx_1 * var_6c
    int32_t eax_13
    int32_t edx_7
    edx_7:eax_13 = sx.q(esi_7)
    
    if (mods.dp.d(edx_3:eax_9, var_6c) != ebx_2
            || mods.dp.d(sx.q(divs.dp.d(edx_3:eax_9, var_6c)), ecx_1) != edx_1
            || divs.dp.d(edx_7:eax_13, ecx_2) != ecx)
        sub_4c5870("FabSubstateCoordFromSlot(el, elState, idx) == coord", &data_83f3d3, "FabDef.cpp", 
            0x1c7, "FabSubstateTable")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    int128_t* result = sub_50c830(esi_7, mods.dp.d(edx_7:eax_13, ecx_2), arg2)
    int32_t ecx_5 = arg3[0x25]
    void* edx_9 = arg3[0x24]
    int32_t* ecx_6
    
    if (esi_7 s>= ecx_5)
        ecx_6 = *(edx_9 + (ecx_5 << 2) - 4)
    else
        ecx_6 = *(edx_9 + (esi_7 << 2))
    
    *result = ecx_6
    int128_t* result_1 = result
    int32_t eax_18 = sub_50c7d0(ecx_6, edx_9)
    int32_t edx_10 = *(arg2 + 0x6c)
    __builtin_memcpy(&var_38, eax_18, 0x28)
    int32_t eax_20
    int32_t edx_11
    int32_t esi_9
    
    if (edx_10 s<= *(arg2 + 0x5c))
        edx_11 = arg3[0x1f]
        esi_9 = arg3[0x20]
        eax_20 = arg3[0x21]
    else
        edx_11 = *(arg2 + 0x70)
        esi_9 = *(arg2 + 0x74)
        eax_20 = *(arg2 + 0x78)
    
    int32_t var_64_1 = eax_20
    var_6c = edx_11
    int32_t eax_21 = arg3[0x22]
    int32_t var_68 = esi_9
    void var_98
    int32_t eax_22
    int80_t st0
    st0, eax_22 = sub_50e480(eax_21, &var_38, &var_6c, &var_98, eax_21, arg4, &var_60)
    long double x87_r7 = float.t(0)
    __builtin_memcpy(&var_60, eax_22, 0x20)
    __builtin_memcpy(result + 0x3c, &var_60, 0x20)
    long double temp2 = fconvert.t(*(result + 0x3c))
    x87_r7 - temp2
    eax_22.w = (x87_r7 < temp2 ? 1 : 0) << 8 | (is_unordered.t(x87_r7, temp2) ? 1 : 0) << 0xa
        | (x87_r7 == temp2 ? 1 : 0) << 0xe
    bool p = unimplemented  {test ah, 0x5}
    
    if (not(p))
        sub_5a6aba(eax_1 ^ &var_c4)
        return result
    
    sub_4c5870("substate.transform.t.s > 0", &data_83f3d3, "FabDef.cpp", 0x1db, "FabSubstateTable")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}
