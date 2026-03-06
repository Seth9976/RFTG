// 函数名称: sub_4b93d0
// 虚拟地址: 0x4b93d0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_4b93d0(void* arg1)
{
    // 第一条实际指令: int32_t eax_2 = *(arg1 + 4) + 2
    int32_t eax_2 = *(arg1 + 4) + 2
    data_307d9b8 = eax_2
    data_307d9bc = 0
    data_307d978 = 1
    
    if (eax_2 == 4)
        void* eax_3 = data_27e7a54
        
        if (*(eax_3 + 0x210) == 0)
            *(eax_3 + 0x210) = 1
            sub_408a40()
    
    data_307d96c = 0
    return 0
}
