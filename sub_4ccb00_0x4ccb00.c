// 函数名称: sub_4ccb00
// 虚拟地址: 0x4ccb00
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t* __stdcallsub_4ccb00(int32_t* arg1, int32_t* arg2)
{
    // 第一条实际指令: int32_t ecx = *arg1
    int32_t ecx = *arg1
    int32_t* entry_ebx
    int32_t edi_3 = (ecx s>> 4 | ecx) & entry_ebx[1]
    
    for (int32_t* i = *(*entry_ebx + (edi_3 << 2)); i != 0; i = i[2])
        if (ecx == *i)
            i[1] = *arg2
            return i
    
    void* esi = data_26a44e4
    
    if (esi == 0)
        sub_4f4250()
        esi = data_26a44e4
    
    int32_t eax_1 = 0
    int32_t* esi_1
    
    while (true)
        if (1 << (eax_1.b + 4) s>= 0xc)
            esi_1 = esi + eax_1 * 0x14
            break
        
        eax_1 += 1
        
        if (eax_1 s>= 7)
            esi_1 = esi + 0x8c
            break
    
    esi_1[3] += 1
    
    if (*esi_1 == 0)
        sub_4f4170(esi_1)
    
    int32_t* eax_2 = *esi_1
    *esi_1 = *eax_2
    
    if (eax_2 != 0)
        *eax_2 = *arg1
    
    if (eax_2 != 0xfffffffc)
        eax_2[1] = *arg2
    
    eax_2[2] = *(*entry_ebx + (edi_3 << 2))
    *(*entry_ebx + (edi_3 << 2)) = eax_2
    entry_ebx[2] += 1
    return eax_2
}
