// 函数名称: sub_649bb0
// 虚拟地址: 0x649bb0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_649bb0(int128_t* arg1)
{
    // 第一条实际指令: int128_t* esi = arg1
    int128_t* esi = arg1
    void* ebx = *(esi + 0x68)
    sub_649b40(esi)
    int32_t eax = *(esi + 0x44)
    
    if (eax != 0)
        __free_base(eax)
    
    if (ebx != 0)
        int32_t i = 0
        int32_t* edi_2 = ebx + 0xc
        
        do
            sub_68af30(*edi_2)
            
            if (i != 7)
                __free_base(*edi_2)
            
            i += 1
            edi_2 = &edi_2[1]
        while (i s< 0xf)
        
        __free_base(ebx)
        esi = arg1
    
    sub_5abfc0(esi, 0, 0x70)
    return 0
}
