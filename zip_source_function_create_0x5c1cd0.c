// 函数名称: zip_source_function_create
// 虚拟地址: 0x5c1cd0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t*zip_source_function_create(int32_t arg1, int32_t arg2, int32_t* arg3)
{
    // 第一条实际指令: int32_t* result = sub_5a881a(0x38)
    int32_t* result = sub_5a881a(0x38)
    
    if (result == 0)
        zip_error_set(arg3, 0xe, 0)
        return 0
    
    *result = 0
    result[1] = 0
    result[2] = 0
    result[8] = 0
    result[9] = 0
    result[0xa].b = 0
    result[0xb] = 0
    result[0xc] = 1
    zip_error_init(&result[3])
    result[1] = arg1
    result[2] = arg2
    int32_t eax_3
    int32_t edx
    eax_3, edx = arg1(arg2, 0, 0, 0, 0xe)
    result[6] = eax_3
    result[7] = edx
    
    if (edx s<= 0 && (edx s< 0 || eax_3 u< 0))
        result[6] = 0x3f
        result[7] = 0
    
    return result
}
