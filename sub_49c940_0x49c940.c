// 函数名称: sub_49c940
// 虚拟地址: 0x49c940
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __fastcallsub_49c940(int32_t arg1, int32_t arg2, int32_t arg3 @ esi)
{
    // 第一条实际指令: int32_t i = sx.d(*(arg1 * 0xb4 + arg3 + 0x56))
    int32_t i = sx.d(*(arg1 * 0xb4 + arg3 + 0x56))
    int32_t result = 0
    int32_t ecx
    
    for (; i != 0xffffffff; i = sx.d(*(arg3 + (ecx << 2) + 0x476)))
        ecx = i * 5
        
        if ((*(*(arg3 + (ecx << 2) + 0x46c) + 0x10) & arg2) == arg2)
            result += 1
    
    return result
}
