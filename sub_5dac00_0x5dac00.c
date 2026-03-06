// 函数名称: sub_5dac00
// 虚拟地址: 0x5dac00
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5dac00()
{
    // 第一条实际指令: int32_t i = data_bf7fc8
    int32_t i = data_bf7fc8
    
    while (i != 0)
        int32_t* eax_2 = *(data_bf7fcc + (i << 2) - 4)
        i -= 1
        sub_5dab80(*eax_2, eax_2[1])
    
    int32_t var_8_2 = data_bf7fcc
    int32_t result = sub_5d0af0()
    data_bf7fcc = 0
    return result
}
