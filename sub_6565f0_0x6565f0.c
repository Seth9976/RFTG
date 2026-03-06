// 函数名称: sub_6565f0
// 虚拟地址: 0x6565f0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

floatsub_6565f0(int32_t* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t eax = arg2 * 3
    int32_t eax = arg2 * 3
    *arg1 = arg2
    int32_t eax_1
    int32_t ecx
    int32_t ecx_1
    int32_t edx
    int32_t edx_1
    eax_1, ecx_1, edx_1 = _calloc(eax, edx, ecx, eax, 4)
    arg1[1] = eax_1
    float result = _calloc(eax_1, edx_1, ecx_1, 0x20, 4)
    arg1[2] = result
    
    if (arg2 == 1)
        return result
    
    return sub_651b70(arg2, eax_1 + (arg2 << 2), result)
}
