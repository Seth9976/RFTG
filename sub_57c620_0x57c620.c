// 函数名称: sub_57c620
// 虚拟地址: 0x57c620
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

voidsub_57c620(int32_t arg1 @ edi, int32_t arg2)
{
    // 第一条实际指令: if (data_273bc30 != 0 || data_273bc31:1.b != 0)
    if (data_273bc30 != 0 || data_273bc31:1.b != 0)
        return 
    
    if (arg1 == 0)
        data_273bc2c = arg1
        sub_57c6a0()
        return 
    
    int32_t* eax = sub_4f4890(data_273ac20)
    int32_t ecx_1 = 0
    
    if (arg1 s> 0)
        do
            (&data_273ac2c)[ecx_1] =
                *(*(arg2 - &data_273ac2c + (ecx_1 << 2) + &data_273ac2c) * 0x118 + *eax)
            ecx_1 += 1
        while (ecx_1 s< arg1)
    
    data_273bc2c = arg1
}
