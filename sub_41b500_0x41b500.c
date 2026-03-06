// 函数名称: sub_41b500
// 虚拟地址: 0x41b500
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __fastcallsub_41b500(void* arg1, int32_t arg2, int32_t arg3 @ esi)
{
    // 第一条实际指令: int32_t i = sx.d(*(arg1 + 0x26))
    int32_t i = sx.d(*(arg1 + 0x26))
    int32_t result = 0
    
    for (; i != 0xffffffff; i = sx.d(*(arg2 + ((i * 5 + 0x11d) << 2))))
        if ((*(*(arg2 + i * 0x14 + 0x46c) + 0x10) & arg3) != 0)
            result += 1
    
    return result
}
