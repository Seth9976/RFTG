// 函数名称: sub_55c850
// 虚拟地址: 0x55c850
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

BOOLsub_55c850()
{
    // 第一条实际指令: int32_t* eax = *(data_3079200 + 8)
    int32_t* eax = *(data_3079200 + 8)
    BOOL eax_1 = (*(*eax + 0xc))(eax)
    
    if (eax_1 != 0x88760868)
        if (eax_1 != 0x88760869)
        label_55c87f:
            sub_51ca50("Starting Frame")
            void* eax_2
            eax_2.b = 1
            return eax_2
        
        if (sub_55c7a0().b != 0)
            goto label_55c87f
    
    eax_1.b = 0
    return eax_1
}
