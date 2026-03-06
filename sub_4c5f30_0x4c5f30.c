// 函数名称: sub_4c5f30
// 虚拟地址: 0x4c5f30
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

uint32_tsub_4c5f30(int32_t arg1, int32_t arg2)
{
    // 第一条实际指令: if ((data_3160a20 & 1) == 0)
    if ((data_3160a20 & 1) == 0)
        data_3160a20.d |= 1
        int32_t frequency
        QueryPerformanceFrequency(&frequency)
        data_3160a18 = frequency
        int32_t var_8
        data_3160a1c = var_8
    
    int32_t eax_1
    uint32_t edx_2
    eax_1, edx_2 = __allmul(arg1, arg2, 0x3e8, 0)
    return __aulldiv(eax_1, edx_2, data_3160a18, data_3160a1c)
}
