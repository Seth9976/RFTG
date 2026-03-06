// 函数名称: sub_48b800
// 虚拟地址: 0x48b800
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_48b800(int32_t* arg1, int32_t* arg2)
{
    // 第一条实际指令: int32_t* ecx = arg2
    int32_t* ecx = arg2
    int32_t* edx = arg1
    int32_t eax = 0x84
    
    while (*edx == *ecx)
        eax -= 4
        ecx = &ecx[1]
        edx = &edx[1]
        
        if (eax u< 4)
            int32_t eax_1
            eax_1.b = true
            return 1
    
    uint32_t eax_2 = zx.d(*edx)
    uint32_t esi_2 = zx.d(*ecx)
    uint32_t eax_3 = eax_2 - esi_2
    
    if (eax_2 == esi_2)
        uint32_t eax_4 = zx.d(*(edx + 1))
        uint32_t esi_3 = zx.d(*(ecx + 1))
        eax_3 = eax_4 - esi_3
        
        if (eax_4 == esi_3)
            uint32_t eax_5 = zx.d(*(edx + 2))
            uint32_t esi_4 = zx.d(*(ecx + 2))
            eax_3 = eax_5 - esi_4
            
            if (eax_5 == esi_4)
                eax_3 = zx.d(*(edx + 3)) - zx.d(*(ecx + 3))
    
    int32_t result
    result.b = (eax_3 s>> 0x1f | 1) == 0
    return result
}
