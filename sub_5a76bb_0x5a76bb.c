// 函数名称: sub_5a76bb
// 虚拟地址: 0x5a76bb
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5a76bb(int32_t arg1)
{
    // 第一条实际指令: if (sub_5af540(&data_6b0ca0) != 0)
    if (sub_5af540(&data_6b0ca0) != 0)
        __fpmath(arg1)
    
    sub_5af483()
    int32_t result = __initterm_e(0x6b0188, 0x6b01a8)
    
    if (result != 0)
        return result
    
    int32_t edi
    int32_t var_c_1 = edi
    _atexit(sub_5af45d)
    
    for (void* const i = &data_6ae72c; i u< 0x6b0184; i += 4)
        int32_t eax_2 = *i
        
        if (eax_2 != 0)
            eax_2()
    
    if (data_3168014 != 0 && sub_5af540(&data_3168014) != 0)
        data_3168014(0, 2, 0)
    
    return 0
}
