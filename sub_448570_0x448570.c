// 函数名称: sub_448570
// 虚拟地址: 0x448570
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_448570(int32_t arg1, int32_t* arg2 @ edi)
{
    // 第一条实际指令: int32_t eax = *arg2
    int32_t eax = *arg2
    
    if (eax == 0)
        int32_t eax_2
        eax_2.b = sx.d(*(sub_418a10() + arg2[0x1f] * 0x14 + 0x464)) == arg1
        return eax_2
    
    if (eax != 4)
        eax.b = eax == 6
        return eax
    
    if (arg1 == 0xffffffff)
        int32_t eax_3
        eax_3.b = arg2[0x19] == (eax | arg1)
        return eax_3
    
    int32_t eax_5 = *sub_46b2b0(arg1)
    eax_5.b = arg2[0x19] == eax_5
    return eax_5
}
