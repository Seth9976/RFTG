// 函数名称: sub_504180
// 虚拟地址: 0x504180
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t*sub_504180(struct _EXCEPTION_REGISTRATION_RECORD** arg1, int32_t* arg2)
{
    // 第一条实际指令: void* esi = data_30785c8
    void* esi = data_30785c8
    *(esi + 0x1c) += 1
    int32_t edx
    
    if (*(esi + 0x10) == 0)
        edx = sub_504460(esi + 0x10)
    
    int32_t* result = *(esi + 0x10)
    *(esi + 0x10) = *result
    __builtin_memset(result, 0, 0x14)
    
    if (result != 0)
        *result = &data_83f3d3
        result[1] = 0
        result[2] = 0
        result[3] = 0
    
    sub_504160(arg2, edx, nullptr, result, arg1)
    return result
}
