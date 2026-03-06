// 函数名称: sub_5f3b70
// 虚拟地址: 0x5f3b70
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5f3b70(void* arg1, int32_t arg2)
{
    // 第一条实际指令: void* ebx = arg1
    void* ebx = arg1
    int32_t eax = *(ebx + 0x18)
    int32_t ecx = eax * 2
    int32_t esi = *(ebx + 0x10)
    int32_t* ecx_1 = esi + ecx - 8
    int32_t* esi_1 = esi + eax - 4
    int32_t eax_2
    int32_t edx
    edx:eax_2 = sx.q(*esi_1)
    int32_t edi = eax_2
    int32_t var_10 = edx
    
    if (ecx_1 u>= esi)
        do
            int32_t eax_4
            int32_t edx_1
            edx_1:eax_4 = sx.q(*esi_1)
            esi_1 -= 4
            *ecx_1 = eax_4
            ecx_1[1] = (eax_4 + edi) u>> 1 | adc.d(edx_1, var_10, eax_4 + edi u< eax_4) << 0x1f
            ecx_1 -= 8
            edi = eax_4
            var_10 = edx_1
        while (ecx_1 u>= esi)
        
        ebx = arg1
    
    *(ebx + 0x50) += 1
    *(ebx + 0x18) = ecx
    int32_t result = *(ebx + 0x50)
    
    if (*(ebx + (result << 2) + 0x28) == 0)
        return result
    
    return (*(ebx + (result << 2) + 0x28))(ebx, arg2)
}
