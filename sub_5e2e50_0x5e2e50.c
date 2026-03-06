// 函数名称: sub_5e2e50
// 虚拟地址: 0x5e2e50
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5e2e50(void* arg1, int32_t arg2)
{
    // 第一条实际指令: void* ebx = arg1
    void* ebx = arg1
    int32_t eax = *(ebx + 0x18)
    int32_t eax_2 = sub_685f40(float.t(eax) * fconvert.t(*(ebx + 8)))
    int16_t* ecx = *(ebx + 0x10)
    void* esi_1 = eax_2 + ecx
    int16_t* edx = ecx
    int16_t esi_2 = *edx
    int16_t edi = edx[1]
    int32_t eax_3 = 0
    
    if (ecx u< esi_1)
        do
            int32_t eax_4 = eax_3 + eax_2
            edx = &edx[2]
            
            if (eax_4 * 2 s< eax - 0x40)
                eax_3 = eax_4
            else
                *ecx = esi_2
                ecx[1] = edi
                esi_2 = ((zx.d(*edx) + zx.d(esi_2)) s>> 1).w
                edi = ((zx.d(edx[1]) + zx.d(edi)) s>> 1).w
                ecx = &ecx[2]
                eax_3 = eax_4 - (eax - 0x40)
        while (ecx u< esi_1)
        
        ebx = arg1
    
    *(ebx + 0x50) += 1
    int32_t result = *(ebx + 0x50)
    *(ebx + 0x18) = eax_2
    
    if (*(ebx + (result << 2) + 0x28) == 0)
        return result
    
    return (*(ebx + (result << 2) + 0x28))(ebx, arg2)
}
