// 函数名称: sub_6565c0
// 虚拟地址: 0x6565c0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_6565c0(int32_t* arg1, float* arg2)
{
    // 第一条实际指令: void* result = *arg1
    void* result = *arg1
    
    if (result == 1)
        return result
    
    int32_t ecx_1 = arg1[1]
    int32_t var_c_1 = ecx_1 + (result << 2)
    return sub_656390(result, arg1[2], arg2, result, arg2, ecx_1)
}
