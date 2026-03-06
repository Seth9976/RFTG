// 函数名称: sub_608850
// 虚拟地址: 0x608850
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_608850(int32_t arg1)
{
    // 第一条实际指令: if (arg1 == 0)
    if (arg1 == 0)
        sub_5cce60("Can't create renderer for NULL surface")
        return 0
    
    int32_t __saved_edi = 0x138
    int32_t var_14 = 1
    void* result = sub_5d0ad0()
    
    if (result == 0)
        sub_5cd050(result)
        return 0
    
    int32_t __saved_edi_2 = 8
    int32_t var_14_1 = 1
    int32_t* eax_2 = sub_5d0ad0()
    
    if (eax_2 == 0)
        sub_607ce0(result)
        sub_5cd050(0)
        return 0
    
    *eax_2 = arg1
    *(result + 4) = sub_607980
    *(result + 8) = sub_607d40
    *(result + 0xc) = sub_6079b0
    *(result + 0x10) = sub_607a70
    *(result + 0x14) = sub_607aa0
    *(result + 0x18) = sub_607ac0
    *(result + 0x1c) = sub_607ae0
    *(result + 0x24) = sub_607b70
    *(result + 0x28) = sub_4d35a0
    *(result + 0x2c) = sub_607bb0
    *(result + 0x30) = sub_607be0
    *(result + 0x34) = sub_607c10
    *(result + 0x38) = sub_607d80
    *(result + 0x3c) = sub_607e10
    *(result + 0x40) = sub_607f90
    *(result + 0x44) = sub_608110
    *(result + 0x48) = sub_608310
    *(result + 0x4c) = sub_6083e0
    *(result + 0x50) = sub_608770
    *(result + 0x54) = sub_607ca0
    *(result + 0x58) = sub_607cc0
    *(result + 0x5c) = sub_607ce0
    __builtin_memcpy(result + 0x68, &data_8badac, 0x54)
    *(result + 0x134) = eax_2
    sub_607d00(result)
    return result
}
