// 函数名称: sub_5eb1a0
// 虚拟地址: 0x5eb1a0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5eb1a0(void* arg1, int32_t arg2)
{
    // 第一条实际指令: void* edx = arg1
    void* edx = arg1
    int32_t ecx = *(edx + 0x18)
    int32_t esi = *(edx + 0x10)
    int32_t ebx = ecx << 2
    char* eax = esi + ebx - 4
    uint16_t ecx_1 = zx.w(*(esi + ecx - 1))
    int32_t var_c = ebx
    
    if (eax u>= esi)
        char* edi_1 = esi + ecx - 1
        
        do
            uint16_t edx_1 = zx.w(*edi_1)
            int32_t ecx_2 = sx.d(ecx_1)
            int32_t esi_1 = sx.d(edx_1)
            eax[3] = ((ecx_2 * 3 + esi_1) s>> 2).b
            eax[1] = ((esi_1 * 3 + ecx_2) s>> 2).b
            eax[2] = ((esi_1 + ecx_2) s>> 1).b
            *eax = edx_1.b
            eax -= 4
            edi_1 -= 1
            ecx_1 = edx_1
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
