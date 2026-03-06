// 函数名称: sub_5124c0
// 虚拟地址: 0x5124c0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t* __convention("regparm")sub_5124c0(int32_t arg1, int32_t arg2, int32_t arg3)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_8 = ecx
    void* eax = &data_8c1360
    int32_t var_8_1 = 0
    int32_t* entry_result
    
    for (int32_t i = 0x20; i u>= 4; )
        if (*(arg1 - &data_8c1360 + eax) != *eax)
            int32_t eax_4 = *(arg3 + arg2 * 0xc + 0x160)
            int32_t var_14 = eax_4
            __builtin_memcpy(((eax_4 + 0x11) << 5) + arg3, arg1, 0x20)
            sub_4c4a50(entry_result, 
                "\tfloat2 uv = MultiplyMatrixVec(float3(arg_uv, 1.0), gTexAnim%d).xy;\n")
            return entry_result
        
        i -= 4
        eax += 4
    
    int32_t* entry_result_1 = entry_result
    sub_4c40c0(0x15, arg1 - &data_8c1360)
    char* edx_2 = *entry_result
    char const* const ecx_1 = "\tfloat2 uv = arg_uv;\n"
    char const i_1
    
    do
        i_1 = *ecx_1
        *edx_2 = i_1
        ecx_1 = &ecx_1[1]
        edx_2 = &edx_2[1]
    while (i_1 != 0)
    return entry_result
}
