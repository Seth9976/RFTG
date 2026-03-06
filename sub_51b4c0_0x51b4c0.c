// 函数名称: sub_51b4c0
// 虚拟地址: 0x51b4c0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t*sub_51b4c0()
{
    // 第一条实际指令: int32_t* result = data_30785f4
    int32_t* result = data_30785f4
    int32_t eax = *result
    
    if (eax == 0)
        return result
    
    if (*eax == 0)
        return result
    
    void* eax_2 = sub_4c4060(result)
    int32_t temp0_1 = *(eax_2 + 4)
    *(eax_2 + 4) -= 1
    
    if (temp0_1 != 1)
        return result
    
    int32_t esi_2 = *(eax_2 + 0xc) + 0x10
    sub_4f4430(eax_2, sub_4f4380(esi_2), esi_2)
    return result
}
