// 函数名称: sub_4e0840
// 虚拟地址: 0x4e0840
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_4e0840()
{
    // 第一条实际指令: void* i = &data_3068574
    for (void* i = &data_3068574; i s< &data_3068584; i += 4)
        int32_t eax_1 = *i
        
        if (eax_1 != 0)
            (*(*data_3078804 + 0x2c))(eax_1)
            *i = 0
    
    int32_t result = data_3068570
    
    if (result != 0)
        result = (*(*data_3078804 + 0x38))(result)
        data_3068570 = 0
    
    return result
}
