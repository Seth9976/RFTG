// 函数名称: sub_419400
// 虚拟地址: 0x419400
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_419400(int32_t* arg1)
{
    // 第一条实际指令: if (*(data_27e7a40 + 0x2c4960) == 1 && data_27c0720 == 1)
    if (*(data_27e7a40 + 0x2c4960) == 1 && data_27c0720 == 1)
        int32_t edx_2 = data_27c076c
        int32_t ecx_2 = *(data_27e7a54 + 0x204) * 3
        
        if (edx_2 s< *((ecx_2 << 3) + &data_8c77ec) - 1)
            *arg1 = (&data_8c77e8)[ecx_2 * 2] + (edx_2 << 3)
            return 1
    
    int32_t eax
    eax.b = 0
    return 0
}
