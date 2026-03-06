// 函数名称: sub_5c3990
// 虚拟地址: 0x5c3990
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t*sub_5c3990(void* arg1, int32_t arg2, int32_t arg3, int32_t* arg4)
{
    // 第一条实际指令: int32_t* result = sub_5c1c70(arg4)
    int32_t* result = sub_5c1c70(arg4)
    
    if (result == 0)
        return result
    
    zip_source_keep(arg1)
    *result = arg1
    result[1] = arg2
    result[2] = arg3
    int32_t eax_2
    int32_t edx
    eax_2, edx = arg2(arg1, arg3, 0, 0, 0, 0xe)
    result[6] = eax_2
    result[7] = edx
    
    if (edx s<= 0 && (edx s< 0 || eax_2 u< 0))
        result[6] = 0x3f
        result[7] = 0
    
    return result
}
