// 函数名称: sub_5f0a20
// 虚拟地址: 0x5f0a20
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5f0a20(int32_t arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t ebx = arg1
    int32_t ebx = arg1
    int16_t* ecx = *(ebx + 0x10)
    int32_t eax_1
    int32_t edx
    edx:eax_1 = sx.q(*(ebx + 0x18))
    int32_t edx_3 = ((edx & 3) + eax_1) s>> 2
    int16_t* esi = ecx
    int32_t edi
    edi.w = *esi
    void* eax_2 = ecx + edx_3
    edi.w = rol.w(edi.w, 8)
    arg1 = edx_3
    
    if (ecx u< eax_2)
        int32_t edi_2 = zx.d(edi.w)
        
        do
            edx_3.w = *esi
            edx_3.w = rol.w(edx_3.w, 8)
            edx_3 = zx.d(edx_3.w)
            *ecx = ((edi_2 + edx_3) s>> 1).w
            ecx = &ecx[1]
            esi = &esi[4]
            edi_2 = edx_3
        while (ecx u< eax_2)
        
        edx_3 = arg1
    
    *(ebx + 0x50) += 1
    int32_t result = *(ebx + 0x50)
    *(ebx + 0x18) = edx_3
    
    if (*(ebx + (result << 2) + 0x28) == 0)
        return result
    
    return (*(ebx + (result << 2) + 0x28))(ebx, arg2)
}
