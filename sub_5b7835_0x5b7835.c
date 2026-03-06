// 函数名称: sub_5b7835
// 虚拟地址: 0x5b7835
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5b7835(int32_t arg1, int32_t arg2, int32_t arg3)
{
    // 第一条实际指令: uint32_t ebx = 0
    uint32_t ebx = 0
    
    if (arg2 u> 0 && divu.dp.d(0:0xffffffe0, arg2) u< arg3)
        *__errno() = 0xc
        return 0
    
    uint32_t ecx_1 = arg2 * arg3
    int32_t edi
    int32_t var_10_1 = edi
    
    if (arg1 != 0)
        ebx = _msize_base(arg1)
    
    int32_t result = _realloc(arg1, ecx_1)
    
    if (result != 0 && ebx u< ecx_1)
        sub_5abfc0(ebx + result, 0, ecx_1 - ebx)
    
    return result
}
