// 函数名称: sub_5ec770
// 虚拟地址: 0x5ec770
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5ec770(uint32_t arg1, int32_t arg2)
{
    // 第一条实际指令: uint32_t edx = arg1
    uint32_t edx = arg1
    int32_t ecx = *(edx + 0x18)
    int32_t esi = *(edx + 0x10)
    int32_t ebx = ecx << 2
    char* edi = esi + ecx - 1
    ecx.w = sx.w(*edi)
    char* eax = esi + ebx - 4
    int32_t var_c = ebx
    int16_t ecx_1 = ecx.w
    
    if (eax u>= esi)
        do
            edx.w = sx.w(*edi)
            edx = zx.d(edx.w)
            int32_t ecx_2 = sx.d(ecx_1)
            int32_t esi_1 = sx.d(edx.w)
            eax[3] = ((ecx_2 * 3 + esi_1) s>> 2).b
            eax[1] = ((esi_1 * 3 + ecx_2) s>> 2).b
            eax[2] = ((esi_1 + ecx_2) s>> 1).b
            *eax = edx.b
            eax -= 4
            edi -= 1
            ecx_1 = edx.w
        while (eax u>= esi)
        
        edx = arg1
        ebx = var_c
    
    *(edx + 0x50) += 1
    int32_t result = *(edx + 0x50)
    *(edx + 0x18) = ebx
    
    if (*(edx + (result << 2) + 0x28) == 0)
        return result
    
    return (*(edx + (result << 2) + 0x28))(edx, arg2, var_c, esi)
}
