// 函数名称: sub_64bd30
// 虚拟地址: 0x64bd30
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_64bd30(void* arg1, int32_t* arg2)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_8 = ecx
    void* ebx = *(arg1 + 0x68)
    void* esi = *(ebx + 0x78)
    arg1 = 7
    
    if (esi == 0)
        return 0
    
    if (arg2 != 0)
        void* eax_2 = *(*(esi + 0x40) + 0x68)
        int32_t ecx_1 = *(esi + 0x68)
        
        if (eax_2 != 0xffffffb0 && *(eax_2 + 0x50) != 0)
            arg1 = *(ebx + 0x7c)
        
        *arg2 = Windows::UI::Xaml::GridLength::GridUnitType::get(*(ecx_1 + (arg1 << 2) + 0xc))
        arg2[1] = sub_68b1a0(*(ecx_1 + (arg1 << 2) + 0xc))
        arg2[2] = 0
        arg2[3] = *(esi + 0x2c)
        arg2[4] = *(esi + 0x30)
        arg2[5] = *(esi + 0x34)
        arg2[6] = *(esi + 0x38)
        arg2[7] = *(esi + 0x3c)
    
    *(ebx + 0x78) = 0
    return 1
}
