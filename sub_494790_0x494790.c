// 函数名称: sub_494790
// 虚拟地址: 0x494790
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

voidsub_494790(int128_t* arg1, int32_t arg2, int32_t arg3, int32_t arg4, int32_t arg5, int32_t arg6, int32_t arg7, int32_t arg8)
{
    // 第一条实际指令: int32_t esi = arg5
    int32_t esi = arg5
    int32_t edi = arg4
    
    if (esi s> edi)
        return 
    
    int32_t ebx_1 = arg6
    
    while (true)
        if (edi == 0)
            sub_494690(edi, arg1, arg2, arg3)
            break
        
        sub_494790(arg1, arg2, arg3, edi - 1, esi, ebx_1 * 2, arg7, arg8)
        
        if (esi == 0)
            break
        
        esi -= 1
        edi -= 1
        ebx_1 = ebx_1 * 2 + 1
        
        if (esi s> edi)
            return 
}
