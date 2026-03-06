// 函数名称: sub_553a10
// 虚拟地址: 0x553a10
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

voidsub_553a10()
{
    // 第一条实际指令: int32_t ebx = data_3079074
    int32_t ebx = data_3079074
    int32_t esi = 0
    
    if (ebx s<= 0)
        return 
    
    do
        void* edi_1 = *((esi << 2) + &data_3079180)
        int32_t eax = *(edi_1 + 0xc)
        
        if (eax != 0)
            _aligned_free_base(eax)
        
        esi += 1
        *(edi_1 + 0xc) = 0
    while (esi s< ebx)
}
