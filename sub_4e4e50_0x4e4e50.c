// 函数名称: sub_4e4e50
// 虚拟地址: 0x4e4e50
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_4e4e50()
{
    // 第一条实际指令: void* esi = data_26a44e4
    void* esi = data_26a44e4
    
    if (esi == 0)
        sub_4f4250()
        esi = data_26a44e4
    
    int32_t eax = 0
    int32_t* esi_1
    
    while (true)
        if (1 << (eax.b + 4) s>= 0x258)
            esi_1 = esi + eax * 0x14
            break
        
        eax += 1
        
        if (eax s>= 7)
            esi_1 = esi + 0x8c
            break
    
    esi_1[3] += 1
    
    if (*esi_1 == 0)
        sub_4f4170(esi_1)
    
    int32_t* edi = *esi_1
    *esi_1 = *edi
    sub_5abfc0(edi, 0, 0x258)
    data_27e7fe4 = edi
    sub_4d8560()
    sub_533b40()
    sub_54c330()
    sub_4e07a0()
    char var_5 = 0xff
    void* result = data_27e7fe4
    __builtin_memcpy(result + 0x9c, 0x83faf8, 0x40)
    int16_t var_7 = 0
    *(result + 0x94) = 0xff.d
    *(result + 0x98) = 1
    *(result + 0x244) = 0
    return result
}
