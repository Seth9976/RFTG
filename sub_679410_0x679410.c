// 函数名称: sub_679410
// 虚拟地址: 0x679410
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_679410(int32_t* arg1)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t esi
    int32_t var_8 = esi
    int32_t* esp_1 = &var_8
    int32_t eax = arg1[5]
    
    if ((eax == 0xcd || eax == 0xce) && arg1[0x10] == 0)
        if (arg1[0x23] u< arg1[0x1d])
            *(*arg1 + 0x14) = 0x43
            (**arg1)(arg1)
        
        (*(arg1[0x69] + 4))(arg1)
        arg1[5] = 0xd2
        esp_1 = &var_4
    else if (eax == 0xcf)
        arg1[5] = 0xd2
    else if (eax != 0xd2)
        *(*arg1 + 0x14) = 0x14
        *(*arg1 + 0x18) = arg1[5]
        (**arg1)(arg1)
        esp_1 = &var_4
    
    while (*(arg1[0x6d] + 0x14) == 0)
        int32_t ecx_5 = *arg1[0x6d]
        *(esp_1 - 4) = arg1
        
        if (ecx_5() == 0)
            *esp_1
            esp_1[1]
            return 0
    
    int32_t ecx_6 = *(arg1[6] + 0x18)
    *(esp_1 - 4) = arg1
    ecx_6()
    *(esp_1 - 8) = arg1
    sub_67b5d0()
    *esp_1
    esp_1[1]
    return 1
}
