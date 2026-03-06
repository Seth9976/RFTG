// 函数名称: sub_5273f0
// 虚拟地址: 0x5273f0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_5273f0()
{
    // 第一条实际指令: void* ebx
    void* ebx
    void* var_8 = ebx
    int32_t ecx
    int32_t edx
    void* result = sub_530500(ecx, edx)
    void* result_1 = result
    int32_t i = 0
    
    if (*(result_1 + 0x19d0) s> 0)
        do
            float eax_1
            int32_t edx_1
            eax_1, edx_1 = sub_525900(i, edx, result_1)
            unimplemented  {fld st0, dword [ebp+0x8]}
            int32_t* ecx_2 = *(result_1 + 0x1450)
            int32_t* var_1c_1 = ecx_2
            float var_1c_2 = fconvert.s(unimplemented  {fstp dword [esp], st0})
            unimplemented  {fstp dword [esp], st0}
            unimplemented  {fld st0, dword [esi+0x58]}
            int32_t* var_28_1 = ecx_2
            float var_28_2 = fconvert.s(unimplemented  {fstp dword [esp], st0})
            unimplemented  {fstp dword [esp], st0}
            result, edx = sub_5271c0(eax_1, edx_1, result_1 + 0x18, eax_1, result_1, result_1 + 0x18, 
                var_28_2, 0, 0, var_1c_2, result_1 + 0x64, ecx_2)
            int16_t top = top - 1
            unimplemented  {call 0x5271c0}
            i += 1
        while (i s< *(result_1 + 0x19d0))
    
    int32_t i_1 = 0
    *(result_1 + 0x1450) = 0
    
    if (*(result_1 + 0x19d0) s> 0)
        do
            result, edx = sub_525a00(sub_525900(i_1, edx, result_1))
            i_1 += 1
        while (i_1 s< *(result_1 + 0x19d0))
    
    return result
}
