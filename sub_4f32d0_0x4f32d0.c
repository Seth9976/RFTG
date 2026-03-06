// 函数名称: sub_4f32d0
// 虚拟地址: 0x4f32d0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t*sub_4f32d0()
{
    // 第一条实际指令: void* esi = data_26a44e4
    void* esi = data_26a44e4
    
    if (esi == 0)
        sub_4f4250()
        esi = data_26a44e4
    
    int32_t eax = 0
    int32_t* esi_1
    
    while (true)
        if (1 << (eax.b + 4) s>= 0x304)
            esi_1 = esi + eax * 0x14
            break
        
        eax += 1
        
        if (eax s>= 7)
            esi_1 = esi + 0x8c
            break
    
    esi_1[3] += 1
    
    if (*esi_1 == 0)
        sub_4f4170(esi_1)
    
    int32_t* result_1 = *esi_1
    *esi_1 = *result_1
    sub_5abfc0(result_1, 0, 0x304)
    int32_t* result
    
    if (result_1 == 0)
        result = nullptr
    else
        result_1[0xb4] = 0
        result_1[0xb5] = 0
        result_1[0xb6] = 0
        result = result_1
    
    result[0xbf] = 0
    int32_t** entry_ebx
    result[0xc0] = entry_ebx[1]
    void* ecx_3 = entry_ebx[1]
    
    if (ecx_3 == 0)
        entry_ebx[2] += 1
        *entry_ebx = result
        entry_ebx[1] = result
        return result
    
    *(ecx_3 + 0x2fc) = result
    entry_ebx[2] += 1
    entry_ebx[1] = result
    return result
}
