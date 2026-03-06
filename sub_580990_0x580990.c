// 函数名称: sub_580990
// 虚拟地址: 0x580990
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_580990()
{
    // 第一条实际指令: void* eax = data_26a6554
    void* eax = data_26a6554
    
    if (*(eax + 0x40) != 0)
        void* ecx_1 = *(eax + 4)
        
        if (*(ecx_1 + 0x14) == 8)
            *(ecx_1 + 8) = &data_8954cc
            eax = data_26a6554
        
        *(eax + 0x40) = 0
        SendMessageA(*(data_26a6554 + 0x14), 0x100, 9, 0)
    
    return 0
}
