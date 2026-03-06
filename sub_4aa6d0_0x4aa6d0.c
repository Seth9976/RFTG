// 函数名称: sub_4aa6d0
// 虚拟地址: 0x4aa6d0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_4aa6d0(int32_t arg1, int32_t arg2 @ esi, int32_t arg3 @ edi)
{
    // 第一条实际指令: int32_t i = sx.d(*(arg1 * 0xb4 + arg2 + 0x44))
    int32_t i = sx.d(*(arg1 * 0xb4 + arg2 + 0x44))
    int32_t result = 0
    
    for (; i != 0xffffffff; i = sx.d(*(arg2 + ((i * 5 + 0x11d) << 2))))
        void* edx_3
        edx_3.b = *(*(arg2 + i * 0x14 + 0x46c) + 7)
        
        if (edx_3.b s>= 1 && edx_3.b s<= 6)
            *(arg3 + (result << 2)) = i
            result += 1
    
    return result
}
