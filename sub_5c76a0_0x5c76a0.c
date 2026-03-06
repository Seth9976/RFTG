// 函数名称: sub_5c76a0
// 虚拟地址: 0x5c76a0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5c76a0(int32_t* arg1)
{
    // 第一条实际指令: arg1[1] = sub_5cc0d0()
    arg1[1] = sub_5cc0d0()
    int32_t eax_1 = data_bed760
    
    if (eax_1 != 0)
        int32_t result = eax_1(data_3168020, arg1)
        
        if (result == 0)
            return result
    
    for (int32_t* i = data_bed764; i != 0; i = i[2])
        (*i)(i[1], arg1)
    
    if (sub_5c7480(arg1, 1, 0, 0, 0) s<= 0)
        return 0xffffffff
    
    sub_5d1bf0(arg1)
    return 1
}
