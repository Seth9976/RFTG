// 函数名称: sub_5c8c60
// 虚拟地址: 0x5c8c60
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5c8c60(int16_t arg1)
{
    // 第一条实际指令: int32_t ecx = 0
    int32_t ecx = 0
    data_bed81c = 0
    void* eax = &data_8b9670
    
    while (*eax != arg1)
        eax += 0x14
        ecx += 1
        
        if (eax s>= &data_8b9738)
            break
    
    data_bed81c = ecx
    data_bed818 = 0
    return sub_5c8ad0() __tailcall
}
