// 函数名称: sub_5b8ca8
// 虚拟地址: 0x5b8ca8
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5b8ca8(int32_t* arg1)
{
    // 第一条实际指令: data_bec5c0 += 1
    data_bec5c0 += 1
    int32_t eax = sub_5abd7c(0x1000)
    arg1[2] = eax
    
    if (eax == 0)
        arg1[3] |= 4
        arg1[2] = &arg1[5]
        arg1[6] = 2
    else
        arg1[3] |= 8
        arg1[6] = 0x1000
    
    int32_t result = arg1[2]
    arg1[1] = 0
    *arg1 = result
    return result
}
