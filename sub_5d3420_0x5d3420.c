// 函数名称: sub_5d3420
// 虚拟地址: 0x5d3420
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5d3420(void* arg1)
{
    // 第一条实际指令: int32_t eax = sub_5d32e0(arg1)
    int32_t eax = sub_5d32e0(arg1)
    
    if (eax != 0)
        int32_t var_c_1 = *(*(arg1 + 0xa0) + 0xc)
        uint32_t var_10_1 = zx.d(*(arg1 + 7))
        int32_t var_14_1 = eax
        sub_5cd100()
        sub_5d32b0(arg1)
    
    sub_5d3180(arg1)
    int32_t* eax_1 = *(*(arg1 + 0xa0) + 4)
    return (*(*eax_1 + 0x48))(eax_1)
}
