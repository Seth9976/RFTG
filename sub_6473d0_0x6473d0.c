// 函数名称: sub_6473d0
// 虚拟地址: 0x6473d0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_6473d0(int32_t* arg1 @ esi, void* arg2)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_8 = ecx
    void* edi = *(arg2 + 0x1c)
    
    if (edi == 0)
        return 0xffffff7f
    
    sub_68b1d0(arg1, 5, 8)
    int32_t i_1 = 6
    char const* const var_8_1 = "vorbis"
    int32_t i
    
    do
        sub_68b1d0(arg1, sx.d(*var_8_1), 8)
        var_8_1 = &var_8_1[1]
        i = i_1
        i_1 -= 1
    while (i != 1)
    sub_68b1d0(arg1, *(edi + 0x18) - 1, 8)
    
    if (*(edi + 0x18) s> i_1)
        void* var_8_2 = edi + 0x720
        
        do
            if (sub_650b20(*var_8_2, arg1) != 0)
                return 0xffffffff
            
            var_8_2 += 4
            i_1 += 1
        while (i_1 s< *(edi + 0x18))
    
    sub_68b1d0(arg1, 0, 6)
    sub_68b1d0(arg1, 0, 0x10)
    sub_68b1d0(arg1, *(edi + 0x10) - 1, 6)
    int32_t i_6 = 0
    
    if (*(edi + 0x10) s> 0)
        void* ebx = edi + 0x320
        int32_t i_2
        
        do
            sub_68b1d0(arg1, *ebx, 0x10)
            int32_t* eax_7 = (&data_825e6c)[*ebx]
            
            if (*eax_7 == 0)
                return 0xffffffff
            
            (*eax_7)(*(ebx + 0x100), arg1)
            i_2 = i_6 + 1
            ebx += 4
            i_6 = i_2
        while (i_2 s< *(edi + 0x10))
    
    sub_68b1d0(arg1, *(edi + 0x14) - 1, 6)
    int32_t i_7 = 0
    
    if (*(edi + 0x14) s> 0)
        void* ebx_1 = edi + 0x520
        int32_t i_3
        
        do
            sub_68b1d0(arg1, *ebx_1, 0x10)
            (*(&data_825e74)[*ebx_1])(*(ebx_1 + 0x100), arg1)
            i_3 = i_7 + 1
            ebx_1 += 4
            i_7 = i_3
        while (i_3 s< *(edi + 0x14))
    
    sub_68b1d0(arg1, *(edi + 0xc) - 1, 6)
    int32_t i_8 = 0
    
    if (*(edi + 0xc) s> 0)
        void* ebx_2 = edi + 0x120
        int32_t i_4
        
        do
            sub_68b1d0(arg1, *ebx_2, 0x10)
            (*(&data_825e80)[*ebx_2])(arg2, *(ebx_2 + 0x100), arg1)
            i_4 = i_8 + 1
            ebx_2 += 4
            i_8 = i_4
        while (i_4 s< *(edi + 0xc))
    
    sub_68b1d0(arg1, *(edi + 8) - 1, 6)
    int32_t i_9 = 0
    
    if (*(edi + 8) s> 0)
        void* ebx_3 = edi + 0x20
        int32_t i_5
        
        do
            sub_68b1d0(arg1, **ebx_3, 1)
            sub_68b1d0(arg1, *(*ebx_3 + 4), 0x10)
            sub_68b1d0(arg1, *(*ebx_3 + 8), 0x10)
            sub_68b1d0(arg1, *(*ebx_3 + 0xc), 8)
            i_5 = i_9 + 1
            ebx_3 += 4
            i_9 = i_5
        while (i_5 s< *(edi + 8))
    
    sub_68b1d0(arg1, 1, 1)
    return 0
}
