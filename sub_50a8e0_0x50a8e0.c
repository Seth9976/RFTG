// 函数名称: sub_50a8e0
// 虚拟地址: 0x50a8e0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t* __convention("regparm")sub_50a8e0(int32_t* arg1)
{
    // 第一条实际指令: arg1[3] += 1
    arg1[3] += 1
    
    if (*arg1 == 0)
        sub_50ac20(arg1)
    
    int32_t* result = *arg1
    *arg1 = *result
    __builtin_memset(result, 0, 0x24)
    
    if (result != 0)
        result[3] = &data_83f3d3
        result[8] = &data_83f3d3
    
    return result
}
