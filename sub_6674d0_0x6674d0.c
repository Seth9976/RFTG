// 函数名称: sub_6674d0
// 虚拟地址: 0x6674d0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

char*sub_6674d0(void* arg1, char* arg2, int32_t arg3)
{
    // 第一条实际指令: int32_t esi = *(arg1 + 4)
    int32_t esi = *(arg1 + 4)
    char* result = arg2
    char* ecx = nullptr
    
    if (esi != 0)
        do
            *result += ecx[arg3]
            ecx = &ecx[1]
            result = &result[1]
        while (ecx u< esi)
    
    return result
}
