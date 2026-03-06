// 函数名称: sub_409c30
// 虚拟地址: 0x409c30
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_409c30()
{
    // 第一条实际指令: int32_t eax = data_27c05e8
    int32_t eax = data_27c05e8
    
    if (eax != 4)
        if (eax == 1)
            sub_412230()
        else if (eax == 2 || eax == 3)
            sub_4122f0()
    
    int32_t eax_3 = data_27c05f4
    data_27c05e8 = eax_3
    
    if (eax_3 == 4)
        int32_t eax_1
        int80_t st0
        st0, eax_1 = sub_4749d0()
        return eax_1
    
    if (eax_3 == 1)
        return sub_4121d0()
    
    if (eax_3 != 2 && eax_3 != 3)
        return eax_3
    
    return sub_412280()
}
