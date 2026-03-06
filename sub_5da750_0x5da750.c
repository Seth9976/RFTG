// 函数名称: sub_5da750
// 虚拟地址: 0x5da750
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5da750(int32_t arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t eax = sub_5da660(arg1, arg2)
    int32_t eax = sub_5da660(arg1, arg2)
    
    if (eax s>= 0)
        return eax
    
    void* __saved_esi_1 = (data_bf7fc8 << 2) + 4
    int32_t var_14_1 = data_bf7fcc
    int32_t eax_2 = sub_5d0ae0()
    
    if (eax_2 == 0)
        sub_5cd050(eax_2)
        return 0xffffffff
    
    data_bf7fcc = eax_2
    int32_t eax_3 = data_bf7fc8
    int32_t var_14_2 = 0x18
    data_bf7fc8 = eax_3 + 1
    int32_t* eax_5 = sub_5d0ac0()
    int32_t ecx_2 = data_bf7fcc
    *(ecx_2 + (eax_3 << 2)) = eax_5
    
    if (eax_5 == 0)
        sub_5cd050(0)
        return 0xffffffff
    
    *eax_5 = arg1
    eax_5[1] = arg2
    *(*(ecx_2 + (eax_3 << 2)) + 8) = 0
    *(*(ecx_2 + (eax_3 << 2)) + 0xc) = 0
    *(*(ecx_2 + (eax_3 << 2)) + 0x10) = 0
    sub_5d1a00(arg1, arg2)
    return eax_3
}
