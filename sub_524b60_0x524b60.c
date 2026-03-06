// 函数名称: sub_524b60
// 虚拟地址: 0x524b60
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_524b60(int32_t* arg1)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_c = ecx
    void* eax_1 = sub_530500(ecx, *arg1)
    int32_t i = 0
    
    if (*(eax_1 + 0x19d4) s> 0)
        void* ebx_1 = eax_1 + 0x15d0
        
        do
            sub_524b60(ebx_1)
            i += 1
            ebx_1 += 4
        while (i s< *(eax_1 + 0x19d4))
    
    sub_530620(eax_1)
    int32_t result = data_be1ee4
    data_be1ee4 = zx.d(*(eax_1 + 0x19dc))
    *(eax_1 + 0x19dc) = result
    data_be1ee8 -= 1
    return result
}
