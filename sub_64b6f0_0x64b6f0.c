// 函数名称: sub_64b6f0
// 虚拟地址: 0x64b6f0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_64b6f0(void* arg1, int32_t* arg2)
{
    // 第一条实际指令: void* edi = *(arg1 + 0x68)
    void* edi = *(arg1 + 0x68)
    *(arg1 + 0x58) = 0
    *(arg1 + 0x5c) = 0
    *(arg1 + 0x60) = 0
    *(arg1 + 0x64) = 0
    int32_t* edi_1 = edi + 0xc
    int32_t i_1 = 0xf
    int32_t i
    
    do
        sub_68af00(*edi_1)
        edi_1 = &edi_1[1]
        i = i_1
        i_1 -= 1
    while (i != 1)
    int32_t result = sub_658d20(arg1)
    
    if (result != 0)
        return result
    
    if (arg2 != 0)
        if (sub_64b8b0(arg1) != 0)
            return 0xffffff7d
        
        *arg2 = Windows::UI::Xaml::GridLength::GridUnitType::get(arg1 + 4)
        arg2[1] = sub_68b1a0(arg1 + 4)
        arg2[2] = 0
        arg2[3] = *(arg1 + 0x2c)
        arg2[4] = *(arg1 + 0x30)
        arg2[5] = *(arg1 + 0x34)
        arg2[6] = *(arg1 + 0x38)
        arg2[7] = *(arg1 + 0x3c)
    
    return 0
}
