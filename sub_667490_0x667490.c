// 函数名称: sub_667490
// 虚拟地址: 0x667490
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_667490(void* arg1, int32_t arg2)
{
    // 第一条实际指令: void* result = arg1
    void* result = arg1
    int32_t edi = *(result + 4)
    int32_t edx_2 = (zx.d(*(result + 0xb)) + 7) s>> 3
    char* ecx = edx_2 + arg2
    
    if (edx_2 u< edi)
        result = ecx - arg2
        char* esi_1 = arg2 - edx_2
        
        do
            edx_2.b = *(esi_1 + result)
            *ecx += edx_2.b
            result += 1
            ecx = &ecx[1]
        while (result u< edi)
    
    return result
}
