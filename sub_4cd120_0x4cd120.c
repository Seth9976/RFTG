// 函数名称: sub_4cd120
// 虚拟地址: 0x4cd120
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

voidsub_4cd120()
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_4 = ecx
    int32_t i = 0
    
    if (data_27e7fc8 s<= 0)
        return 
    
    do
        sub_4ccfd0(*((i << 2) + &data_27e7bc8))
        void* eax = *((i << 2) + &data_27e7bc8)
        int32_t esi_1 = *(eax + 0x1c)
        
        if (esi_1 != 0)
            sub_508990(esi_1, eax)
        
        i += 1
    while (i s< data_27e7fc8)
}
