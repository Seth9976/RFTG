// 函数名称: sub_5ca010
// 虚拟地址: 0x5ca010
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5ca010(int32_t* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t eax = data_bed820
    int32_t eax = data_bed820
    
    if (eax == 0)
        return sub_5c8d60() __tailcall
    
    if (arg1 == 0 || *arg1 != eax + 0xf4)
        sub_5cce60("Invalid window")
        return 0xffffffff
    
    int32_t result = arg1[0xc]
    int32_t ebx
    ebx.b = arg2 != 0
    
    if (ebx == (result u>> 8 & 1))
        return result
    
    if (arg2 == 0)
        arg1[0xc] = result & 0xfffffeff
        return sub_5c9fc0(arg1)
    
    arg1[0xc] = result | 0x100
    return sub_5c9fc0(arg1)
}
