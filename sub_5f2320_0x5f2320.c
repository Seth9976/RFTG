// 函数名称: sub_5f2320
// 虚拟地址: 0x5f2320
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5f2320(int32_t arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_8 = ecx
    int32_t result = arg1
    int32_t edx = *(result + 0x18)
    int32_t edi = *(result + 0x10)
    int32_t ebx = edx << 2
    int16_t* esi = edi + edx - 2
    edx.w = *esi
    void* ecx_1 = edi + ebx - 8
    edx.w = rol.w(edx.w, 8)
    int32_t var_8_1 = ebx
    int32_t result_1 = sx.d(edx.w)
    
    if (ecx_1 u>= edi)
        do
            result.w = *esi
            result.w = rol.w(result.w, 8)
            result = sx.d(result.w)
            *(ecx_1 + 6) = ((result_1 * 3 + result) s>> 2).w
            *(ecx_1 + 2) = ((result * 3 + result_1) s>> 2).w
            *(ecx_1 + 4) = ((result + result_1) s>> 1).w
            *ecx_1 = result.w
            ecx_1 -= 8
            esi -= 2
            result_1 = result
        while (ecx_1 u>= edi)
        
        ebx = var_8_1
        result = arg1
    
    *(result + 0x50) += 1
    int32_t ecx_2 = *(result + 0x50)
    *(result + 0x18) = ebx
    
    if (*(result + (ecx_2 << 2) + 0x28) == 0)
        return result
    
    return (*(result + (ecx_2 << 2) + 0x28))(result, arg2, var_8_1)
}
