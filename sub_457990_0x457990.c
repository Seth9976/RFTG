// 函数名称: sub_457990
// 虚拟地址: 0x457990
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_457990(int32_t arg1 @ esi, int32_t arg2 @ edi)
{
    // 第一条实际指令: int32_t result = 0
    int32_t result = 0
    int32_t edx = 0
    
    if (arg2 s> 0)
        do
            void* ecx_3 = *(arg1 + (edx << 2)) * 0x128 + &data_2691ca8
            
            if (*(ecx_3 + 6) == 2 && *(ecx_3 + 7) == 6 && *(ecx_3 + 4) != 0x86)
                result += 1
            
            edx += 1
        while (edx s< arg2)
    
    return result
}
