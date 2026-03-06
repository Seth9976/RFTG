// 函数名称: sub_469400
// 虚拟地址: 0x469400
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __fastcallsub_469400(int32_t arg1, void* arg2, int32_t* arg3 @ esi, int32_t* arg4 @ edi)
{
    // 第一条实际指令: int32_t result_1 = *(arg2 + 0x50)
    int32_t result_1 = *(arg2 + 0x50)
    int32_t result = 0
    
    if (result_1 == 1)
        result = result_1
    
    if (result_1 == 3)
        result += 1
    
    if (result_1 == 4)
        result += 1
    
    int32_t ecx = *(arg2 + 0x5c)
    
    if (ecx == 1)
        result += 1
    
    if (ecx == 3)
        result += 1
    
    if (ecx == 4)
        result += 1
    
    int32_t ecx_1 = *(arg2 + 0x68)
    
    if (ecx_1 == 1)
        result += 1
    
    if (ecx_1 == 3)
        result += 1
    
    if (ecx_1 == 4)
        result += 1
    
    int32_t ecx_2 = *(arg2 + 0x74)
    
    if (ecx_2 == 1)
        result += 1
    
    if (ecx_2 == 3)
        result += 1
    
    if (ecx_2 == 4)
        result += 1
    
    *arg4 = result
    *arg3 = result
    return result
}
