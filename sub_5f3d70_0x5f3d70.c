// 函数名称: sub_5f3d70
// 虚拟地址: 0x5f3d70
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5f3d70(void* arg1, int32_t arg2)
{
    // 第一条实际指令: void* ebx = arg1
    void* ebx = arg1
    int32_t* ecx = *(ebx + 0x10)
    int32_t eax_1
    int32_t edx
    edx:eax_1 = sx.q(*(ebx + 0x18))
    int32_t eax_3 = (eax_1 + (edx & 3)) s>> 2
    void* eax_4 = eax_3 + ecx
    int32_t* esi = ecx
    int32_t eax_6
    int32_t edx_2
    edx_2:eax_6 = sx.q(*esi)
    int32_t edi = eax_6
    int32_t var_10 = edx_2
    
    if (ecx u< eax_4)
        do
            int32_t eax_8
            int32_t edx_3
            edx_3:eax_8 = sx.q(*esi)
            esi = &esi[4]
            ecx = &ecx[1]
            ecx[-1] = (eax_8 + edi) u>> 1 | adc.d(edx_3, var_10, eax_8 + edi u< eax_8) << 0x1f
            edi = eax_8
            var_10 = edx_3
        while (ecx u< eax_4)
        
        ebx = arg1
    
    *(ebx + 0x50) += 1
    int32_t result = *(ebx + 0x50)
    *(ebx + 0x18) = eax_3
    
    if (*(ebx + (result << 2) + 0x28) == 0)
        return result
    
    return (*(ebx + (result << 2) + 0x28))(ebx, arg2)
}
