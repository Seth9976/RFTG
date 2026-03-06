// 函数名称: sub_5d5080
// 虚拟地址: 0x5d5080
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __fastcallsub_5d5080(int32_t* arg1, int32_t arg2 @ esi, int32_t arg3 @ edi)
{
    // 第一条实际指令: int32_t edx_1 = arg1[1]
    int32_t edx_1 = arg1[1]
    int32_t result = 0
    
    if (arg2 s< edx_1)
        result = 2
    else if (arg2 s>= arg1[3] + edx_1)
        result = 1
    
    int32_t edx = *arg1
    
    if (arg3 s< edx)
        return result | 4
    
    if (arg3 s< arg1[2] + edx)
        return result
    
    return result | 8
}
