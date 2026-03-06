// 函数名称: sub_5ca2e0
// 虚拟地址: 0x5ca2e0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5ca2e0(int32_t arg1)
{
    // 第一条实际指令: void* eax = data_bed820
    void* eax = data_bed820
    
    if (eax == 0)
        sub_5c8d60()
        return 0
    
    int32_t ecx = *(eax + 0x8c)
    
    if (ecx == 0)
        sub_5cce60("No dynamic GL support in video driver")
        return 0
    
    if (*(eax + 0x15c) != 0)
        return ecx(eax, arg1)
    
    sub_5cce60("No GL driver has been loaded")
    return 0
}
