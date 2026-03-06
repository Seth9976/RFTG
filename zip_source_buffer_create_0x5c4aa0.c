// 函数名称: zip_source_buffer_create
// 虚拟地址: 0x5c4aa0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t*zip_source_buffer_create(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4, int32_t* arg5)
{
    // 第一条实际指令: if (arg1 == 0 && (arg3 != 0 || arg2 u> arg3))
    if (arg1 == 0 && (arg3 != 0 || arg2 u> arg3))
        zip_error_set(arg5, 0x12, 0)
        return 0
    
    int32_t* eax_2 = sub_5a881a(0x20)
    
    if (eax_2 == 0)
        zip_error_set(arg5, 0xe, eax_2)
        return 0
    
    int32_t* eax_5
    int32_t ecx_1
    int32_t edx_1
    eax_5, ecx_1, edx_1 = sub_5c42e0(arg1, arg2, arg3, arg4)
    eax_2[6] = eax_5
    
    if (eax_5 == 0)
        zip_error_set(arg5, 0xe, 0)
        __free_base(eax_2)
        return 0
    
    eax_2[7] = 0
    uint32_t eax_7
    int32_t edx_2
    eax_7, edx_2 = sub_5aa87a(eax_5, edx_1, ecx_1, nullptr)
    eax_2[4] = eax_7
    eax_2[5] = edx_2
    zip_error_init(eax_2)
    int32_t* result = zip_source_function_create(sub_5c4780, eax_2, arg5)
    
    if (result != 0)
        return result
    
    sub_5c4280(eax_2[6])
    __free_base(eax_2)
    return nullptr
}
