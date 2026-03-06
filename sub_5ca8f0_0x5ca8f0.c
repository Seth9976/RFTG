// 函数名称: sub_5ca8f0
// 虚拟地址: 0x5ca8f0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5ca8f0(int32_t arg1)
{
    // 第一条实际指令: if (data_bed820 == 0)
    if (data_bed820 == 0)
        return sub_5c8d60() __tailcall
    
    if (sub_5ca850() == 0)
        sub_5cce60("No OpenGL context has been made current")
        return 0xffffffff
    
    void* ecx_1 = data_bed820
    int32_t eax_2 = *(ecx_1 + 0xa0)
    
    if (eax_2 != 0)
        return eax_2(ecx_1, arg1)
    
    sub_5cce60("Setting the swap interval is not supported")
    return 0xffffffff
}
