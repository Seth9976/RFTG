// 函数名称: sub_5b66f8
// 虚拟地址: 0x5b66f8
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_5b66f8(int32_t arg1, int32_t* arg2)
{
    // 第一条实际指令: void* result = *arg2 + arg1
    void* result = *arg2 + arg1
    
    if (arg2[1] s< 0)
        return result
    
    int32_t* edx_1 = arg2[1]
    return result + *(*(edx_1 + arg1) + arg2[2]) + edx_1
}
