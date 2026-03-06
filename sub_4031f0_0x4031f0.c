// 函数名称: sub_4031f0
// 虚拟地址: 0x4031f0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_4031f0()
{
    // 第一条实际指令: sub_42edf0()
    sub_42edf0()
    void* edi = data_27e7a40
    
    if (*(edi + 0x18) != 0)
        sub_4b9f90(edi + 0x350)
        edi = data_27e7a40
        
        if (*(edi + 0x54c) != 0)
            sub_401cc0(edi + 0x54c)
            int32_t eax_2 = *(edi + 0x54c)
            
            if (eax_2 != 0)
                _aligned_free_base(eax_2)
            
            __builtin_memset(edi + 0x54c, 0, 0x14)
            *(edi + 0x564) = 0
        
        *(edi + 0x18) = 0
        *(edi + 0x20) = 0
    
    sub_4f7100(*(edi + 0x648))
    sub_4b4ab0(data_27e7a40 + 0x95c)
    void* esi = data_27e7a40
    int32_t eax_4 = *(esi + 0xa04)
    
    if (eax_4 != 0)
        sub_4f7100(eax_4)
    
    *(esi + 0xa04) = 0
    void* esi_1 = data_27e7a40
    int32_t result = *(esi_1 + 0xa18)
    
    if (result != 0)
        result = sub_4f7100(result)
    
    *(esi_1 + 0xa18) = 0
    return result
}
