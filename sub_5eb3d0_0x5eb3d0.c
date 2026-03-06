// 函数名称: sub_5eb3d0
// 虚拟地址: 0x5eb3d0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5eb3d0(void* arg1, int32_t arg2)
{
    // 第一条实际指令: void* esi = arg1
    void* esi = arg1
    int32_t ecx = *(esi + 0x18)
    int32_t ebx = *(esi + 0x10)
    uint16_t edx = zx.w(*(ebx + ecx - 1))
    int32_t eax = ecx << 2
    char* eax_1 = ebx + eax - 8
    char* ecx_1 = ebx + ecx - 2
    uint16_t edi = zx.w(*ecx_1)
    
    if (eax_1 u>= ebx)
        while (true)
            uint16_t esi_1 = zx.w(ecx_1[1])
            uint16_t ebx_1 = zx.w(*ecx_1)
            int32_t ecx_3 = sx.d(edx)
            int32_t esi_2 = sx.d(esi_1)
            int32_t edi_1 = sx.d(edi)
            eax_1[7] = ((ecx_3 * 3 + esi_2) s>> 2).b
            int32_t edx_4 = sx.d(ebx_1)
            eax_1[6] = ((edi_1 * 3 + edx_4) s>> 2).b
            eax_1[3] = ((esi_2 * 3 + ecx_3) s>> 2).b
            eax_1[5] = ((esi_2 + ecx_3) s>> 1).b
            eax_1[4] = ((edx_4 + edi_1) s>> 1).b
            eax_1[2] = ((edx_4 * 3 + edi_1) s>> 2).b
            eax_1[1] = esi_1.b
            *eax_1 = ebx_1.b
            eax_1 -= 8
            edx = esi_1
            edi = ebx_1
            
            if (eax_1 u< ebx)
                break
            
            ecx_1 -= 2
        
        esi = arg1
    
    *(esi + 0x50) += 1
    int32_t result = *(esi + 0x50)
    *(esi + 0x18) = eax
    
    if (*(esi + (result << 2) + 0x28) == 0)
        return result
    
    return (*(esi + (result << 2) + 0x28))(esi, arg2)
}
