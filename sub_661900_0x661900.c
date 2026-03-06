// 函数名称: sub_661900
// 虚拟地址: 0x661900
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

voidsub_661900(int128_t* arg1, int128_t** arg2)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_8 = ecx
    void* edi = arg1
    
    if (edi == 0)
        return 
    
    int128_t* esi_1
    
    if ((*(edi + 0x70) & 0x40) != 0)
        if (*(edi + 0x138) != 0 && (*(edi + 0x74) & 2) == 0)
            sub_664100(edi, "Interlace handling should be turned on when using png_read_image")
            *(edi + 0xec) = *(edi + 0xe8)
        
        esi_1 = sub_66e9c0(edi)
    else
        esi_1 = sub_66e9c0(edi)
        sub_667770(edi)
    
    int32_t j_1 = *(edi + 0xe8)
    int32_t j_2 = j_1
    
    if (esi_1 s<= 0)
        return 
    
    arg1 = esi_1
    int128_t* i
    
    do
        int128_t** esi_2 = arg2
        
        if (j_1 != 0)
            int32_t j
            
            do
                sub_6614b0(edi, *esi_2, nullptr)
                esi_2 = &esi_2[1]
                j = j_1
                j_1 -= 1
            while (j != 1)
            j_1 = j_2
        
        i = arg1
        arg1 -= 1
    while (i != 1)
}
