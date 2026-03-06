// 函数名称: sub_65f700
// 虚拟地址: 0x65f700
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_65f700(int128_t* arg1)
{
    // 第一条实际指令: int128_t* esi = arg1
    int128_t* esi = arg1
    int32_t edi = 0
    
    if (esi != 0)
        sub_649bb0(&esi[0x25])
        sub_649c30(&esi[0x1e])
        sub_645620(esi + 0x78)
        
        if (*(esi + 0x48) != 0)
            int32_t eax_2 = *(esi + 0x34)
            
            if (eax_2 != 0)
                arg1 = nullptr
                
                if (eax_2 s> 0)
                    int32_t ebx_1 = 0
                    void* i
                    
                    do
                        sub_646a00(*(esi + 0x48) + edi)
                        sub_646920(*(esi + 0x4c) + ebx_1)
                        i = arg1 + 1
                        edi += 0x20
                        ebx_1 += 0x10
                        arg1 = i
                    while (i s< *(esi + 0x34))
                
                __free_base(*(esi + 0x48))
                __free_base(*(esi + 0x4c))
        
        int32_t eax_7 = *(esi + 0x3c)
        
        if (eax_7 != 0)
            __free_base(eax_7)
        
        int32_t eax_8 = *(esi + 0x44)
        
        if (eax_8 != 0)
            __free_base(eax_8)
        
        int32_t eax_9 = esi[4].d
        
        if (eax_9 != 0)
            __free_base(eax_9)
        
        int32_t eax_10 = *(esi + 0x38)
        
        if (eax_10 != 0)
            __free_base(eax_10)
        
        sub_645cf0(esi + 0x18)
        int32_t ecx_5 = *esi
        
        if (ecx_5 != 0)
            int32_t eax_11 = *(esi + 0x2c8)
            
            if (eax_11 != 0)
                eax_11(ecx_5)
        
        sub_5abfc0(esi, 0, 0x2d0)
    
    return 0
}
