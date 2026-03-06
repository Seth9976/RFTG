// 函数名称: sub_5f0900
// 虚拟地址: 0x5f0900
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5f0900(int32_t arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t ebx = arg1
    int32_t ebx = arg1
    int16_t* ecx = *(ebx + 0x10)
    int32_t eax_1
    int32_t edx
    edx:eax_1 = sx.q(*(ebx + 0x18))
    int32_t edx_2 = (eax_1 - edx) s>> 1
    int16_t* esi = ecx
    int32_t edi
    edi.w = *esi
    void* eax_3 = ecx + edx_2
    edi.w = rol.w(edi.w, 8)
    arg1 = edx_2
    int32_t edi_1 = zx.d(edi.w)
    
    if (ecx u< eax_3)
        do
            edx_2.w = *esi
            edx_2.w = rol.w(edx_2.w, 8)
            edx_2 = zx.d(edx_2.w)
            *ecx = ((edi_1 + edx_2) s>> 1).w
            ecx = &ecx[1]
            esi = &esi[2]
            edi_1 = edx_2
        while (ecx u< eax_3)
        
        edx_2 = arg1
    
    *(ebx + 0x50) += 1
    int32_t result = *(ebx + 0x50)
    *(ebx + 0x18) = edx_2
    
    if (*(ebx + (result << 2) + 0x28) == 0)
        return result
    
    return (*(ebx + (result << 2) + 0x28))(ebx, arg2)
}
