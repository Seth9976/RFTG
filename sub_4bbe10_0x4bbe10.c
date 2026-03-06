// 函数名称: sub_4bbe10
// 虚拟地址: 0x4bbe10
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_4bbe10()
{
    // 第一条实际指令: if (*(data_27e7a54 + 0x50) != 0)
    if (*(data_27e7a54 + 0x50) != 0)
        return 1
    
    void* eax_2 = data_27e7a40
    
    if (eax_2 == 0)
        sub_4075c0()
        void* eax_3 = data_27e7a40
        int32_t edi_1 = *(eax_3 + 0x20)
        int32_t esi_1 = *(eax_3 + 0x24)
        sub_407670()
        
        if (esi_1 == 8 && edi_1 == 2)
            return 0
    else if (*(eax_2 + 0x24) == 8 && *(eax_2 + 0x20) == 2)
        return 0
    
    return 2
}
