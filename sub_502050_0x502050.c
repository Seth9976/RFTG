// 函数名称: sub_502050
// 虚拟地址: 0x502050
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t* __convention("regparm")sub_502050(int32_t arg1, int32_t arg2, int32_t* arg3, void* arg4, char* arg5)
{
    // 第一条实际指令: int32_t* result_1 = arg3
    int32_t* result_1 = arg3
    int32_t* esi = data_30785c8
    esi[3] += 1
    
    if (*esi == 0)
        sub_5043e0(esi)
    
    int32_t* result = *esi
    *esi = *result
    __builtin_memset(result, 0, 0x14)
    
    if (result != 0)
        *result = &data_83f3d3
        result[1] = &data_83f3d3
    
    result_1 = result
    sub_4c4590(arg5)
    sub_518190(arg4 + 4, &result_1)
    return result
}
