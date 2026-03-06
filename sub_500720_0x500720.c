// 函数名称: sub_500720
// 虚拟地址: 0x500720
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t*sub_500720()
{
    // 第一条实际指令: void* esi = data_30785c8
    void* esi = data_30785c8
    *(esi + 0x1c) += 1
    
    if (*(esi + 0x10) == 0)
        sub_504460(esi + 0x10)
    
    int32_t* result = *(esi + 0x10)
    *(esi + 0x10) = *result
    __builtin_memset(result, 0, 0x14)
    
    if (result != 0)
        *result = &data_83f3d3
        result[1] = 0
        result[2] = 0
        result[3] = 0
    
    return result
}
