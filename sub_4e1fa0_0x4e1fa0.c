// 函数名称: sub_4e1fa0
// 虚拟地址: 0x4e1fa0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

voidsub_4e1fa0()
{
    // 第一条实际指令: if (data_3078808 == 3)
    if (data_3078808 == 3)
        for (void* i = &data_3068574; i s< &data_3068584; i += 4)
            int32_t eax = *i
            
            if (eax != 0)
                (*(*data_3078804 + 0x60))(eax)
                (*(*data_3078804 + 0x68))(*i, 0)
    
    data_306856c = 0
    data_2de8568 = 0
}
