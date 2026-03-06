// 函数名称: sub_65d780
// 虚拟地址: 0x65d780
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t*sub_65d780(int32_t* arg1)
{
    // 第一条实际指令: int32_t eax
    int32_t eax
    int32_t ecx
    int32_t edx
    int32_t* result = _calloc(eax, edx, ecx, 1, 0x20)
    int32_t ecx_1 = *arg1
    int32_t edx_1 = arg1[2]
    result[1] = ecx_1
    *result = edx_1
    result[5] = arg1
    result[2] = _calloc(arg1, edx_1, ecx_1, 2, 4)
    return result
}
